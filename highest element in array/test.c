#include <stdio.h>
#include <stdio.h>
#define ROW 2
#define COL 2
int main() 
{
    int mat[ROW][COL],i,j,max[ROW];
   
    printf("Enter Elements of Matrix ==>> ");
    for(i=0;i<ROW;i++)
    {
        for(j=0,max[i]=0;j<COL;j++)
        {
            scanf("%d",&mat[i][j]);
            if(max[i]<mat[i][j])
                max[i]=mat[i][j];
        }
    }
 for(i=0;i<ROW;i++)
    {
        printf("\n");
        for(j=0;j<COL;j++)
        {
            printf("\t%d",mat[i][j]);
        }
    }
    for(i=0;i<ROW;i++)
    printf("\n Max of %d th row is  : %d",i,max[i]);
      return 0;
}
