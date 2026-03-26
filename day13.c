#include <stdio.h>

int main() {
    int matrix[100][100];
    int m, n, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    printf("Enter matrix elements:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int top = 0, bottom = m - 1;
    int left = 0, right = n - 1;

    printf("Spiral traversal:\n");

    while(top <= bottom && left <= right) {

        // Left to Right
        for(i = left; i <= right; i++) {
            printf("%d ", matrix[top][i]);
        }
        top++;

        // Top to Bottom
        for(i = top; i <= bottom; i++) {
            printf("%d ", matrix[i][right]);
        }
        right--;

        // Right to Left
        if(top <= bottom) {
            for(i = right; i >= left; i--) {
                printf("%d ", matrix[bottom][i]);
            }
            bottom--;
        }

        // Bottom to Top
        if(left <= right) {
            for(i = bottom; i >= top; i--) {
                printf("%d ", matrix[i][left]);
            }
            left++;
        }
    }

    return 0;
}