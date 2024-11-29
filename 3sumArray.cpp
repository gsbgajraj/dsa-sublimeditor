#include<bits/stdc++.h>
using namespace std;

void display(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

vector<vector<int>> threeSum(vector<int>& nums) {
 int n=nums.size();
   sort(nums.begin(),nums.end());
   vector<vector<int>>ans;
   for(int i=0;i<n;++i){
    if(i>0 && nums[i]==nums[i-1]) continue;
    int j=i+1;
    int k=n-1;  
    while(j<k){
        int sum=nums[i]+nums[j]+nums[k];
        if (sum<0)
        {
            j++;
        }
        else if (sum>0)
        {
            k--;
        }
        else{
              vector<int>temp = {nums[i],nums[j],nums[k]};
              ans.push_back(temp);
              j++;
              k--;
              while(j<k && nums[j]==nums[j+1]) j++;
              while(j<k && nums[k]==nums[k-1]) k--;
        }
    }
   }
   return ans;
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
    vector<vector<int>>result=threeSum(v);
    for (auto triplet : result) {
    for (int num : triplet) {
        cout << num << " ";
    }
    cout << endl;
}
}