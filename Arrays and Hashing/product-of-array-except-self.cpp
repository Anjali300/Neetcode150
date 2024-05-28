/*
Problem: LeetCode 238 - Product of Array Except Self

Description:
Given an integer array nums, return an array output such that output[i] is equal to the product of all the elements of nums except nums[i].

*/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> output;
        for(int i=0;i<n;i++){
            int product=1;
            for(int j=0;j<n;j++){
                if(i==j) continue;
                else {
                    product = product*nums[j];
                }
            }
            output.push_back(product);
        }
        return output;

    }
};
