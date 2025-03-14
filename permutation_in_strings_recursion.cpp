#include<iostream>
#include <vector>
#include<string>
using namespace std;

   void solve(string str,vector<string>&ans,int i){
   	// base case
   	if(i==str.length()){
   		ans.push_back(str);
   		return;
   	}
   	for(int j=i;j<str.length();++j){
   		swap(str[i],str[j]);
   		solve(str,ans,i+1);
   		//backtrack
   		swap(str[i],str[j]);
   	}
          
   }	   
   


 vector<string> permutation(string str,vector<string>&ans){
 	int i=0;
 	 solve(str,ans,i);
 	 return ans;
 	
 }
int main(){ 
    string str="abc";
    vector<string>ans;
    ans=permutation(str,ans);
    for(auto &num:ans){
    	cout<<num<<" ";
    }
    return 0;

}