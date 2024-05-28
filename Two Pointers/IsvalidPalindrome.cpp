/*
Problem: LeetCode 125 - Valid Palindrome

Description:
Given a string s, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

Intuition:
To check if a string is a palindrome, we need to compare characters from both ends of the string. We can ignore non-alphanumeric characters and treat uppercase and lowercase letters as the same.

*/

class Solution {
public:
    bool isPalindrome(string s) {
        int i=0; //start
        int j= s.length()-1; // end
        while(i<j){
        // isalnum -> Is alphabet or number
            if(!isalnum(s[i])){
                i++;
                continue;
            }
            if(!isalnum(s[j])){
                j--;
                continue;
            }
            if(tolower(s[i])!=tolower(s[j])){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
