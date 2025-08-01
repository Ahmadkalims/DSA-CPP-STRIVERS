#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap; // To store numbers and their indices
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i]; // Calculate complement
            if (numMap.find(complement) != numMap.end()) {
                // If complement is found, return the indices
                return {numMap[complement], i};
            }
            numMap[nums[i]] = i; // Store current number with its index
        }
        return {}; // Return an empty vector (though the problem guarantees a solution)
    }
};