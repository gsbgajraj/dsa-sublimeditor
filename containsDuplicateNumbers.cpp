#include<bits/stdc++.h>
using namespace std;


void display(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

bool containsDuplicate(vector<int>v){
    unordered_set<int>s;
    s.insert(v.begin(),v.end());
    if(s.size()!=v.size()){
        return true;
    }
    return false;
}
int main (){
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
}
    display(v);
    cout<<endl<<containsDuplicate(v);
}