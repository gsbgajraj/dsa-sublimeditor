#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int n,k;
    cin>>n>>k;
    multiset<long long>bags;
    for(int i=0; i<n; ++i){
      long long candy_ct;
      cin>>candy_ct;
      bags.insert(candy_ct);
    }
     long long total_candies=0;
    for(int i=0; i<k; ++i){
      auto last_it =(--bags.end());
     long long max_candy=*last_it;
      total_candies+=max_candy;
      bags.erase(last_it);
      bags.insert(max_candy/2);
   }
    cout<<total_candies<<endl;
}
}


// long long total_candies = 0;: Initializes the total number of candies collected.
// The for loop runs k times to perform the operations:
// auto last_it = (--bags.end());: Gets an iterator to the largest element in the multiset.
// long long max_candy = *last_it;: Retrieves the value of the largest element.
// total_candies += max_candy;: Adds the largest number of candies to the total.
// bags.erase(last_it);: Removes the largest element from the multiset.
// bags.insert(max_candy / 2);: Inserts half of the largest number of candies back into the multiset.