/*
Problem: LeetCode 347 - Top K Frequent Elements

Description:
Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any order.

Intuition:
To find the k most frequent elements, we can utilize a combination of a hash map and bucket sort. By counting the frequencies of elements using the hash map and using bucket sort to group elements by their frequencies, we can efficiently find the k most frequent elements.

Approach:
1. Initialize an empty hash map, m, to store the frequencies of elements.
2. Iterate through each element num in the input array nums:
    - Increment the frequency count of num in the hash map.
3. Create a vector of vectors, buckets, to act as buckets for grouping elements based on their frequencies.
4. Iterate through the key-value pairs in the hash map:
    - Place each key (element) in the corresponding bucket based on its frequency.
5. Create an empty vector, result, to store the k most frequent elements.
6. Iterate from the highest bucket index down to 0:
    - If the result vector size reaches k, break the loop.
    - If the current bucket is not empty, append its elements to the result vector.
7. Return the result vector, which represents the k most frequent elements.

Time Complexity:
The time complexity of this approach is O(n), where n is the size of the input array nums. This is because we iterate through the array once to count the frequencies and place elements in the buckets.

Space Complexity:
The space complexity is O(n), as we store the frequencies of elements in the hash map and the bucket vectors.
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
