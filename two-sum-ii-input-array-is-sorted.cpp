/*
Two Integer Sum II

Given an array of integers numbers that is sorted in non-decreasing order.

Return the indices (1-indexed) of two numbers, [index1, index2], such that they add up to a given target number target and index1 < index2. Note that index1 and index2 cannot be equal, therefore you may not use the same element twice.

There will always be exactly one valid solution.
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
       int i = 0;
       int j = numbers.size()-1;
       while(i<j){
        int sum = numbers[i]+numbers[j];
        if(sum==target){
            return {i+1,j+1};
        }else if(sum<target){
             i++;
        }else{
            j --;
        }
       }
       return {};
       } 
};
