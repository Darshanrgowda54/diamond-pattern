#include <stdio.h>

int main() {

    int n;

    printf("Enter the odd number \n");
    scanf("%d",&n);

    if (n % 2 == 0 || (n<3))
    {
        printf("Invalid input \n");
        return 0;
    }

    int i,j,k;

    for (i = 1; i <= n; i++)
    {
        for(k = 1; k<=(n-i); k++)
        {
            printf(" ");
        }
        for(j = 1; j <=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    for (i = n-1; i >=1; i--)
    {
        for(k = 1; k<=(n-i); k++)
        {
            printf(" ");
        }
        for(j = 1; j <=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
