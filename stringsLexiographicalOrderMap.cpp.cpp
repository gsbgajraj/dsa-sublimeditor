#include <bits/stdc++.h>
using namespace std;

//other way to print the map
void print(map<string,int> &m){
	for(auto it=m.begin();it!=m.end();++it){
	   cout<<(*it).first<<" "<<(*it).second<<endl;	
	}
}
int main(){
	map<string,int>m;
    int n;
    cin>>n;
    for(int i=0; i<n; ++i){
        string s;
        cin>>s;
        m[s]+=1;
    }
  print(m);
}