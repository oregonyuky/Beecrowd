#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;
// n = phi(n)/2;
ll phi(int n){
    ll result = n;
    for(ll p=2; p*p<=n; ++p){
        if(n%p==0){
            while(n%p==0)
                n/=p;
            result -= result/p;
        }
    }
    if(n>1)
        result -= result/n;
    return result;
}
int main(){
    ll t;
    while(cin >> t){
        cout << phi(t)/2 << "\n";
    }
}