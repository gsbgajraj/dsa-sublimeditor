// #include<iostream>
// #include<vector>

// using namespace std;

// void display(vector<int> &v)
// {
//   for(int i=0;i<v.size(); i++)
//   {
//     cout<<v[i]<<" ";
//   }
//   cout<<endl;
// }

// int main(){
//     vector<int> vec1;
//     int element,size;
//     cout<<"Enter the size of the array"<<endl;
//     cin>>size;
//     for(int i=0;i<size;i++){
//         cout<<"Enter the element to add";
//         cin>>element;
//         vec1.push_back(element);
//     }
//     display(vec1);
//     //initialisation should be here only because it will not work if you place it above
//     vector<int> :: iterator iter= vec1.begin();
//     // vec1.insert(iter+1,566);
//     vec1.insert(iter+1,5,566);    //it will insert the element "566" exactly five times
//     display(vec1);
//     return 0;

// }

#include<iostream>
#include<vector>

using namespace std;  


int main()
{
  vector<int> vec1;
  int n, size;
  cout<<"Enter the size of the array"<<endl;
  cin>>size;
  for(int i=0; i<size; i++)
  {
    cout<<"Enter the element to add: ";
    cin>>n;
    vec1.push_back(n);
  }
  for(int i=0; i<vec1.size(); i++)
  {
    cout<<vec1[i]<<" ";
  }
  vector<int> :: iterator iter= vec1.begin();
  vec1.insert(iter+1, 5, 566);
  for(int i=0; i<vec1.size(); i++)
  {
    cout<<vec1[i]<<" ";
  }
  cout<<endl;
  return 0;

}