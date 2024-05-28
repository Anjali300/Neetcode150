/*
Problem: LeetCode 567 - Permutation in String

Description:
Given two strings `s1` and `s2`, return `true` if `s2` contains the permutation of `s1`.
In other words, one of the first string's permutations is the substring of the second string.
*/

class Solution {
public:
    bool checkInclusion(string p, string s) {
         if(p.size()>s.size()) return false;

        map<char,int>m;
        for(auto x:p) m[x]+=1;

        int k=p.size(); // size of window

        map<char,int>temp;
        for(int i=0;i<k;i++){
            temp[s[i]]+=1;
        }
        if(m==temp) return true;

        int left=0;
        for(int i=k;i<s.size();i++){
           temp[s[i]]++; // Add the new character to the window
           if(temp[s[left]]==1) {
            temp.erase(s[left]);
            left++; // Remove the leftmost character if its count becomes 0
            } 
           else {
            temp[s[left]]--;  // Decrement the count of the leftmost character and move the window right
            left++;
           }
           
           if(temp==m) return true; // Check if the current window matches the frequency map of `p`
        }
        return false;
    }
};
