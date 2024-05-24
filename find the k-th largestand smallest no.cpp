// find the k-th largest and smallest element in  the array
#include<bits/stdc++.h>
using namespace std; 
int  findKthSmallestElement(int arr[], int n,int k)
{
   sort(arr,arr+n);
   return arr[k-1];
}
int findKthLargestElement(int arr[], int n , int k ){
    sort(arr, arr+n, greater<int>());
    return arr[k-1];
}
int main(){
    int arr[] = {2,4,6,8,5,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k=4;
    int res = findKthSmallestElement(arr,n, k);
    int ans =findKthLargestElement(arr,n,k);
    cout<<res<<endl;
    cout<<ans;
    return 0;
}