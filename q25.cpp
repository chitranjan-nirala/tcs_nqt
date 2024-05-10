// You are given an integer array 'ARR' of size 'N' and an integer 'S'.
// Your task is to return the list of all pairs of elements such that each sum of elements of each pair equals 'S'.

// Note:

// Each pair should be sorted i.e the first value should be less than or equals to the second value. 

// Return the list of pairs sorted in non-decreasing order of their first value. In case if two pairs have the same first value, the pair with a smaller second value should come first.

#include<bits/stdc++.h>
using namespace std;
  vector<vector<int>> pair_sum( const vector<int>&arr ,int sum ){
     vector<vector<int>> ans ;
     int n =arr.size();
for(int i =0;i<n;i++){
    for(int j= i+1;j<n;j++){
        if(arr[i]+arr[j]==sum){
           vector<int>temp={arr[i],arr[j]};
           ans.push_back(temp);
        }
    }
}
return ans;
  }
int main(){
int n ;
cin>>n;
 vector<int> arr(n);
int sum =30;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
vector<vector<int>> res = pair_sum(arr ,sum);
for(auto pair :res){
     cout<<pair[0]<<":"<<pair[1]<<endl;
}
    return 0;
}