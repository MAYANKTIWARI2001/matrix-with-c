#include <stdio.h>

int main()
{
    int mat[10][10];
    int row,col,i,j,sum=0;
    
    printf("\n Enter how many rows do you want : ");
    scanf("%d",&row);
    
    printf("\n Enter how many col do you want : ");
    scanf("%d",&col);
    
    if(row!=col)
    {
        printf("\n Not Square matrix");
        return(0);
    }
    
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
 
    printf("The matrix\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i==j)
            {
                sum=sum+mat[i][j];
            }
        }
    }
 
    printf("The sum of diagonal elements of a square matrix = %d\n",sum);

}
