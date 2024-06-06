/*
Implement a function called itemInCommon() that checks if two input vectors have at least one common item.



Input:
The function takes two vectors of integers as input parameters:

vect1: a vector of integers

vect2: a vector of integers



Output:
The function should return a boolean value indicating whether the two input vectors have at least one item in common or not.
*/

bool itemInCommon(vector<int> vect1, vector<int> vect2) {
    unordered_set<int> elementSet(vect1.begin(), vect1.end());
    for (const auto& elem : vect2) {
        if (elementSet.find(elem) != elementSet.end()) {
            // Common element found
            return true;
        }
    }
    return false;
}
