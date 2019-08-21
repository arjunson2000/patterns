#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter number of N : ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    { 
        for(j=i; j<N; j++)
        {
            printf(" ");
        }

        for(j=1; j<=(2*i-1); j++)
        {
            printf("%d",i);
        }


        printf("\n");
    }

    return 0;
}
