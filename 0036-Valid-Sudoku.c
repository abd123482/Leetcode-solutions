bool isValidSudoku(char** board, int boardSize, int* boardColSize) {

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (board[i][j] != '.') {
                if (board[i][j] < '1' || board[i][j] > '9') return false;
                for (int k = j + 1; k < 9; k++) {
                    if (board[i][k] == board[i][j]) return false;
                }
            }
        }
    }

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (board[j][i] != '.') {
                if (board[j][i] < '1' || board[j][i] > '9') return false;
                for (int k = j + 1; k < 9; k++) {
                    if (board[k][i] == board[j][i]) return false;
                }
            }
        }
    }

    for (int sr = 0; sr < 9; sr += 3) {
        for (int sc = 0; sc < 9; sc += 3) {
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    char c = board[sr+i][sc+j];
                    if (c != '.') {
                        if (c < '1' || c > '9') return false;
                        for (int x = 0; x < 3; x++) {
                            for (int y = 0; y < 3; y++) {
                                if ((x != i || y != j) && board[sr+x][sc+y] == c) {
                                    return false;
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    return true;
}
