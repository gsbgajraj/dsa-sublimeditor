#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

void display(vector<int> &v)
{
  for(int i=0;i<v.size(); i++)
  {
    cout<<v[i]<<" ";
  }
  cout<<endl;
}

int main(){
    vector<int> vec1(6,13);
    int element;
    display(vec1);
     return 0;

}