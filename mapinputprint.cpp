#include <bits/stdc++.h>
using namespace std;

//first way to print the map
// void print(map<int,string> &m){
// 	for(auto it=m.begin();it!=m.end();++it){
// 	   cout<<it->first<<" "<<it->second<<endl;	
// 	}

//other way to print the map
void print(map<int,string> &m){
	for(auto it=m.begin();it!=m.end();++it){
	   cout<<(*it).first<<" "<<(*it).second<<endl;	
	}
}
int main(){
	map<int,string>m;
    m.insert({1,"abc"});
    m.insert({0,"bc"});
    m.insert({19,"5bc"});
    m[10]="hello";
    m[30]="sir";
    print(m);
}