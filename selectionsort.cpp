#include<bits/stdc++.h>
using namespace std;

void display(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}


void selectionSort(vector<int> &arr) {
        // code here
        int n =arr.size();
        for(int i=0;i<n-1;++i){
            int minIndex=i;
            for(int j=i+1;j<n;++j){
                if(arr[j]<arr[minIndex]);
                minIndex=j;
            }
            swap(arr[minIndex],arr[i]);
        }
    }
int main(){
    vector<int> vec1;
    int n;
    for(int i=0;i<n;++i){
        int k;
        cin>>k;
        vec1.push_back(k);
    }
    display(vec1);
    // selectionSort(vec1);
    display(vec1);
}