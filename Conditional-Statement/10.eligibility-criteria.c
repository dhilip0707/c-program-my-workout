//10. Write a C program to determine eligibility for admission to a professional course based on the following criteria:


#include<stdio.h>
int main()
{
int m,p,c;
printf("Eligibility Criteria :\n");
printf("Marks in Maths>=65\n");
printf("and Marks in Phy>=55\n");
printf("and Marks in Chem>=50\n");
printf("and Total in all three subject>=190\n");
printf("or Total in Maths and Physics>=140\n");

printf("Input the marks obtained in Physics :\n");
scanf("%d",&p);
printf("Input the marks obtained in Chemistry :\n");
scanf("%d",&c);
printf("Input the marks obtained in Maths :\n");
scanf("%d",&m);
printf("Total marks of Maths,Physics,Chemistry:%d\n",m+p+c);
printf("Total marks of Maths and Physics:%d\n",m+p);

if(m>=65 && p>=55 && c>=50){
 		if((m+p+c)>=190||(m+p)>=140){
 			printf("The candidate is eligible for admission.\n");
 		}
 		else{
  			printf("The candidate is not eligible .\n");
 		}
 		}
 else{
  	printf("The candidate is not eligible for admission.\n");
 }
 return 0;
 }

/* 
output
Eligibility Criteria :
Marks in Maths>=65
and Marks in Phy>=55
and Marks in Chem>=50
and Total in all three subject>=190
or Total in Maths and Physics>=140
Input the marks obtained in Physics :
65
Input the marks obtained in Chemistry :
51
Input the marks obtained in Maths :
72
Total marks of Maths,Physics,Chemistry:188
Total marks of Maths and Physics:137
The candidate is not eligible .
*/
 
 
