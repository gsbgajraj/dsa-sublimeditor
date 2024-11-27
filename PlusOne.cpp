#include<bits/stdc++.h>
using namespace std;

vector<int> plusOne(vector<int>& digits) {
    int n = digits.size();
    
    // Traverse the digits array from the end
    for (int i = n - 1; i >= 0; --i) {
        // If the current digit is less than 9, increment and return
        if (digits[i] < 9) {
            digits[i]++;
            return digits;
        }
        
        // Otherwise, set this digit to 0 and continue
        digits[i] = 0;
    }
    
    // If we exit the loop, it means all digits were 9 and we need a leading 1
    digits.insert(digits.begin(), 1);
    return digits;
}

int main() {
    vector<int> digits = {9, 9, 9};
    vector<int> result = plusOne(digits);

    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}
