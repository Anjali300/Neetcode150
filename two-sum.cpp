/*
Problem: LeetCode 1 - Two Sum

Description:
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     unordered_map<int,int> m;
     vector<int> v(2);
     for(int i=0;i<nums.size();i++){
        int c = target-nums[i];
        if(m.count(c)>0){
            v[0] = m[c];
            v[1] = i;
            sort(v.begin(), v.end());
            return v;
        }
        m[nums[i]] = i;
     }
     return {};

    }
};
