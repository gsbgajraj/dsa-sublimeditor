// #include<bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
//     int duplicate(vector<int>& arr) {
//          int ans=0;
//          for(int i=0;i<arr.size();++i){
//             ans=ans^arr[i];
//          }
//          for(int i=i;i<arr.size();++i){
//             ans=ans^i;
//         }
//         return ans;
        
//     }
//   void display(vector<int> &v){
//   for(int i=0;i<v.size(); i++)
//     {
//     cout<<v[i]<<" ";
//     }
//        cout<<endl;
//   }
// };

// int main() {
//     Solution obj;
//     int n;
//     cin >> n;

//     vector<int> arr(n);
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
    
//     int result = obj.duplicate(arr); // Find duplicates
//     cout << "Original array: ";
//     obj.display(arr); // Display the original array
//     cout << "Duplicate: ";
//     cout<<result<<endl; // Display the duplicates
    
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int duplicate(vector<int>& arr) {
        int ans = 0;
        for (int i = 0; i < arr.size(); ++i) {
            ans ^= arr[i];
        }
        for (int i = 1; i < arr.size(); ++i) { // XOR numbers from 1 to n-1
            ans ^= i;
        }
        return ans;
    }

    void display(vector<int>& v) {
        for (int i = 0; i < v.size(); i++) {
            cout << v[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Solution obj;
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = obj.duplicate(arr); // Find duplicate
    cout << "Original array: ";
    obj.display(arr); // Display the original array
    cout << "Duplicate: ";
    cout << result << endl; // Display the duplicate
    
    return 0;
}
