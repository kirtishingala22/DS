class Solution {
public:
    void rotate(vector<int>& nums, int k) {
         int n = nums.size();
    k = k % n;
    if (k == 0)
    {return;
    }

    vector<int> rotate(n);
    for (int i = 0; i < k; i++) {
        rotate[i] = nums[n - k + i];
    }
    for (int i = 0; i < n - k; i++) {
        rotate[k + i] = nums[i];
    }
    nums = rotate;
    }
};