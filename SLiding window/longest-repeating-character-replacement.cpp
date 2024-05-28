/*
Problem: LeetCode 424 - Longest Repeating Character Replacement

Description:
Given a string `s` that consists of only uppercase English letters, you can perform at most `k` operations on that string.
In one operation, you can choose any character of the string and change it to any other uppercase English letter.
Find the length of the longest substring containing repeating letters you can get after performing the above operations.
*/


class Solution {
public:
    int characterReplacement(string s, int k) {

        int i=0; //left
        int j=0; //right
        int maxf = 0; //storing the frequency
        int ans = 0;
        unordered_map<char,int> c; //storing each character count
        while(j<s.length()){
            c[s[j]]++; // increase the count of each character
            maxf = max(maxf,c[s[j]]); // track of maximum frequency of any character in current window
            if((j-i+1)-maxf>k){ // if length of window and maximum frequency is greater than k characters
                c[s[i]]--; // decrease the count as we are moving the window 
                i++;
                j++;
            } else 
            {
                ans = max(ans,(j-i+1));   //track of maximum length of window
                j++;
            }

        }
        return ans;
    
    }
};
