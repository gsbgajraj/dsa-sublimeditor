#include <iostream>
#include <vector>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int low = 0, high = nums.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2; // Avoid overflow
        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    // Return the insertion point
    return low;
}

int main() {
    // Example 1
    vector<int> nums1 = {1, 3, 5, 6};
    int target1 = 5;
    cout << "Index: " << searchInsert(nums1, target1) << endl; // Output: 2

    // Example 2
    vector<int> nums2 = {1, 3, 5, 6};
    int target2 = 2;
    cout << "Index: " << searchInsert(nums2, target2) << endl; // Output: 1

    // Example 3
    vector<int> nums3 = {1, 3, 5, 6};
    int target3 = 7;
    cout << "Index: " << searchInsert(nums3, target3) << endl; // Output: 4

    return 0;
}

