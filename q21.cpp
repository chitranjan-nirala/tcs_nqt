 //find palindrome of the number '
 #include<iostream>
#include<cmath>
using namespace std;
int  Palindrome(int n )
{
    int rev =0;
    int ori =n;
    while(n!=0){
    int temp = n%10;
    rev = (rev*10)+temp ;
    n/=10;
    }
    if(rev==ori){
        cout<<"palindrome ";
    }
    else
    cout<<"not palindrome";
    cout<<rev<<" "<<endl;
    return 0;
}

int  main(){
    int n;
    cin>>n;
    Palindrome(n);
    return 0;
}