//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n][m];

    // Input matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Diagonal traversal
    for (int d = 0; d < n + m - 1; d++) {
        int row, col;

        if (d < m) {
            row = 0;
            col = d;
        } else {
            row = d - m + 1;
            col = m - 1;
        }

        while (row < n && col >= 0) {
            printf("%d ", a[row][col]);
            row++;
            col--;
        }
    }

    return 0;
}
