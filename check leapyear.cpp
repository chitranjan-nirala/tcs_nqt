#include<iostream>
//Program to check if a given year is leap year
using namespace std;
 bool checkleapyear(int n){
     if(n%4 ==0){
         if(n%100 ==0){
            return  n%400 ==0;
         }
         return true;
     }
    
     return false;
 }
int main(){
    int n;
    cin>>n;
    if(checkleapyear(n)){
        cout<< "leap year";
    }
    else {
        cout<<"not a leap year";
    }
    return 0;
}
