#include<iostream>
#include<map>
#include<vector>

using namespace std;

int findmajority(vector<int>arr){
    int n = arr.size();
    map<int,int>mp;
    for(int i = 0; i  < n;i++){
        mp[arr[i]]++;

    }

    for(auto it: mp){
        if(it.second > n/2){
            return it.first;
        }
    }
    return -1;
}

int main(){
    vector<int> arr{4,4,2,4,3,4,4,3,2,4};
     int ans = 0;
     ans = findmajority(arr);
     cout<< ans;
}