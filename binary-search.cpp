/*
Problem: LeetCode 704 - Binary Search

Description:
Given a sorted (in ascending order) integer array nums of n elements and a target value, write a function to search target in nums. If target exists, then return its index, otherwise return -1.

*/

class Solution {
public:
    int search(vector<int>& nums, int target) {
        vector<int>::iterator it; // Iterator used to store the position // of searched element
        it = find(nums.begin(),nums.end(),target);
        if(it != nums.end()){
            return it-nums.begin();
        } else {
            return -1;
        }
    }
};
