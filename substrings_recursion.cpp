#include<iostream>
#include <vector>
using namespace std;

void substrings(string &str,string &output, int index,vector<string>&ans){
	// base case
    if(index>=str.length()){
    	ans.push_back(output);
    	return;
    }
    //exclude
    substrings(str,output,index+1,ans);
    //include
    int element = str[index];
    output.push_back(element);
    substrings(str,output,index+1,ans);

        output.pop_back();

}
int main(){
	string str="abc";
	vector<string> ans;
    string output;
	substrings(str,output,0,ans);
	  for (string st : ans) {
            cout << st << " ";
            cout << "\n";

        }	
    return 0;
}