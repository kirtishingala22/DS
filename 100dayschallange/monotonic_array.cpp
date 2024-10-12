
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int i = 1;
        bool isAscending = true, isDescending = true;
        
        while (i < nums.size()) {
            if (nums[i] > nums[i - 1]) {
                isDescending = false;
            }
            if (nums[i] < nums[i - 1]) {
                isAscending = false;
            }
            i++;
        }
        
        return isAscending || isDescending;
    }
};