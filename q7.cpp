//find the largest and smallest number of an array
#include<bits/stdc++.h>
using namespace std;
vector<int>findlagestandsmallest(int n ){
    int smallest =INT_MAX;
    int largest =INT_MIN;
    vector<int>ans;
    while(n!=0){
        int digit = n%10;
        smallest =min(smallest,digit);
        largest = max(largest,digit);
        n= n/10;
    }
    ans.push_back(smallest);
    ans.push_back(largest);
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int> res = findlagestandsmallest(n);
    cout<<res[0]<<res[1]<<endl;
}