/*

Max Water Container

You are given an integer array heights where heights[i] represents the height of the 𝑖𝑡ℎ bar

You may choose any two bars to form a container. Return the maximum amount of water a container can store.

*/

class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i=0;
        int j=heights.size()-1;
        int maxArea = 0; // keep track of the maximum area found
        while(i<j){
            int currArea = min(heights[i],heights[j])*(j-i);  //Multiply the minimum height by the width, which is the difference between the indices of the pointers: (right - left)
            maxArea = max(maxArea , currArea);
            if(heights[i]<heights[j]){
                i++;
            } else {
                j--;
            }
        }
        return maxArea;
    }
};
