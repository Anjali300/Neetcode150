/*

Find Duplicate Integer
You are given an array of integers nums containing n + 1 integers. Each integer in nums is in the range [1, n] inclusive.

Every integer appears exactly once, except for one integer which appears two or more times. Return the integer that appears more than once.

*/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> myMap;
        for(auto &elem:nums){
            myMap[elem]++;
        }
        for(auto it=myMap.begin();it!=myMap.end();it++){
            if(it->second > 1){
                return it->first;
            }
        }
    }
};
