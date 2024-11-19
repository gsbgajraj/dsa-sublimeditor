#include<bits/stdc++.h>
using namespace std;

int SquareRoot(int x){
	int start=1;
	int end=x;
	int mid;
	int ans=0;
	while(start<end){
		mid=start+(end-start)/2;
		if(mid*mid==x){
			return mid;
		}
		else if(mid*mid<x){
			ans=mid;
			start=mid+1;
		}
		else{
			end=mid-1;
		}
	}
		return ans;

}

int main(){
    int x;
    cin>>x;
    cout<<"SquareRoot is: "<<SquareRoot(x);
    return 0;
}