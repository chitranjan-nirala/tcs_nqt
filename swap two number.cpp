//How to swap two numbers without using a temporary variable?
#include<iostream>
using namespace std;
int main(){
      int a  =10 ;
      int b = 40;
      int temp = a;
      a=b;
      b=temp ;
      cout<<a<<":"<<b;
      return 0;
}