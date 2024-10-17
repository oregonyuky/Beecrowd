/*

beecrowd | 1121
Robô Colecionador
Maratona de Programação da SBC  Brasil

Timelimit: 1
Um dos esportes favoritos na Robolândia é o Rali dos Robôs. Este rali é praticado em uma arena retangular gigante de N linhas por M colunas de células quadradas. Algumas das células estão vazias, algumas contêm figurinhas da Copa (muito apreciadas pelas inteligências artificiais da Robolândia) e algumas são ocupadas por pilastras que sustentam o teto da arena. Em seu percurso os robôs podem ocupar qualquer célula da arena, exceto as que contém pilastras, que bloqueiam o seu movimento. O percurso do robô na arena durante o rali é determinado por uma sequência de instruções. Cada instrução é representada por um dos seguintes caracteres: ‘D’, ‘E’ e ‘F’, significando, respectivamente, “gire 90 graus para a direita”, “gire 90 graus para a esquerda” e “ande uma célula para a frente”. O robô começa o rali em uma posição inicial na arena e segue fielmente a sequência de instruções dada (afinal, eles são robôs!). Sempre que o robô ocupa uma célula que contém uma figurinha da Copa ele a coleta. As figurinhas da Copa não são repostas, ou seja, cada figurinha pode ser coletada uma unica vez. Quando um robô tenta andar para uma célula onde existe uma pilastra ele patina, permanecendo na célula onde estava, com a mesma orientação. O mesmo também acontece quando um robô tenta sair da arena.

Dados o mapa da arena, descrevendo a posição de pilastras e figurinhas, e a sequência de instruções de um robô, você deve escrever um programa para determinar o número de figurinhas coletadas pelo robô.

Entrada
A entrada contém vários casos de teste. A primeira linha de um caso de teste contém três números inteiros N, M e S (1 ≤ N, M ≤ 100, 1 ≤ S ≤ 5 × 104 ), separados por espaços em branco, indicando respectivamente o número de linhas e o número de colunas da arena e o número de instruções para o robô. Cada uma das N linhas seguintes da entrada descreve uma linha de células da arena e contém uma cadeia com M caracteres. A primeira linha que aparece na descrição da arena é a que está mais ao Norte; a primeira coluna que aparece na descrição de uma linha de células da arena é a que está mais a Oeste.

Cada célula da arena pode conter um dos seguintes caracteres:

‘.’ — célula normal;
‘*’ — célula que contém uma figurinha da Copa;
‘#’ — célula que contém uma pilastra;
‘N’, ‘S’, ‘L’, ‘O’ — célula onde o robô inicia o percurso (única na arena). A letra representa a orientação inicial do robô (Norte, Sul, Leste e Oeste, respectivamente).

A ultima linha da entrada contém uma sequência de S caracteres dentre ‘D’, ‘E’ e ‘F’, representando as instruções do robô.

O último caso de teste é seguido por uma linha que contém apenas três números zero separados por um espaço em branco.

Saída
Para cada rali descrito na entrada seu programa deve imprimir uma única linha contendo um único inteiro, indicando o número de figurinhas que o robô colecionou durante o rali.

Exemplo de Entrada	Exemplo de Saída
3 3 2
***
*N*
***
DE
4 4 5
...#
*#O.
*.*.
*.#.
FFEFF
10 10 20
....*.....
.......*..
.....*....
..*.#.....
...#N.*..*
...*......
..........
..........
..........
..........
FDFFFFFFEEFFFFFFEFDF
0 0 0

0
1
3

Maratona de Programação da SBC 2010
*/
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
        }
        cout << get << '\n';
    }
}