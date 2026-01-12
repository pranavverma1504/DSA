class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {

        int n = nums.size();
        int closestSum = nums[0] + nums[1] + nums[2];

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                for (int k = j + 1; k < n; k++) {

                    int currSum = nums[i] + nums[j] + nums[k];

                    if (abs(currSum - target) < abs(closestSum - target)) {
                        closestSum = currSum;
                    }
                }
            }
        }

        return closestSum;
    }
};
//TC:    O(n³)
//SC:    O(1)