#include<bits/stdc++.h>
using namespace std;

int max(int arr[],int size){
	int max = INT_MIN;
	for(int i=0;i<size;++i){
	if(arr[i]>=max){
	max = arr[i];
	}
	}
	return max;
}

int min(int arr[],int size){
	int min = INT_MAX;
	for(int i=0;i<size;++i){
	if(arr[i]<=min){
	min = arr[i];
	}
	}
	return min;
}

int main(){
    int arr[100];
    int size;
    cin>>size;
    for(int i=0;i<size;++i){
    	cin>>arr[i];
    }
	cout<<max(arr,size)<<endl;
	cout<<min(arr,size)<<endl;
	return 0;
}
