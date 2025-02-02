// https://leetcode.com/problems/majority-element
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate, cnt = 0;
        for(int num: nums) {
            if(cnt == 0) {
                candidate = num;
            }
            cnt += (num == candidate) ? 1 : -1 ;
        }
        return candidate;
    }
};