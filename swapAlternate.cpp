#include<bits/stdc++.h>
#include<vector>
using namespace std;

void swapAlternate(vector<int> &v){
 for(int i=0;i<v.size();i=i+2){
  if(i+1<v.size()){
    swap(v[i],v[i+1]);
  }
 }

}

void display(vector<int> &v)
{
  for(int i=0;i<v.size(); i++)
  {
    cout<<v[i]<<" ";
  }
  cout<<endl;
}

int main(){
    vector<int> vec1;
    int element,size;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>element;
        vec1.push_back(element);
    }
    display(vec1);
    swapAlternate(vec1);
    display(vec1);

    return 0;

}