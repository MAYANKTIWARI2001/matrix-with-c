#include <stdio.h>
#include <stdio.h>
#define ROW 2
#define COL 2
int main() 
{
    int mat1[ROW][COL],mat2[ROW][COL],mat3[ROW][COL],i,j,max[ROW];

    
    printf("Enter Elements of first Matrix ==>> ");
    for(i=0;i<ROW;i++)
    {
        for(j=0,max[i]=0;j<COL;j++)
        {
            scanf("%d",&mat1[i][j]);
           
        }
    }
    
    
    printf("Enter Elements of second Matrix ==>> ");
    for(i=0;i<ROW;i++)
    {
        for(j=0,max[i]=0;j<COL;j++)
        {
            scanf("%d",&mat2[i][j]);
            mat3[i][j]=mat1[i][j]+mat2[i][j];
            
        }
        
    }
    for(i=0;i<ROW;i++)
    {
        printf("\n");
        for(j=0,max[i]=0;j<COL;j++)
        {
            
            printf("\t%d",mat3[i][j]);
           
        }
    }

   
    
      return 0;
}
