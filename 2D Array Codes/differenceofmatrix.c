#include <stdio.h>
int main()
{
     int a[3][3],b[3][3],s[3][3],i,j;
     printf("Enter Elements for First 3*3 Matrix:\n\n");
     for(i=0;i<=2;i++)
          for(j=0;j<=2;j++)
          {
               scanf("%d",&a[i][j]);
          }
     printf("\nFirst Matrix :\n\n");
     for(i=0;i<=2;i++)
     {
          for(j=0;j<=2;j++)
          {
               printf("%d ",a[i][j]);
          }
          printf("\n");
     }
     printf("\nEnter Elements for Second 3*3 Matrix: \n\n");
     for(i=0;i<=2;i++)
          for(j=0;j<=2;j++)
          {
               scanf("%d",&b[i][j]);
          }
     printf("\nSecond Matrix :\n\n");
     for(i=0;i<=2;i++)
     {
          for(j=0;j<=2;j++)
          {
               printf("%d ",b[i][j]);
          }
          printf("\n");
     }
     for(i=0;i<=2;i++)
          for(j=0;j<=2;j++)
          {
               s[i][j]=a[i][j]-b[i][j];
          }
     printf("\nDifference Between Matrices :\n\n");
     for(i=0;i<=2;i++)
     {
          for(j=0;j<=2;j++)
          {
               printf("%d ",s[i][j]);
          }
          printf("\n");
     }
     return 0;
}