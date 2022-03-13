#include <stdio.h>
#define ROW 5
#define COL 5

int main() {
    int m[ROW][COL], t[ROW][COL];
    int sr,sc,i,j;
    
    printf("\n Enter how many rows do you want : ");
    scanf("%d",&sr);
    
    printf("\n Enter how many col do you want : ");
    scanf("%d",&sc);
    
    if(sr!=sc)
    {
        printf("\n Not Symmetric");
        return(0);
    }
    
    printf("\n Enter %d elements",sr*sc);
    
for(i=0;i<sr;i++)
    {
        for(j=0;j<sc;j++)
        {
            scanf("%d",&m[i][j]);
            t[j][i]=m[i][j];
        }
    }
    
    for(i=0;i<sr;i++)
    {
        for(j=0;j<sc;j++)
        {
        
            if(m[i][j]!=t[i][j])
            {
                printf("\n Not Symmetric");
                return(0);
            }
        }
    }
    
     printf("\n The matrix is symmetric !!");
    printf("\n Transpose of the matrix is ==> ");
    for(i=0;i<sr;i++)
    {
        printf("\n");
        for(j=0;j<sc;j++)
        {
            printf(" %d",t[i][j]);
        }
    }
    
    
    return 0;
}
