#include<bits/stdc++.h>
#include<vector>
using namespace std;

void search(vector<int> &v){
  int start=0;
  int end=v.size()-1;
  while(start<=end){
    swap(v[start],v[end]);
    start++;
    end--;
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
    search(vec1);
    display(vec1);

    return 0;

}