//find the number of the subarray within the data whose sum of the element matches a specific target sum
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int subArraysum(const vector<int> &arr , int target){
    int n = arr.size();
    int  count = 0;
    for(int  i = 0; i<n; i++){
           int sum = 0 ;
           for(int j =i;j<n;j++){
            sum +=arr[j];
         
           if(sum==target){
            count++;
           } 
           }
    }
    return  count;
}
int main(){
  vector<int> arr={3,4,-7,1,3,3,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target =7;
    int count=subArraysum(arr,target);
    cout<<count;
    return 0;
}