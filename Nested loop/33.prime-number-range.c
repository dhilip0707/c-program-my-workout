#include <stdio.h>
void main()
{
    int i, flag = 0,start,end,j;
    printf("Input the starting range of number:");
    scanf("%d", &start);
    printf("Input the ending range of number:");
    scanf("%d", &end);
    printf("The prime number between %d and %d are:",start,end); 
   
   for (i = start; i <= end; i++)
   {
    flag=0;
    
    for (j = 1; j <=i; j++)
    {
        if (i%j == 0)
        {
            flag++;
        }
    }
    if (flag ==2)
    {
        printf("%d ",i);
    }

}
}

/*output
Input the starting range of number:1
Input the ending range of number:50
The prime number between 1 and 50 are:2 3 5 7 11 13 17 19 23 29 31 37 41 43 47
*/