class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        int n = nums.size();
        set<vector<int>> ans;   // for unique triplets

        for (int i = 0; i < n; i++) {
            unordered_set<int> st;

            for (int j = i + 1; j < n; j++) {
                int third = - (nums[i] + nums[j]);

                if (st.find(third) != st.end()) {
                    vector<int> triplet = {nums[i], nums[j], third};
                    sort(triplet.begin(), triplet.end());
                    ans.insert(triplet);
                }

                st.insert(nums[j]);
            }
        }

        return vector<vector<int>>(ans.begin(), ans.end());
    }
};

//TC:    O(n²)
//SC:    O(n)