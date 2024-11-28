//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    int findSubarray(int n, int a[]) {
      int sum=0;
      int maxi=INT_MIN;
      vector<int> result;
      for(int i=0;i<n;++i){
          sum+=a[i];
          maxi=max(sum,maxi);
          if(sum<0){
              sum=0;
          }
          return result;
      }
    }
};

//{ Driver Code Starts.

void printAns(vector<int> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findSubarray(n, a);
        printAns(ans);
    
cout << "~" << "\n";
}
    return 0;
}

// } Driver Code Ends