//Write a Program to Check the Prime Number
#include<bits/stdc++.h>
using namespace std;
 bool checkprime(int n ){
     if(n<1){
         return false;
     }
         for(int i =2;i<n;i++){
             if(n%i ==0){
                 return false;
             }
         }
         return true;
     }
int  main(){
    int n;
    cin>>n;
    checkprime(n)? cout<<"prime number":cout<<"not prime numbewr";
    
    return 0;
}