#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;
ll bin(string st){
    ll sum=0;
    for(int i=0;i<st.size();i++){
        if(st[st.size()-i-1]=='1')
            sum += 1LL<<i;
    }
    return sum;
}
int fib(ll n){
    double sqrtl5 = sqrt(5);
    double phi = (1+sqrtl5)/2;
    double phi1 = (1-sqrtl5)/2;
    double fib1 = (pow(phi, n)-pow(phi1, n))/sqrtl5;
    return fib1;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string st;
        cin >> st;
        long long int dp = fib(bin(st));
        string res = to_string(dp);
        cout << (res.size()==1 ? "0" : "00") << dp << "\n";
    }
}