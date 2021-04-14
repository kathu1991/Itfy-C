//Write a program to find the eligibility of admission for a professional course based on the following criteriaEligibility Criteria :
// PCM minimum score should be 55 and combined score should be minimum 175
#include <stdio.h>
void main()
{  int p,c,m,t,mp;

   printf("Eligibility Criteria :\n");
   printf("Marks in Maths >=55\n");
   printf("and Marks in Phy >=55\n");
   printf("and Marks in Chem>=55\n");
   printf("and Total in all three subject >=175\n");
   printf("-------------------------------------\n");

   printf("Input the marks obtained in Physics :");
   scanf("%d",&p);
   printf("Input the marks obtained in Chemistry :");
   scanf("%d",&c);
   printf("Input the marks obtained in Mathematics :");
   scanf("%d",&m);
   printf("Total marks of Maths, Physics and Chemistry : %d\n",m+p+c);

   if (m>=55 && p>=55 && c==55)
	        if((m+p+c)>=175)
	           printf("The  candidate is eligible for admission.\n");
	        else
	          printf("The candidate is not eligible.\n");
             else
	    printf("The candidate is not eligible.\n");
        
}