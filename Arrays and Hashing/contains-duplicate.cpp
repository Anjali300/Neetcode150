/*
Problem: LeetCode 217 - Contains Duplicate
Given an integer array nums, return true if any value appears more than once in the array, otherwise return false.
*/

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> x;
        for(int i:nums){
            if(x.count(i)){
                return true;
            }
            x.insert(i);
        }
        return false;
    }
};
