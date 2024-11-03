#include<iostream>
#include<vector>

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
    vector<int> vec2(vec1);
    int element;
    display(vec2);
     return 0;

}