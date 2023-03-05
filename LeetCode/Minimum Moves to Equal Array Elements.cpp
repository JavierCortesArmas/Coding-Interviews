class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size(), ans(0), min = nums[0];
        for (int i = n - 1; i >= 0; i--) { ans += (nums[i] - min); }
        return ans;
    }
};
