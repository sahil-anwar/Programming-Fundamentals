#include <stdio.h>

int DistinctWays(int n)
{
    if (n == 0 || n == 1)
        return 1;
    int i,distinct_ways[n + 1];
    distinct_ways[0] = 1;
    distinct_ways[1] = 1;
  
    for ( i = 2; i <= n; i++)
        distinct_ways[i] = distinct_ways[i - 1] + distinct_ways[i - 2];
   
    printf("distinct ways to reach the top: %d\n", distinct_ways[n]);
    printf("paths:\n");
    printPaths(n, distinct_ways, "");
    
    return distinct_ways[n];
}
void printPaths(int n, int distinct_ways[], char path[])
{
    if (n == 0)
    {
        printf("%s\n", path);
        return;
    }

    if (n >= 1)
    {
        char path1[100];
        sprintf(path1, "%s 1", path);
        printPaths(n - 1, distinct_ways, path1);
    }
    if (n >= 2)
    {
        char path2[100];
        sprintf(path2, "%s 2", path);
        printPaths(n - 2, distinct_ways, path2);
    }
}
int main()
{
    int n;
    printf("enter the number of steps in the staircase: ");
    scanf("%d", &n);
 
    DistinctWays(n);

    return 0;
}

