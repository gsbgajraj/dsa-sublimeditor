#include <iostream>
#include <vector>
#include <unordered_map>

int singleNumber(std::vector<int>& nums) {
    std::unordered_map<int, int> frequencyMap;

    // Count occurrences of each number
    for (int num : nums) {
        frequencyMap[num]++;
    }

    // Find the number that appears only once
    for (const auto& pair : frequencyMap) {
        if (pair.second == 1) {
            return pair.first;
        }
    }

    return -1; // Should not reach here since the problem guarantees one single element
}

int main() {
    std::vector<int> nums1 = {2, 2, 1};
    std::vector<int> nums2 = {4, 1, 2, 1, 2};
    std::vector<int> nums3 = {1};

    std::cout << "Single number in nums1: " << singleNumber(nums1) << std::endl;
    std::cout << "Single number in nums2: " << singleNumber(nums2) << std::endl;
    std::cout << "Single number in nums3: " << singleNumber(nums3) << std::endl;

    return 0;
}
