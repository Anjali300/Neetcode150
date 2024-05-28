/*
Problem: LeetCode 3 - Longest Substring Without Repeating Characters

Description:
Given a string `s`, find the length of the longest substring without repeating characters.
*/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      int i = 0;
      int j = 0;
      int maxlen = 0;
      unordered_set<char> x;
      while(j < s.length()){
        if(x.count(s[j])){
            x.erase(s[i]);
            i++;
        } else {
            x.insert(s[j]);
            maxlen = max(maxlen,j-i+1);
            j++;
        }
      }
      return maxlen;

    }
};
