#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int N = nums.size();
        for(int i = 0; i < N; ++i) {
            for(int j = i + 1; j < N; ++j) {
                if(nums[i] + nums[j] == target) return {i, j};
            }
        }
        return {};
    }
};

int main() {
    int n, target;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    cin >> target;
    
    // Solve problem
    Solution solution;
    vector<int> result = solution.twoSum(nums, target);
    
    // Output result
    if(!result.empty()) {
        cout << result[0] << " " << result[1] << endl;
    } else {
        cout << "No solution found" << endl;
    }
    return 0;
}
