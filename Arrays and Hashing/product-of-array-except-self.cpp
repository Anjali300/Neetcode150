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



Another way ---

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        //Forward product
        vector<int> answer(nums.size());
        answer[0] = 1;
        for(int i = 1; i < nums.size(); i++){
            answer[i] = answer[i-1] * nums[i-1];
        }

        //Backward product
        int product = 1;
        for(int i = nums.size() - 1; i >= 0; i--){
            answer[i] = product * answer[i];
            product = product * nums[i];
        }
        return answer;

    }
};
