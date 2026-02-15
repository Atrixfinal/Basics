#include<stdio.h>
#include<math.h>
#include<string.h>
void main()
{
    int a,b,c,d,n,i,j,k;
    char p,q,r,s,t;
    float x,y,z;
    printf("enter the limit of row: ");                                         //simple square * pattern
    scanf("%d",&c);
    printf("enter the limit of col: ");
    scanf("%d",&d);
    for(i=1;i<=c;i++)
    {
        for ( j = 1; j <= d; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    printf("Max value: ");                                                      //half pyramid * pattern
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for ( j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)                                                 //middle * pattern pyramid
    {
        for (k = 1; k <= n - i; k++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
