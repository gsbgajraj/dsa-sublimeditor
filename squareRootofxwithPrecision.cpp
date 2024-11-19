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

double SquareRootPrecision(int x, int precision,int tempsolution){
   double factor =1;
   double ans=tempsolution;
   for(int i=0;i<precision;++i){
   	double factor=factor/10;
   	for(double j=ans;j*j<x;j=j+factor){
   		ans=j;
   	}
   }
   return ans;
}

int main(){
    int x;
    cin>>x;
    int tempsolution=SquareRoot(x);
    cout<<"SquareRoot is: "<<SquareRootPrecision(x,1,tempsolution);
    return 0;
}