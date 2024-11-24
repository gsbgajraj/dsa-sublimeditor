#include<bits/stdc++.h>
using namespace std;

void display(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

void MergeSort(vector<int> &arr1, vector<int>& arr2, vector<int> &arr3) {
        // code here
    int i=0,j=0,k=0;
       while(i<arr1.size() && j<arr2.size()){
        if(arr1[i]<arr2[j])
            arr3[k++]=arr1[i++];
        else
            arr3[k++]=arr2[j++];
        }
    while(i<arr1.size())
        arr3[k++]=arr1[i++];
    while(j<arr2.size())
        arr3[k++]=arr2[j++];
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
    vec3.resize(n1 + n2);
    // display(vec1);
    // display(vec2);
    MergeSort(vec1,vec2,vec3);
    display(vec3);
    return 0;
}