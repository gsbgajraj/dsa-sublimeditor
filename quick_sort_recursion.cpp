#include<iostream>
using namespace std;

int partition(int arr[], int s, int e){
	int pivot=arr[s];
	int cnt=0;
	for(int i=s+1;i<=e;++i){
		if(arr[i]<=pivot){
			cnt++;
		}
	}
	//place pivot at right place
	int pivotIndex=s+cnt;
	swap(arr[pivotIndex],arr[s]);

	//right and left wala part sambhal lete he 
	int i=s,j=e;
	while(i<pivotIndex && j>pivotIndex){
		while(arr[i]<=arr[pivotIndex]) i++;
		while(arr[j]>arr[pivotIndex]) j--;

		if(i<pivotIndex && j>pivotIndex){
			swap(arr[i++],arr[j--]);
		}
	}
	return pivotIndex;
}

void quicksort(int arr[],int s,int e){
	// base case
    if(s>=e) return;
	//processing
	int p=partition(arr, s,e);
    //recursive relation
    quicksort(arr,s,p-1);
    quicksort(arr,p+1,e);
}
int main(){
	int s=0,e=9;
	int arr[10];
	for(int i=0;i<10;++i){
		cin>>arr[i];
	}
	quicksort(arr,s,e);
	for(int i=0;i<10;++i){
		cout<<arr[i]<<" ";
	}
    return 0;
}