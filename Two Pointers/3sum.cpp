/*

Three Integer Sum

Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] where nums[i] + nums[j] + nums[k] == 0, and the indices i, j and k are all distinct.

The output should not contain any duplicate triplets. You may return the output and the triplets in any order.

*/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> s;
      vector<vector<int>> v;
     sort(nums.begin(),nums.end());
      for(int i =0;i<nums.size();i++){
        int j = i+1;
        int k = nums.size()-1;
        while(j<k){
            int sum = nums[i]+nums[j]+nums[k];
            if(sum==0){
                s.insert({nums[i], nums[j], nums[k]});
                j++;
                k--;
            } else if(sum<0){
                j++;
            } else {
                k--;
            }
        }

      }
      for(auto a : s){
        v.push_back(a);
      }
return v;
      }  
};
