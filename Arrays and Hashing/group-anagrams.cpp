/*
Problem: LeetCode 49 - Group Anagrams

Description:
Given an array of strings strs, group the anagrams together. You can return the answer in any order.
*/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> m;
        for(auto x: strs){
            string word = x;
            sort(word.begin(),word.end());
            m[word].push_back(x);  // each unique word will be storing a vector 
        }

        vector<vector<string>> ans;
        for(auto j:m){
            ans.push_back(j.second);
        }
        return ans;
    }
};
