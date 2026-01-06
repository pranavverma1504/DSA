class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        // Step 1: Square each element
        for (int i = 0; i < nums.size(); i++) {
            nums[i] = nums[i] * nums[i];
        }

        // Step 2: Sort the array
        sort(nums.begin(), nums.end());

        return nums;
    }
};
//TC: O(n log n) (sorting)
// SC: O(1) or O(n)