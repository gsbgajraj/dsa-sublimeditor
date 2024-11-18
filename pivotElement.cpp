#include<bits/stdc++.h>
using namespace std;

int pivotElement(vector<int> &nums){
        int start=0;
        int end=nums.size()-1;
        int mid;
        while(start<end){
          mid=(start+end)/2;
          if(nums[0]<=nums[mid]){
            start=mid+1;
          }
          else{
            end=mid;
          }
      }
       return start;
}
int main(){
    int n;
    cin>>n;
    vector<int>vec1;
    for(int i=0;i<n;++i){
        int element;
        cin>>element;
        vec1.push_back(element);
    }
    cout<<pivotElement(vec1)<<endl;
    return 0;
}