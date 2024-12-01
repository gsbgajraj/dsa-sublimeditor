#include<bits/stdc++.h>
using namespace std;

int maximumProfit(vector<int> &prices){
    // Write your code here.
    int mini=prices[0];
    int maxProfit=0;
    int n=prices.size();
    for(int i=0;i<n;++i){
        int profit= prices[i]-mini;
        maxProfit=max(maxProfit,profit);
        mini=min(mini,prices[i]);
    }
    return maxProfit;

}

void display(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

int main (){
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
}
    display(v);
    cout<<maximumProfit(v);
}