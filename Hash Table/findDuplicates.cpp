/*

Find Duplicates ( ** Interview Question)
Implement a function called findDuplicates() that finds and returns all the duplicate elements in a given vector of integers.



Input:
The function takes a constant reference to a vector of integers nums.



Output:
The function should return a vector of integers containing all the duplicate elements in the input vector nums. 
The order of the elements in the output vector does not matter.

*/

vector<int> findDuplicates(const vector<int>& nums) {
    unordered_map<int,int> myMap;
    vector<int> v;
    for (const auto& elem : nums) {
        myMap[elem]++;
    }
    
    for(auto it=myMap.begin();it!=myMap.end();it++){
        if(it->second>1){
            v.push_back(it->first);
        }
    }
    return v;
}
