//write a program  to find the good number or bad numbr if the sum of digit of the the number is divisible by  given number then  the  number is good number else bad number 
#include<bits/stdc++.h>
using namespace std; 
int main(){
    int n ; 
    cin>>n;
    int num = n;
    int sum = 0;
    while(num!=0){
        int digit = num%10;
        sum += digit;
        num = num/10;
    }
    if(n%sum==0){
        cout<<"good number"<<endl;
    }
    else
    cout<<"bad number"<<endl;
}