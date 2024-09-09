class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() <= 2) {
        return nums.size();
    }

    int n = 2;
    for (int i = 2; i < nums.size(); i++) {
        if (nums[i] != nums[n - 2]) {
            nums[n] = nums[i];
            n++;
        }
    }

    return n;
    }
};
