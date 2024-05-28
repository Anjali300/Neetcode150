/*
Problem: LeetCode 242 - Valid Anagram

Description:
Given two strings s and t, return true if t is an anagram of s, and false otherwise.
*/

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }     
        unordered_map<char,int> m;
        for(int i=0;i<s.length();i++){
            m[s[i]]++;
        }
        for(int i=0;i<t.length();i++){
            m[t[i]]--;
        }
        for(auto it = m.begin();it!=m.end();it++){
            if(it->second!=0){
                return false;
            }
        }
        return true;
    }
};
