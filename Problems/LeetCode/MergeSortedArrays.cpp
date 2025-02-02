// https://leetcode.com/problems/merge-sorted-array
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int mp = m - 1, np = n - 1, i;
        for(i = m + n - 1; mp >= 0 && np >= 0; i--) {
            if(nums1[mp] > nums2[np]) {
                nums1[i] = nums1[mp];
                mp--;
            }
            else {
                nums1[i] = nums2[np];
                np--;
            }
        }
        while(np >= 0) {
            nums1[i--] = nums2[np--];
        }
    }
};