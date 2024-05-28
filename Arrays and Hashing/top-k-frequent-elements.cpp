/*
Problem: LeetCode 347 - Top K Frequent Elements

Description:
Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any order.

*/

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       unordered_map<int,int> m; // storing pairwise value in map
       for(auto a:nums){
        m[a]++;
       } 
       priority_queue<pair<int,int>> pq;
       for(auto i: m){
        pq.push({i.second,i.first});  //pushing the count first and then value
       }
       vector<int> p;
       
       for(int i=0;i<k;i++){
        p.push_back(pq.top().second);  //poping the top element
        pq.pop();
       }
       return p;
    }
};
