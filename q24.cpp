//remove space character from the given array of the string
//str =hello welcome to you
#include<bits/stdc++.h>
using namespace std;
int main(){
  char str[] ="hello welcome to you chitranjan kumar";
    int count =0;
    for(int  i=0;str[i];i++){
        if(str[i]!=' ')
            str[count++]=str[i];
    }
        str[count]='\0';
        cout<<str;
        return 0;
}