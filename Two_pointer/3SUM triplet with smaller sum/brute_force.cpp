class Solution {
public:
    int threeSumSmaller(vector<int>& nums, int target) {

        int n = nums.size();
        int count = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                for (int k = j + 1; k < n; k++) {

                    int sum = nums[i] + nums[j] + nums[k];
                    if (sum < target) {
                        count++;
                    }
                }
            }
        }

        return count;
    }
};
//TC:    O(n³)
//SC:    O(1)