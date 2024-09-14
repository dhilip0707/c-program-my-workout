#include<stdio.h>
void main()
{
    int i,j,n=3,det=0,a,b,c;
    int determinant [n][n];
    printf("Input the elements int the matrix:\n");
    for ( i = 0; i < n; i++)
    {
       for ( j = 0; j < n; j++)
       {
        printf("element - [%d],[%d]",i,j);
        scanf("%d",&determinant[i][j]);
       }
       
    }
    /*a=determinant[1][1]*determinant[2][2]-determinant[1][2]*determinant[2][1];
    b=determinant[1][0]*determinant[2][0]-determinant[1][2]*determinant[2][0];
    c=determinant[1][0]*determinant[2][1]-determinant[1][1]*determinant[2][0];*/

    
    printf("The matrix is :\n");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("%d ",determinant[i][j]);
        }
        printf("\n");
    }
    a=determinant[0][0]*determinant[1][1]*determinant[2][2]-determinant[1][2]*determinant[2][1];
    b=determinant[0][1]*determinant[1][0]*determinant[2][0]-determinant[1][2]*determinant[2][0];
    c=determinant[0][2]*determinant[1][0]*determinant[2][1]-determinant[1][1]*determinant[2][0];
    det=a-b-c;
    printf("The determinant of the matrix is :%d\n",det);

   /* for ( i = 0; i < n; i++)
    {
       det=det+determinant[0][i]*((determinant[1][i+1%3])*(determinant[2][i+2]%3)-(determinant[1][i+2]%3)*(determinant[2][i+1]%3));
    }
    printf("%d",det); 
    */
    
}