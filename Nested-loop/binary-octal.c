#include<stdio.h>
int binary_to_octal(int);
void main()
{
    int binary,octal,sum;
    printf("Input the binary value:");
    scanf("%d",&binary);
    sum=binary_to_octal(binary);
    printf("The Octal number is : %d\n",sum);
}
int binary_to_octal(int binary)
{
     int remainder,list,sum,place=1,temp,r,octal;
     list=1;
   
    for(temp=binary;binary!=0;binary=binary/1000)
    {
        octal=0;
        place=1;
        r=binary%1000;
        for(temp=r;r!=0;r=r/10)
        {
            remainder=r%10;
            octal=octal+remainder*place;
            place=place*2;
        }
        sum=sum+octal*list;
        list=list*10;
    }
    return sum;
}