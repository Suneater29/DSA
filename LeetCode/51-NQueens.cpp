#include<bits/stdc++.h>
using namespace std;
void generate(int n,vector<vector<string>> &ans,vector<string> &board,vector<int> &leftrow,vector<int> &updiag,vector<int> &downdiag,int row) {
    if (row == n) {
        ans.push_back(board);
        return;
    }
    for (int col = 0; col < n; col++) {
        if (leftrow[col] == 0 && updiag[n - 1 + row - col] == 0 && downdiag[row + col] == 0){
                board[row][col] = 'Q';
                leftrow[col] = 1;
                updiag[n - 1 + row - col] = 1;
                downdiag[row + col] = 1;
                generate(n, ans, board, leftrow, updiag, downdiag, row + 1);
                board[row][col] = '.';
                leftrow[col] = 0;
                updiag[n - 1 + row - col] = 0;
                downdiag[row + col] = 0;
        }
    }
}
vector<vector<string>> solveNQueens(int n) {
    vector<vector<string>> ans;
    vector<string> board(n, string(n, '.'));
    vector<int> leftrow(n, 0);
    vector<int> updiag(2 * n - 1, 0);
    vector<int> downdiag(2 * n - 1, 0);
    generate(n, ans, board, leftrow, updiag, downdiag, 0);
    return ans;
}

int main() {
    int n;
    cout << "Enter value of N: ";
    cin >> n;
    vector<vector<string>> ans = solveNQueens(n);
    cout << "\nTotal Solutions = " << ans.size() << "\n\n";
    for (int k = 0; k < ans.size(); k++) {
        cout << "Solution " << k + 1 << ":\n";
        for (string row : ans[k]) {
            cout << row << endl;
        }
        cout << endl;
    }
    return 0;
}