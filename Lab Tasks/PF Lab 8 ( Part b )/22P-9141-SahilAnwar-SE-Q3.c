#include <stdio.h>

int uniquePaths(int m, int n) {
    int i,j,grid[m][n];

    
    for ( i = 0; i < m; i++)
        grid[i][0] = 1;
    for ( j = 0; j < n; j++)
        grid[0][j] = 1;

    
    for ( i = 1; i < m; i++) {
        for ( j = 1; j < n; j++) {
            grid[i][j] = grid[i-1][j] + grid[i][j-1];
        }
    }

    return grid[m-1][n-1];  
}

int main() {
    int m, n;
    printf("Enter the number of rows: ");
    scanf("%d", &m);
    printf("Enter the number of columns: ");
    scanf("%d", &n);

    int paths = uniquePaths(m, n);
    printf("Number of possible unique paths: %d\n", paths);

    return 0;
}

