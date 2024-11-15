#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

class Solution {
public:
    void swaping(vector<int>& arr) {
        int left=0,right=arr.size()-1;
        while(left<right){
            while(arr[left]==0 && left<right){
                left++;
            }
            while(arr[right]==1 && left<right){
                right--;
            }
            if(left<right){
                swap(arr[left],arr[right]);
                left++;
                right--;
            }

        }
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
    obj.display(arr);
    obj.swaping(arr);
    obj.display(arr);
    return 0;
}
