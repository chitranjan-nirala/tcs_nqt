//Program to find LCM of two numbers.
// a=20 ,b= 28
//factor of  20 =5*4
//factor of 28 = 7*4
//output = 5*7*4 =140
#include<iostream>
using namespace std;
class a{
    public:
    int lcm(int a,int b){
        int small = min(a,b);
         int greater = max(a,b);
         for(int i =greater ; ; i+=greater){
            if(i% small==0)
            {
                return i ;
            }
         }
       
    }
};

int main(){
    a obj;
    int a,b;
    cin>>a>>b;
    int res= obj.lcm(a,b);
    cout<<res;
    return 0;
}