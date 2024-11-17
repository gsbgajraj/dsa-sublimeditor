#include<bits/stdc++.h>
using namespace std;

int leftmost(vector<int> &nums, int t1){
        int start=0;
        int end=nums.size()-1;
        int mid;
        int result=-1;
        while(start<=end){
            mid=(start+end)/2;
            if(nums[mid]==t1){
                end=mid-1;
                result=mid;
            }
            else if(nums[mid]<t1){
              start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return result;
}
int rightmost(vector<int> &nums, int key){
    int start=0;
    int end=nums.size()-1;
    int result=-1;
    int mid;
    while(start<=end){
        mid=(start+end)/2;
        if(nums[mid]==key){
            start=mid+1;
            result=mid;
        }
        else if(nums[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return result;
}


void display(vector<int> &v)
{
  for(int i=0;i<v.size(); i++)
  {
    cout<<v[i]<<" ";
  }
  cout<<endl;
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
    display(vec1);
    cout<<leftmost(vec1,target)<<endl;
    cout<<rightmost(vec1,target)<<endl;
    return 0;
}