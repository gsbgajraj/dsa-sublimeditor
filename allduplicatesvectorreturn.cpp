#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> duplicates(vector<int>& arr) {
        unordered_map<int,int>m;
        for(int num:arr){
            m[num]++;
        }
       vector<int>result;
       for(auto& m2:m){
        if(m2.second>1){
            result.push_back(m2.first);
        }
       }
       return result;
        
    }
  void display(vector<int> &v){
  for(int i=0;i<v.size(); i++)
    {
    cout<<v[i]<<" ";
    }
       cout<<endl;
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
    
    vector<int> result = obj.duplicates(arr); // Find duplicates
    cout << "Original array: ";
    obj.display(arr); // Display the original array
    cout << "Duplicates: ";
    obj.display(result); // Display the duplicates
    
    return 0;
}
