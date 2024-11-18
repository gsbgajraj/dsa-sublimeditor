#include<bits/stdc++.h>
using namespace std;

int pivotElement(vector<int>& nums){
	int start=0;
	int end=nums.size()-1;
	int mid;
	while(start<end){
		mid=start+(end-start)/2;
		if(nums[mid]>=nums[0]){
			start=mid+1;
		}
		else{
			end=mid;
		}
	}
		return start;

}

int binarySearch(vector<int>&nums,int s,int e, int key){
	int start=s;
    int end=e;
    int mid;
    int result=-1;
    while(start<=end){
    	mid=start+(end-start)/2;
    	if(nums[mid]==key){
    		return mid;
    	}
    	else if(nums[mid]>key){
    		end=mid-1;
    	}
    	else{
    		start=mid+1;
    	}
    }
    return result;
}

int searchRotatedarray(vector<int>& nums, int n, int key)
{
	int pivot=pivotElement(nums);
	if(key>=nums[pivot] && key<=nums[n-1])
	{
	  return binarySearch(nums,pivot,n-1,key);
	}
	else{
		return binarySearch(nums,0,pivot-1,key);
	}
}
int main(){
    int total; int key; int n;
    cin>>total; cin>>key;
    n=total;
    vector<int>vec1;
    for(int i=0;i<total;++i){
        int element;
        cin>>element;
        vec1.push_back(element);
    }
    cout<<"found at: "<<searchRotatedarray(vec1,n,key);
    return 0;
}