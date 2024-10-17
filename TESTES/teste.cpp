#include <bits/stdc++.h>
using namespace std;
char dir[4] = {'N', 'S', 'L', 'S'};
char dis[3] = {'F', 'D', 'E'};
int main(){
    int n, m, s, lo, x, y, i, j;
    string st;
    while(cin >> n >> m >> s){
        if(!n&&!m&&!s)break;
        char v[n][m];
        int get=0;
        for(i=0;i<n;i++){ 
            for(j=0;j<m;j++){ 
                cin >> v[i][j];
                switch(v[i][j]){
                    case 'N':lo=1;break;
                    case 'S':lo=2;break;
                    case 'O':lo=3;break;
                    case 'L':lo=4;break;
                }
                if(v[i][j]=='N'||v[i][j]=='S'||v[i][j]=='O'||v[i][j]=='L'){x = i; y = j;}//1 2 
            }
        }
        bool visited[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
                visited[i][j] = 0;
        }
        printf("%d %d\n", x, y);
        cin >> st;
        for(i=0;i<s;i++){
            if(lo==1){
                if(st[i]=='F' && v[x-1][y]!='#' && x-1!=-1)x--;
                else if(st[i]=='D' && v[x][y+1]!='#' && y+1!=n){y++;lo=4;}
                else if(st[i]=='E' && v[x][y-1]!='#' && y-1!=-1){y--;lo=3;}
            }
            if(lo==2){
                if(st[i]=='F' && v[x+1][y]!='#' && x+1!=n)x++;
                else if(st[i]=='D' && v[x][y-1]!='#' && y-1!=-1){y--;lo=3;}
                else if(st[i]=='E' && v[x][y+1] && y+1!=n){y++;lo=4;}
            }
            if(lo==3){
                if(st[i]=='F' && v[x][y-1]!='#' && y-1!=-1)y--;
                else if(st[i]=='D' && v[x-1][y]!='#' && x-1!=-1){x--;lo=1;}
                else if(st[i]=='E' && v[x+1][y]!='#' && x+1!=n){x++;lo=2;}
            }
            if(lo==4){
                if(st[i]=='F' && v[x][y+1]!='#' && y+1!=n)y++;
                else if(st[i]=='D' && v[x+1][y]!='#' && x+1!=n){x++;lo=2;}
                else if(st[i]=='E' && v[x-1][y]!='#' && x-1!=-1){x--;lo=1;}
            }
            printf("%d %d %d\n",lo,  x, y);
            int o1=-2, o2=-2;
            if(v[x][y]=='*' && !visited[x][y]){visited[x][y]=1; get++;}
            printf("%d %d\n", o1, o2);
        }
        cout << get << '\n';
    }
}