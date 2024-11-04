#include <bits/stdc++.h>
using namespace std;

//other way to print the map
void print(map<int,string> &m){
	for(auto it=m.begin();it!=m.end();++it){
	   cout<<(*it).first<<" "<<(*it).second<<endl;	
	}
}
int main(){
	map<int,string>m;
    int n;
    cin>>n;
    m.insert({1,"abc"});
    m.insert({0,"bc"});
    m.insert({19,"5bc"});
    m[10]="hello";
    m[30]="sir";
    print(m);
    auto it = m.find(n);
    if(it!=m.end()){
     cout<<"found:"<<(*it).first<<" "<<(*it).second<<endl;
     cout<<"iterator address:"<<&(*it)<<endl;
     //erasing the found element
     m.erase(it);
    }
    else {
        cout<<"found: not found";
   }
  cout<<m.size();
  print(m);
}