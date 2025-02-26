#include<bits/stdc++.h>
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

void Reverse(vector<int> &arr, int i, int j){
           //base case
        if(i>=j) return;
        //solve one case
        swap(arr[i],arr[j]);
        Reverse(arr,i+1,j-1);
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
    Reverse(vec1,0,vec1.size()-1);
    display(vec1);
    return 0;

}