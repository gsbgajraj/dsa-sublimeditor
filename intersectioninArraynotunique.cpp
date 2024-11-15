#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int i = 0, j = 0;
        vector<int> result;
        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] == nums2[j]) {
                result.push_back(nums1[i]);
                i++;
                j++;
            } else if (nums1[i] < nums2[j]) {
                i++;
            } else {
                j++;
            }
        }
        return result;
    }
};

int main() {
    vector<int> nums1 = {4, 9,9, 5};
    vector<int> nums2 = {9, 4, 9, 8, 4};
    Solution sol;
    vector<int> result = sol.intersection(nums1, nums2);

    cout << "Intersection of nums1 and nums2: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
