#include <bits/stdc++.h>
using namespace std;
int main(){
    string st;
    while(getline(cin, st)){
        int j=0;
        for(int i=0;i<st.size();i++){
            if(st[i]!=32){
                if(~j&1)
                    st[i] = toupper(st[i]);
                else
                    st[i] = tolower(st[i]);
                j++;
            }
        }
        cout << st << "\n";
    }
    return 0;
}