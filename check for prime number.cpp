 //C++ program to check whether a number 
// is prime or not using recursion 
//example  : 1, 2 ,3, 5, 7, 11 ,13....... 
#include<iostream>
#include<math.h>
using namespace std;
bool isprime(int n ){
    if(n<=1){
        return false;
    }
    for(int i =2 ;i<=sqrt(n);i++){
        if(n% i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    isprime(n)? cout<<"prime number": cout<<"not a prime number";
     return 0;
}