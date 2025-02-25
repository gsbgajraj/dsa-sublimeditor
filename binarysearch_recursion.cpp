#include<iostream>
using namespace std;

bool binarysearch(int *arr,int s,int e, int k){
	// base case
	if(s>e) return false;
	//processing
		int mid=(s+e)/2;
		if(arr[mid]==k) return true;
		else if(arr[mid]>k) return binarysearch(arr,s,mid-1,k);
		else  return binarysearch(arr,mid+1,e,k);
	
//recursive relation

}
int main(){
	int n=0,s=0,e=9,k=7;
	int arr[10];
	for(int i=0;i<10;++i){
		cin>>arr[i];
	}
	cout<<binarysearch(arr,s,e,k);
    return 0;
}