//Given a number x, determine whether the given number is Armstrong’s number or not.
//eg : 153 = 1^3 +5^3+3^3  =1+125+27 = 153 
#include<bits/stdc++.h>
using namespace std; 
int main(){
    int n ;
    cin>> n;
    int temp = n ; 
    int sum = 0 ;
        int lastdigit  = n%10;
        sum = sum + pow(lastdigit, 3);
        n = n/10;

        if(sum = temp){
            cout<<"amstrong number";
        }
        else
        cout<<"not an amstrong number";
    return 0;
}
