
#include<stdio.h>
#include<math.h>
int main()
{   
    float principle;
    float rate;
    float time;
	float compoundInterest;
	
	printf("\n please enter the value of principle;\t");
	scanf("%f",&principle);
	
	printf("\n please enter the value of rate;\t");
	scanf("%f",&rate);
	
	printf("\n please enter the value of time;\t");
	scanf("%f",&time);
	
	//Calculate the value of compound Interest
	compoundInterest=principle*pow((1+rate/100),time);
	
	printf("compoundInterest=%f",compoundInterest);
	
	return 1;
	
	
}

