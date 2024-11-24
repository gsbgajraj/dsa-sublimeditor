#include<bits/stdc++.h>
using namespace std;

void display(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

void MergeSort(vector<int> &arr1, vector<int>& arr2) {
        // code here
    arr1.insert(arr1.end(),arr2.begin(),arr2.end());
    sort(arr1.begin(),arr1.end());
}
int main(){
    vector<int> vec1,vec2,vec3;
    int n1,n2;
    cin>>n1>>n2;
    for(int i=0;i<n1;++i){
        int k;
        cin>>k;
        vec1.push_back(k);
    }
    for(int i=0;i<n2;++i){
        int k;
        cin>>k;
        vec2.push_back(k);
    }
    MergeSort(vec1,vec2);
    display(vec1);
    return 0;
}