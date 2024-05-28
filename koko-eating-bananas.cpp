/* 

problem --- Eating Bananas

ou are given an integer array piles where piles[i] is the number of bananas in the ith pile. You are also given an integer h, which represents the number of hours you have to eat all the bananas.

You may decide your bananas-per-hour eating rate of k. Each hour, you may choose a pile of bananas and eats k bananas from that pile. If the pile has less than k bananas, you may finish eating the pile but you can not eat from another pile in the same hour.

Return the minimum integer k such that you can eat all the bananas within h hours.



Understanding of problem ---

Binary Search Setup:

Set the lower bound (l) to 1 (the minimum possible speed).
Set the upper bound (r) to the maximum number of bananas in any pile (the worst-case scenario where Koko eats the largest pile in one go).
Binary Search Execution:

Calculate the middle speed m = l + (r - l) / 2.
Determine the total hours needed to eat all the bananas at speed m.
If the total hours are less than or equal to h, it means m is a feasible speed, but we need to check if there's a smaller feasible speed, so adjust the upper bound to m.
If the total hours exceed h, m is too slow, so adjust the lower bound to m + 1.
Repeat until the lower bound meets the upper bound.

Dry Run :

piles = [3, 6, 7, 11], h = 8
Initial bounds: l = 1, r = 11
First iteration: m = 6; required hours = 1 + 1 + 2 + 2 = 6 (feasible, so r = 6)
Second iteration: m = 3; required hours = 1 + 2 + 3 + 4 = 10 (not feasible, so l = 4)
Third iteration: m = 5; required hours = 1 + 2 + 2 + 3 = 8 (feasible, so r = 5)
Fourth iteration: m = 4; required hours = 1 + 2 + 2 + 3 = 8 (feasible, so r = 4)
Bounds meet at 4, return 4.



*/


class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = *max_element(piles.begin(),piles.end());
       
        while(left<right){
            int rate = left+(right-left)/2;/// finding the mid value 
            long long sum = 0;
            for(auto s : piles){
                sum = sum+ ceil((float)s/rate);  // getting the sum dividing the mid
            }

            if(sum<=h){
                right = rate;
            } else {
                left = rate+1;
            }
        }
        return left;

    }
};


