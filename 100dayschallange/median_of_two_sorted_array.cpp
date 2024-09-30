class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size(), n = nums2.size();
    int i = 0, j = 0;
    int m1 = 0, m2 = 0;

    for (int count = 0; count <= (m + n) / 2; count++) {
        m2 = m1;
        if (i < m && j < n) {
            if (nums1[i] < nums2[j]) {
                m1 = nums1[i++];
            } else {
                m1 = nums2[j++];
            }
        } else if (i < m) {
            m1 = nums1[i++];
        } else {
            m1 = nums2[j++];
        }
    }

    if ((m + n) % 2 == 1) {
        return m1;
    } else {
        return (m1 + m2) / 2.0;

    }
    }
};