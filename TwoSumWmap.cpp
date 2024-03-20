#include <vector>
#include <unordered_map>

class Solution
{
    public:
    std::vector<int> twoSum(std::vector<int> &nums, int target)
    {
        std::unordered_map<int, int> map; // creates a hash map

        for(int i = 0; i < nums.size(); i++)
        {
            int complement = target - nums[i]; // calculate the complement

            //check if the complement exists in the map
            if(map.find(complement) != map.end())
            {
                // it exists in the map so return the indices of the current element and its complement
                return {map[complement], i};
            }

            // store the current element in the map with its index
            map[nums[i]] = i;
        }

        return {}; // return an empty vector if no solution was found
    }
};