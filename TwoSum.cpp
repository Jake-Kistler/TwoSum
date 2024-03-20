#include <vector> // Include the vector header

class Solution
{
public:
    std::vector<int> twoSum(std::vector<int> &nums, int target)
    {
        for (int i = 0; i < nums.size(); i++) // First for loop for the first number to examine
        {
            for (int j = i + 1; j < nums.size(); j++) // Second for loop for the 2nd number to examine
            {
                if (nums[i] + nums[j] == target) // Compare their sum to target
                {
                    return {i, j}; // Return a vector that contains their indices
                }
            }
        }
        return {}; // If no pairs are found, return an empty vector
    }
};
