#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> countmap;
        for (int num : arr) {
            countmap[num]++;
        }
        unordered_set<int> occuranceset;
        for (auto &pair : countmap) {
            if (occuranceset.find(pair.second) != occuranceset.end()) {
                return false;
            }
            occuranceset.insert(pair.second);
        }
        return true;
    }
};

int main() {
    Solution solution;
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool result = solution.uniqueOccurrences(arr);
    cout << (result ? "true" : "false") << endl;

    return 0;
}
