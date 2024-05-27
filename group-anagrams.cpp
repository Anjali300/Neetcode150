/*
Problem: LeetCode 49 - Group Anagrams

Description:
Given an array of strings strs, group the anagrams together. You can return the answer in any order.

Intuition:
An anagram is a word formed by rearranging the letters of another word. To group anagrams together, we can utilize a hash map. By sorting each string and using the sorted string as a key in the hash map, we can efficiently group the anagrams.

Approach:
1. Initialize an empty hash map to store the groups of anagrams.
2. Iterate through each string str in the input array strs:
    - Sort the characters of str to create a sorted string.
    - If the sorted string is already present in the hash map, add str to its corresponding group.
    - Otherwise, create a new group in the hash map with the sorted string as the key and str as the initial value.
3. Return the values of the hash map, which represent the grouped anagrams.

Time Complexity:
The time complexity of this approach is O(n * k * log k), where n is the size of the input array strs and k is the maximum length of a string in strs.
This is because we iterate through the array and sort each string, which takes O(k * log k) time for each string.

Space Complexity:
The space complexity is O(n * k), as we store all the strings in the hash map, where n is the number of groups and k is the maximum length of a string.
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
