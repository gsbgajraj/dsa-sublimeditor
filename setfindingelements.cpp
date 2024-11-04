#include <bits/stdc++.h>
using namespace std;

//other way to print the map
void print(set<string> &s, string element){
    auto it=s.find(element);
    if(it!=s.end()){
        s.erase(it);
    }
    cout<<"deleted element: "<<(*it)<<endl;
	for(auto it=s.begin();it!=s.end();++it){
	   cout<<(*it)<<endl;	
	}
}
int main(){
	set<string>s;
    int n;
    cin>>n;
    string element;
    cin>>element;
    for(int i=0; i<n; ++i){
        string str;
        cin>>str;
        s.insert(str);
    }
    print(s,element);
}