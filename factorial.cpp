// print the facrtorial of the number 
#include<iostream>
using namespace std;
class fact{
    public:
    int factorial(int n)
{
          int prod= 1;
          while(n!=0){
            prod = prod* (n);
            n--;
          }
       return prod;
}

};
int main(){
    fact obj;
    int n;
    cin>>n;
    int res = obj.factorial(n);
    cout<<res;
    return 0;
}