#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
    map< string, int> thismap;
    thismap["hello"]=1;
    thismap["world"]=2;
    thismap["hello"]=3;
    map<string, int> ::iterator it;
    for(it=thismap.begin();it!=thismap.end();it++){
        cout<<*(it).first<<" "<<*(it).second<<endl;
    }
    return 0;}