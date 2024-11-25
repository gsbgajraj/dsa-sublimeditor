#include<bits/stdc++.h>
using namespace std;

void display(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
        cout<<endl;

}

void moveZeroes(vector<int> &v){
    int nonzero=0;
    for(int i=0;i<v.size();++i){
        if(v[i]!=0){
           swap(v[i],v[nonzero]);
           nonzero++;
        }
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

    }
    display(v);
    moveZeroes(v);
    display(v);
}