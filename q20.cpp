//find the amstrong number 
//eg: 153 = 1^3+5^3+3^ = 153
#include<iostream>
#include<cmath>
using namespace std;
void isAmtronngNumber(int n ){
    int sum = 0 ; 
    int temp = n;
    while(temp){
        int lastno = temp%10;
        sum  +=pow(lastno, 3);
        temp /=10;
    }
    if(sum == n){
        cout<<"yes"<<endl;
    }
    else 
    cout<<"no"<<endl;
}
int main(){
    int n;
    cin>>n;
   isAmtronngNumber(n);
    
    return 0;
}