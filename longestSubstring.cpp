#include<bits/stdc++.h>
using namespace std;

void display(string str)
{
  for(int i=0;i<str.length(); i++)
  {
    cout<<str[i];
  }
  cout<<endl;
}

int Longestsubstring(string str){
  int maxlength=0;
  set<char>myset;
  for(int i=0;i<str.length();++i){
    for(int j=i;j<str.length();++j){
      if(myset.find(str[j])!=myset.end()) break;
      maxlength=max(maxlength,j-i+1);
      myset.insert(str[j]);
    }
  }
  return maxlength;
}

int main(){
    string str;
    cin>>str;
    display(str);
    cout<<Longestsubstring(str);
    return 0;
}