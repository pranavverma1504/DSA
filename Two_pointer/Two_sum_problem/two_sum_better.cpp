// Idea
// Array sorted hai, but hume ignore kar dete hain
// Har element ke liye:
// target - numbers[i] check karte hain
// Agar map me mil gaya → indices mil gaye


class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> mp; 

        for(int i = 0; i < numbers.size(); i++) {
            int need = target - numbers[i];

            if(mp.find(need) != mp.end()) {
                return {mp[need], i + 1};
            }

            mp[numbers[i]] = i + 1; 
        }
        return {};
    }
};


// Time Complexity: O(n)
// Space Complexity: O(n)