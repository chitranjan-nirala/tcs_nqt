//Given two numbers A and B, such that 0 <= A <= B <= (231 – 1). Compute the average ((A + B) / 2) of the two numbers.
/*Input: A = 1000000000, B = 2000000000
Output: 1500000000.000000
Explanation: (A + B)/2 = (1000000000+ 2000000000)/2 = 1500000000.000000

Input: A = 2000000000, B = 2000000001
Output: 2000000000.500000
Explanation: (A + B)/2 = (2000000000 + 2000000001)/2 = 2000000000.500000*/
#include<iostream>
using namespace std;
 int main(){
    double a,b;
    cin>>a>>b;
    double avg =(a+b)/2;
    cout<<avg;

    return 0;

 }