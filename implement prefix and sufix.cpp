// product of all elements in the input array except for the element at the current index,
 #include<bits/stdc++.h>
 #include <vector>
 using namespace std;
 
  vector<int> product(int arr[] , int n ){
      int prod =1;
      for(int i =0;i<n; i++){
          prod*=arr[i];
      }
      vector<int> ans(n);
      for(int i=0;i<n;i++){
           ans[i]= prod/arr[i];
      }
      return ans;
  }
  int main(){
     int arr[] = {10,3,5,6,2};
      int n = sizeof(arr)/sizeof(arr[0]);
       vector<int> res = product(arr, n);
       for(int i= 0;i<n;i++){
           cout<<res[i]<<" ";
       }
      return 0;
  }