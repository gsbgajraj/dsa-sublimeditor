#include<bits/stdc++.h>
using namespace std;

void display(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

int main (){
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
        cout<<"current vector size is:"<<v.size();
        cout<<endl;
        display(v);
        cout<<endl;
    }
    display(v);
}