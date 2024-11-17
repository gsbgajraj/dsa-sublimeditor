#include<bits/stdc++.h>
using namespace std;

int peakelement(vector<int> &nums){
        int start=1;
        int end=nums.size()-2;
        int mid;
        while(start<=end){
          mid=(start+end)/2;
          if(nums[mid-1]<nums[mid] && nums[mid]>nums[mid+1]){
            return mid;
          }
          else if(nums[mid-1]<nums[mid]){
            start=mid+1;
          }
          else
          {
            end=mid-1;
          }

        }
        return -1;
    }

int main(){
    int left;
    int n,target;
    cin>>n;
    cin>>target;
    vector<int>vec1;
    for(int i=0;i<n;++i){
        int element;
        cin>>element;
        vec1.push_back(element);
    }
    cout<<peakelement(vec1)<<endl;
    return 0;
}