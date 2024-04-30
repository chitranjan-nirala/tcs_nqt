//reverse the sumber of k position from arr[0] to arr[n]
//arr =14,6,8,6,4,8
//k=2;
//resultant arr = 14,4,8,6,6,8
#include<bits/stdc++.h>
using namespace std;
int  reversefromKpos(int arr[], int k,int n){
  for(int i =0;i<n;i++){
      int temp = arr[k-1];
      arr[k-1]=arr[n-k];
      arr[n-k]= temp ;
  }
    return 0;
}
int main(){
int n;
cin>>n;
int k;
cin>>k;
int arr[n];
//before reverse number
for(int i = 0;i<n;i++){
    cin>>arr[i];
}
cout<<"after reverse "<<endl;
reversefromKpos(arr, k,n );
for(int i = 0;i<n;i++){
    cout<<arr[i]<<""<<endl;
}
return 0;
}