// Move all Zeros to the end of the array

// Example 1:
// Input: 1 ,0 ,2 ,3 ,0 ,4 ,0 ,1
// Output: 1 ,2 ,3 ,4 ,1 ,0 ,0 ,0
// Explanation: All the zeros are moved to the end and non-negative integers are moved to front by maintaining order

// Example 2:
// Input: 1,2,0,1,0,4,0
// Output: 1,2,1,4,0,0,0
// Explanation: All the zeros are moved to the end and non-negative integers are moved to front by maintaining order




#include <bits/stdc++.h>
using namespace std;

vector<int> moveZeros(int n, vector<int> a) {
    int j = -1;
    //place the pointer j:
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            j = i;
            break;
        }
    }

    //no non-zero elements:
    if (j == -1) return a;

    //Move the pointers i and j
    //and swap accordingly:
    for (int i = j + 1; i < n; i++) {
        if (a[i] != 0) {
            swap(a[i], a[j]);
            j++;
        }
    }
    return a;
}


int main()
{
    vector<int> arr = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    int n = 10;
    vector<int> ans = moveZeros(n, arr);
    for (auto &it : ans) {
        cout << it << " ";
    }
    cout << '\n';
    return 0;
}

// optimized 

#include<iostream>
#include<vector>
using namespace std;


void movezeroend(vector<int>ans,int s){
    int count = 0;
    vector<int>check;


    for(int i = 0; i < s; i++ ){
        if(ans[i] != 0){
            check.push_back(ans[i]);
        }
        else{
            count++;
        }
    }

    while(count--){
        check.push_back(0);
    }

    for(int i = 0; i < check.size();i++){
    cout<<check[i]<<" ";
}
}

int main(){
vector<int>ans = {1,0,2,3,0,4,0,1};
// ans.push_back(4);
movezeroend(ans,ans.size());

return 0;
}