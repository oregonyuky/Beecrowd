#include <bits/stdc++.h>
using namespace std;
int main(){
    int n = 20;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(i==j || j==0)
                arr[i][j] = 1;
            else
                arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
        }
    }
    cout << arr[0][0] << "\n";
    cout << arr[1][0] <<  "\n";
    cout << arr[1][1] << "\n";
    cout << arr[2][0] << "\n";
    cout << arr[2][1] << "\n";
    cout << arr[2][2] << "\n";
    cout << arr[3][0] << "\n";
    cout << arr[3][1] << "\n";
    cout << arr[3][2] << "\n";
}