#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t; while(t--){
	    long long n; cin>>n;
	    unordered_map<long int , int> m;
	    long long a[n];
	    for(int i=0; i<n; i++) { cin>>a[i]; m[a[i]]++;}
	    int ans=0;
	    for(int i=0; i<n; i++){
	        if(m[a[i]]==1){
	            ans=1;
	            cout<<a[i]<<endl;
	            break;
	        }
	    }
	    if(ans==0) cout<<0<<endl;
	}
	return 0;
}