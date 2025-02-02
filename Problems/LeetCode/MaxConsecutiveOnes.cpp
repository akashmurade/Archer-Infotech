// https://leetcode.com/problems/max-consecutive-ones
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxcnt, tempcnt;
        for(int num: nums) {
            if(num == 1) {
                tempcnt++;
            }
            else {
                maxcnt = tempcnt > maxcnt ? tempcnt : maxcnt;
                tempcnt = 0;
            }
        }
        maxcnt = tempcnt > maxcnt ? tempcnt : maxcnt;
        return maxcnt;
    }
};