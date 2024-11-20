//8. Write a C program to find the largest of three numbers.

#include<stdio.h>
int main()
{
int m,n,o;
printf("Enter three numbers :");
scanf("%d%d%d",&m,&n,&o);
printf("1st number=%d,2nd number=%d,3rd number=%d\n",m,n,o);
if(m>=n && m>=o){
	printf("The 1st Number is the greatest among three");
}
else if (n>=m && n>=o){
	printf("The 2nd Number is the greatest among three");
}
else{
	printf("The 3rd Number is the greatest among three");
}
return 0;
}

/*
output
Enter three numbers :12 25 52
1st number=12,2nd number=25,3rd number=52
The 3rd Number is the greatest among three
*/

