#include<bits/stdc++.h>
using namespace std;
bool ispossible(vector<int>&nums,int mid,int totalstudents){
	int pageSum=0;
	int studentcount=1;
	for(int i=0;i<nums.size();++i){
	if(pageSum+nums[i]<=mid){
       pageSum+=nums[i];
	}
	else{
		studentcount++;
		if(studentcount>totalstudents || nums[i]>mid){
			return false;
		}
      pageSum=nums[i];
	}
}
	return true;

}
int bookAllocation(vector<int>&nums,int totalstudents){
	int start=0;
	int sum=0;
	for(int i=0;i<nums.size();++i){
      sum+=nums[i];
	}
	int end=sum;
	int mid;
	int ans=-1;
	while(start<=end){
		mid=start+(end-start)/2;
		if(ispossible(nums,mid,totalstudents)){
			ans=mid;
			end=mid-1;
		}
		else{
			start=mid+1;
		}

	}
	return ans;
}


int main (){
    vector<int> v;
    int n; int totalstudents;
    cin>>n;
    cin>>totalstudents;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
   cout<<bookAllocation(v,totalstudents);
   return 0;
}


