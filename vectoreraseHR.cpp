#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void display(vector<int>&v){
    for(auto it= v.begin();it!=v.end();++it){
        cout<<*(it)<<" ";
    }
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,p,a,b;
    vector<int>v;
    cin>>n;
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        v.push_back(x);
        } 
    cin>>p;
    // v.erase(v.begin()+p);
    v.erase(v.begin() + (p - 1));
    cin>>a>>b;
    // v.erase(v.begin()+a-1,v.begin()+b-1);  
    v.erase(v.begin() + (a - 1), v.begin() + (b - 1));
    cout<<v.size()<<endl;
    display(v);
    return 0;
}
