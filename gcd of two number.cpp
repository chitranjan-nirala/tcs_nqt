//Given two numbers a and b, the task is to find the GCD of the two numbers.
//Input: a = 20, b = 28
//Output: 4
//explaination : 20 = 5*4 
//                28 =7*4  
//output =4
#include<iostream>
using namespace std; 
class hcf{
    public:
    int gcd(int a, int b){
        int ans = min(a,b);
        while( ans>0){
        if(a%ans==0 && b% ans ==0){
         break;
        }
        ans--;
        }
        return ans;

    }
};
int main(){
    hcf obj;
    int a ,b;
    cin>>a>>b;
    int res = obj.gcd(a,b);
    cout<<res;
    return 0;
}