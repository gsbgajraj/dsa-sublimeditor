#include<bits/stdc++.h>
using namespace std;

void display(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
        cout<<endl;

}

void RotateArray(vector<int> &nums, int k){
    vector<int> temp(nums.size());
    for(int i=0;i<nums.size();++i){
        temp[(i+k)%nums.size()]=nums[i];
        }
        nums=temp;
    }
int main (){
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);

    }
    display(v);
    RotateArray(v,2);
    display(v);
}