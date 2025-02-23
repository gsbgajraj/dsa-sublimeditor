#include<iostream>
using namespace std;

void bubble(int *arr,int size){
	// base case
	if(size==0 || size==1) return;
	// solve only one case
	for(int i=0;i<size-1;++i){
		if(arr[i]>arr[i+1]){
			swap(arr[i],arr[i+1]);
		}
	}
	bubble(arr,size-1);

}
int main(){
	int n;
	cin>>n;
	int arr[10];
	for(int i=0;i<10;++i){
		cin>>arr[i];
	}
	bubble(arr,n);
	  for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
	return 0;
}