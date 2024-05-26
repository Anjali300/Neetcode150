/*
Problem: LeetCode 567 - Permutation in String

Description:
Given two strings `s1` and `s2`, return `true` if `s2` contains the permutation of `s1`.
In other words, one of the first string's permutations is the substring of the second string.

Intuition:
To check if `s2` contains a permutation of `s1`, we can use a sliding window approach.
- We initialize two frequency maps, `freq1` and `freq2`, to store the frequencies of characters in `s1` and the sliding window of `s2`.
- If the frequencies in `freq1` and `freq2` are equal, then it means `s2` contains a permutation of `s1`.
- By sliding the window through `s2`, we can keep track of the frequencies of characters in the current window and compare them with the frequencies in `freq1`.

Approach:
1. We start by checking if the length of `s1` is greater than `s2`. If it is, then it's not possible for `s2` to contain a permutation of `s1`, so we return `false`.
2. We initialize two arrays, `freq1` and `freq2`, to store the frequencies of characters in `s1` and the sliding window of `s2`.
   - Both arrays should have a size of 26 to represent the lowercase English letters.
3. We iterate through the first `s1.size()` characters of `s2` to initialize the frequencies in both arrays.
4. We initialize two pointers, `L` and `R`, representing the left and right ends of the window, respectively.
5. If the frequencies in `freq1` and `freq2` are equal, we return `true` because `s2` contains a permutation of `s1`.
6. We iterate from index `s1.size()` to `s2.size()` using the sliding window approach:
   - If the frequency of the character at index `L` in `freq2` is 1, we remove it from `freq2` since we will increment `L` later.
   - Otherwise, we decrement the frequency of the character at index `L` in `freq2` since we will increment `L`.
   - We increment the frequency of the character at index `R` in `freq2` since we have added a new character to the window.
   - We increment `L` to slide the window to the right.
   - If the frequencies in `freq1` and `freq2` are equal, we return `true`.
7. If no permutation is found after iterating through `s2`, we return `false`.

Time Complexity:
The time complexity is O(n), where n is the length of `s2`. We iterate through `s2` once using the sliding window approach.

Space Complexity:
The space complexity is O(1) as both `freq1` and `freq2` have a fixed size of 26, representing lowercase English letters.
*/

class Solution {
public:
    bool checkInclusion(string p, string s) {
         if(p.size()>s.size()) return false;

        map<char,int>m;
        for(auto x:p) m[x]+=1;

        int k=p.size(); // size of window

        map<char,int>temp;
        for(int i=0;i<k;i++){
            temp[s[i]]+=1;
        }
        if(m==temp) return true;

        int left=0;
        for(int i=k;i<s.size();i++){
           temp[s[i]]++; // Add the new character to the window
           if(temp[s[left]]==1) {
            temp.erase(s[left]);
            left++; // Remove the leftmost character if its count becomes 0
            } 
           else {
            temp[s[left]]--;  // Decrement the count of the leftmost character and move the window right
            left++;
           }
           
           if(temp==m) return true; // Check if the current window matches the frequency map of `p`
        }
        return false;
    }
};
