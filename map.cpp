#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    map<string,int>studentmarks;
    int Q;
    cin>>Q;
    for(int i=0;i<Q;++i){
        int type;
        string name;
        cin>>type>>name;
        if(type==1){
            int marks;
            cin>>marks;
            studentmarks[name]+=marks;
            }
            else if(type==2){
             studentmarks[name]=0;
            }
            else {
            cout<<studentmarks[name]<<endl;
            }
    }  
    return 0;
}

