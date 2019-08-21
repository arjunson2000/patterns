#include <stdio.h>

int main()
{
    int i, j, rows,nums, spaces;
   
    printf("Enter rows to print : ");
    scanf("%d", &rows);
    
    
    nums = 1;
    spaces = rows - 1;
    
    for(i=1; i<rows*2; i++)
    {
        for(j=1; j<=spaces; j++)
            printf(" ");
        
        for(j=1; j<nums*2; j++)
            printf("%d",j);
        
        printf("\n");
        
        if(i<rows)
        {
            spaces--;
            nums++;
        }
        else
        {
            spaces++;
            nums--;
        }
    }
    
    return 0;
}
