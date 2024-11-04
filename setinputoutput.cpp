#include <bits/stdc++.h>
using namespace std;

//printing elements via iterators
// void print(set<string> &s){
// 	for(auto it=s.begin();it!=s.end();++it){
// 	   cout<<(*it)<<endl;	
// 	}
// }

//printing elements via iterating on values
void print(set<string> &s){
    for(auto value: s){
       cout<<value<<endl;   
    }
}
int main(){
	set<string>s;
    int n;
    cin>>n;
    for(int i=0; i<n; ++i){
        string str;
        cin>>str;
        s.insert(str);
    }
    print(s);
}