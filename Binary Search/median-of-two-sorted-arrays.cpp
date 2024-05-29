/*

Median of Two Sorted Arrays

You are given two integer arrays nums1 and nums2 of size m and n respectively, where each is sorted in ascending order. Return the median value among all elements of the two arrays.

*/

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v; //creating a vector
        for(auto i:nums1){
            v.push_back(i); //pushing values of first vector
        }
        for(auto j: nums2){
            v.push_back(j); //pushing values of second vector
        }
        int n = v.size();
        sort(v.begin(),v.end()); // sort the array 
        float value;
        if(n%2 == 0){
            return (v[n / 2 - 1] + v[n / 2]) / 2.0; // if n is even then return middle two elements sum/2 
        } else{
            return v[n / 2]; else return middle element
        }
    }
};
