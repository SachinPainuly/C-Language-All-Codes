#include <stdio.h>
int main()
{
    int i, j, arr[5][5], sum = 0;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Rows sum: ");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            sum = sum + arr[i][j];
        }
        printf("%d ", sum);
        sum = 0;
    }
    printf("\n");
    printf("Column sum: ");
    for (j = 0; j < 5; j++)
    {
        for (i = 0; i < 5; i++)
        {
            sum = sum + arr[i][j];
        }
        printf("%d ", sum);
        sum = 0;
    }
    return 0;
}
