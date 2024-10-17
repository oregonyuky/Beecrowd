#include <bits/stdc++.h>
using namespace std;

int h, l;
int visited[10][10];  // Como os valores máximos são 10x10, é possível usar um tamanho fixo aqui.
int result[10][10];
int COUNT;

bool is_valid(int x, int y, int key, int input[10][10]){
    if(x<h && y<l && x>=0 && y>=0){
        if(visited[x][y]==0 && input[x][y]==key)
            return true;
        else
            return false;
    }
    else
        return false;
}

void BFS(int x, int y, int i, int j, int input[10][10]){
    if(input[i][j] != x)
        return;

    visited[i][j] = 1;
    COUNT++;
    int x_move[] = {0, 0, 1, -1};
    int y_move[] = {1, -1, 0, 0};

    for(int u=0; u<4; u++){
        int new_i = i + y_move[u];
        int new_j = j + x_move[u];
        if(is_valid(new_i, new_j, x, input))
            BFS(x, y, new_i, new_j, input);
    }
}

void reset_visited(){
    for(int i=0;i<h;i++)
        for(int j=0;j<l;j++)
            visited[i][j] = 0;
}

void reset_result(int key, int input[10][10]){
    for(int i=0;i<h;i++){
        for(int j=0;j<l;j++){
            if(visited[i][j] && input[i][j]==key)
                result[i][j] = input[i][j];
            else
                result[i][j] = 0;
        }
    }
}

void prints(int res){
    cout << res << "\n";
    for(int i=0;i<h;i++){
        for(int j=0;j<l;j++){
            if(result[i][j])
                cout << result[i][j] << " ";
            else
                cout << ". ";
        }
        cout << "\n";
    }
}

void Largest(int input[10][10]){
    int current_max = INT_MIN;

    for(int i=0; i<h; i++){
        for(int j=0; j<l; j++){
            reset_visited();
            COUNT = 0;
            if(j+1 < l)
                BFS(input[i][j], input[i][j+1], i, j, input);
            if(COUNT >= current_max){
                current_max = COUNT;
                reset_result(input[i][j], input);
            }

            reset_visited();
            COUNT = 0;
            if(i+1 < h)
                BFS(input[i][j], input[i+1][j], i, j, input);
            if(COUNT >= current_max){
                current_max = COUNT;
                reset_result(input[i][j], input);
            }
        }
    }
    prints(current_max);
}

int main(){
    int input[10][10];
    cin >> h >> l;
    for(int i=0;i<h;i++)
        for(int j=0;j<l;j++)
            cin >> input[i][j];
    Largest(input);
}
/*
#include <bits/stdc++.h>
using namespace std;

int BFSTraversal(vector<vector<int>> &matrix, int p, int q, int rows, int cols) {
    int res = 0;
    // Queue to store the cells
    queue<pair<int, int>> que;
    // Insert the starting point
    que.push({p, q});
    while (!que.empty()) {
        // Get the first element from the queue
        auto first = que.front();
        que.pop();
        int row = first.first, col = first.second;
        // Boundry validation
        if (row < 0 || col < 0 || row > rows - 1 || col > cols - 1)
            continue;
        // For visited elements
        if (matrix[row][col] == 0)
            continue;
        // For non-visited elements
        if (matrix[row][col] == 1) {
            // Update matrix cell
            matrix[row][col] = 0;
            res++;
        }
        // Traverse all neighbors
        que.push({row + 1, col});
        que.push({row - 1, col});
        que.push({row, col + 1});
        que.push({row, col - 1});
    }
    return res;
}
void printSizeOfConnected(vector<vector<int>> matrix) {
    // To store sizes
    vector<int> ans;
    int rows = matrix.size();
    int cols = matrix[0].size();
    for (int p = 0; p < rows; ++p) {
        for (int q = 0; q < cols; ++q) {
            // If the current cell is not visited
            if (matrix[p][q] == 1) {
                // To get the total number of connected nodes to the current node
                int sz = BFSTraversal(matrix, p, q, rows, cols);
                ans.push_back(sz);
            }
        }
    }
    cout << "The sizes of the connected nodes are ";
    for (int val : ans)
        cout << val << " ";
}
int main() {
    vector<vector<int>> matrix = {{0, 1, 0, 0, 0},
                                  {0, 1, 1, 1, 1},
                                  {1, 0, 0, 1, 1},
                                  {1, 0, 0, 0, 0},
                                  {0, 0, 1, 1, 1}};

    printSizeOfConnected(matrix);
    return 0;
}
*/