// The Dutch National Flag algorithm, also known as 3-way partitioning, is used to sort an array of 0s, 1s, and 2s without using any sorting algorithm. The algorithm was proposed by Edsger W. Dijkstra, a Dutch computer scientist, thus the name.#include <iostream>
using namespace std; 
void  sort_012(int arr[],int n){
    int low =0,mid =0,high=n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        if(arr[mid]==1){
            mid++;
        }
        if(arr[mid]==2){
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}
int main()
{
   int n;
   cin>> n;
   int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   sort_012(arr,n);
   for(int  i=0;i<n;i++){
       cout<<arr[i];
   }

    return 0;
}