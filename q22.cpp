//find the sumof digit of the palindrome 
#include<bits/stdc++.h>
using namespace std;
int isSUmofDigitPalindrome(int n ){
    int sum =0;
    int rev=0;
    int orig;
    while(n!=0){
        sum +=n%10;
         n /=10;
    }
    orig =sum;
    //reverse the number
    while(orig){
        int temp =orig%10;
        rev =(rev*10)+temp;
        orig /=10;
    }
 if(sum ==rev)
 {
     cout<<"palindrome"<<endl;
 }else
 cout<<"not palindrome";
   return 0;
}
int main(){
    int n;
    cin>>n;
    isSUmofDigitPalindrome(n);
    return 0;
}