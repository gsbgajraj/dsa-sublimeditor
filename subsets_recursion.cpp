#include<iostream>
#include <vector>
using namespace std;

void subsets(vector<int> &nums,vector<int>&output, int index,vector<vector<int>>&ans){
	// base case
    if(index>=nums.size()){
    	ans.push_back(output);
    	return;
    }
    //exclude
    subsets(nums,output,index+1,ans);
    //include
    int element = nums[index];
    output.push_back(element);
    subsets(nums,output,index+1,ans);

        output.pop_back();

}
int main(){
	vector<int> nums={1,2,3};
	vector<vector<int>> ans;
    vector<int> output;
	subsets(nums,output,0,ans);
	  for (const auto& subset : ans) {
        cout << "{ ";
        for (int num : subset) {
            cout << num << " ";
        }	
        cout << "}\n";
    }
    return 0;
}