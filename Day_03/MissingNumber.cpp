// Solved in leetcode 268 
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& a) {
        int xor1 = 0, xor2 = 0;
        int n = a.size();

        for (int i = 0; i < n; i++) {
            xor2 ^= a[i];  // XOR of array elements
            xor1 ^= i;     // XOR of indices
        }

        xor1 ^= n;         // XOR with the last number 'n'

        return xor1 ^ xor2;  // Missing number
    }
};

int main() {
    vector<int> nums = {3, 0, 1};  // Example input: missing number is 2
    Solution sol;
    int missing = sol.missingNumber(nums);
    cout << "Missing number is: ";
}
    
