#include<bits/stdc++.h>
using namespace std;
bool ispossible(vector<int>&arr,int n,int m,int mid){
	int pageSum=0;
	int studentcount=1;
	for(int i=0;i<n;++i){
	if(pageSum+arr[i]<=mid){
       pageSum+=arr[i];
	}
	else{
		studentcount++;
		if(studentcount>m || arr[i]>mid){
			return false;
		}
      pageSum=arr[i];
	}
}
	return true;

}
int bookAllocation(vector<int>&arr,int n,int m){
	int start=0;
	int sum=0;
	for(int i=0;i<n;++i){
      sum+=arr[i];
	}
	int end=sum;
	int mid;
	int ans=-1;
	while(start<=end){
		mid=start+(end-start)/2;
		if(ispossible(arr,n,m,mid)){
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
    int arr[100];
    int n; int m; 
    cin>>n;
    cin>>m;
    for(int i=0;i<100;i++){
        int x;
        cin>>x;
        arr[i]=x;
    }
   cout<<bookAllocation(arr,n,m);
   return 0;
}