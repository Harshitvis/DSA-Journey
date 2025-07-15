// Two sum problem equals to the target


#include<bits/stdc++.h>

using namespace std;
vector<int> findtwosum(vector<int> arr,int t){
   int n = arr.size();

    for(int i = 0; i < n; i++){
          for(int j = i+1; j < n; j++){
            int sum = 0;
            sum = arr[i]+arr[j];
            if(sum == t){
                return {i,j};
            }
          }
    }


}

int main(){

    vector<int> arr = {1,2,3,5,6};
    int t = 7;
    vector<int> ans = findtwosum(arr,t);

    for(auto it:ans){
        cout<<it;
    }
}

#include <bits/stdc++.h>
using namespace std;

string twoSum(int n, vector<int> &arr, int target) {
    sort(arr.begin(), arr.end());
    int left = 0, right = n - 1;
    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == target) {
            return "YES";
        }
        else if (sum < target) left++;
        else right--;
    }
    return "NO";
}

int main()
{
    int n = 5;
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;
    string ans = twoSum(n, arr, target);
    cout << "This is the answer for variant 1: " << ans << endl;
    return 0;
}