#include<bits/stdc++.h>
#include<vector>
using namespace std;

int Unique(vector<int> &v){
int ans=0;
 for(int i=0;i<v.size();i=i+1){
  ans=ans^v[i];
 }
 return ans;
}

int main(){
    vector<int> vec1;
    int element,size;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>element;
        vec1.push_back(element);
    }
    Unique(vec1);

    return 0;

}