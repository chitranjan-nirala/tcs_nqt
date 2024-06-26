//write a program to find the sum of all the  characters and all possible contiguous character combinations from the given string.
/*Consider the string S1="321".

All characters and combinations of contiguous characters from the above string are: 3,2,1,32,21,321.
Adding all the numbers (3+2+1+32+21+321), we get 380 as the result.

Instructions:
The system does not allow any kind of hard coded input value/values.
The written program code by the candidate will be verified against the inputs that are supplied from the
system.

For more clarification, please read the following points carefully till the end.

Example 1
========================================
Input: 321
Output: 380

Example 2:
========================================
Input: 12
Output: 15

Explanation
-----------------
In Example2 it possible combinations are 1,2,12. Sum=1+2+12=15*/

#include<iostream>
#include<string>
 using namespace std;
 int main(){
    string input;
    cin>>input;
     long long sum=0;
     for(int i = 0; i<input.size();i++){
        for(int j = i;j<input.size();j++){
            string substring = input.substr(i,j-i+1);
            sum += stoi(substring);
        }
     }
     cout<<sum<<endl;
     return 0;
 }
