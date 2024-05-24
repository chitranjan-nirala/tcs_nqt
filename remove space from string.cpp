//  Write a Program to Remove Spaces From a String
#include<bits/stdc++.h>
using namespace std;
string remove_space(string str){
    string res = "";
    for(char ch :str){
        if(ch !=' '){
          res +=ch;
        }
    }
    return res;
}
int main(){
    string str= "Hello everyone goodmorning";
       cout<<"strings without spaces are: "<<remove_space(str);
    return  0;
}