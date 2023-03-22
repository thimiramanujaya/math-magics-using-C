#include <stdio.h>

int main() {
	
	int nu1,nu2, s1,s2, sb2;
	
	printf("\n  (: Let's have a FUN with Math Magics -->> \n\n\n");
	printf("  Imagine a number ( 0 < number < 100)  and follow the sequence...\n\n");
	printf("  1.) [your age] * [2]   *conditions:- your age must be greater than 10 and less than 100\n\n");
	printf("  2.) [value got in 1st step] + [5]\n\n");
	printf("  3.) [value got in 2nd step] * [50]\n\n");
	printf("  4.) [value got in 3rd step] - [365]\n\n");
	printf("  5.) [your imagine number] + [value got in 4th step] \n\n\n");
	
	printf("  Imagine You finally got Number like this, '1354'\n");
	printf("  In here,\n");
	printf("  	first two numbers --> 13\n");
	printf("  	last two numbers  --> 54\n\n");
	
	printf("  So follow this, In the next step... \n\n");
	
	printf("  6.) Type first two numbers of the Number you got : ");
	scanf("%d",&nu1);
	
	printf("\n  7.) Type last two numbers of the Number you got  : ");
	scanf("%d",&nu2);
	
	if (nu2<85) {
		s2 = nu2 + 15;
		s1 = nu1 + 1;
	}
	else {
		sb2 = nu2 + 15;
		s2 = sb2 - 100;
		
		s1 = nu1 + 2;  
	}
	
	printf("\n\n        > Your Age : %d \n",s1);
	printf("\n        # Number You Imagine : %d",s2);
	
}
