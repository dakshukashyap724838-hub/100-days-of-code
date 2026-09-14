//Q71: Read and print a matrix.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

*/

#include <stdio.h>

int main() {
	int rows, columns;

	scanf("%d %d", &rows, &columns);

	int matrix[rows][columns];

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			scanf("%d", &matrix[i][j]);
		}
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			printf("%d", matrix[i][j]);

			if (j < columns - 1) {
				printf(" ");
			}
		}
		printf("\n");
	}

	return 0;
}