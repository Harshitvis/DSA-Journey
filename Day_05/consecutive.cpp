// 485. Max Consecutive Ones
#include <bits/stdc++.h>
#include<vector>
using namespace std;


    int findMaxConsecutiveOnes(vector<int> nums) {
        int n = nums.size();

        int maxi = INT_MIN;
        int count = 0;
       
        for(int j = 0; j < n; j++){
            
                if(nums[j] == 0)
                    count = 0;
                 else
                    count++;
                
            maxi = max(maxi,count);
            }
        


        
        return maxi;
    }

    int main(){
        vector<int> nums = {1,0,1,1,0};
       int val =  findMaxConsecutiveOnes(nums);
       cout<<val;
    }
