/*

Find Target in Rotated Sorted Array

You are given an array of length n which was originally sorted in ascending order. It has now been rotated between 1 and n times. For example, the array nums = [1,2,3,4,5,6] might become:

[3,4,5,6,1,2] if it was rotated 4 times.
[1,2,3,4,5,6] if it was rotated 6 times.
Given the rotated sorted array nums and an integer target, return the index of target within nums, or -1 if it is not present.

You may assume all elements in the sorted rotated array nums are unique,

*/

class Solution {
public:
    int search(vector<int>& nums, int target) {
        vector<int>::iterator it;
        it = find(nums.begin(),nums.end(),target);
        if(it!= nums.end()){
            return it - nums.begin();
        } else {
            return -1;
        }

    }
};
