#include<stdio.h>
int main()
{
	/* Matematik menüsü*/
	
	int num1,num2,math;
	printf(":::::::MENU:::::::\n\n");
	
	
	printf(" [1]addition\n [2]subtraction\n [3]multiplication\n [4]division.\n\n");
    
	do
	{
		printf("Do enter the operation you are processing	");
		scanf("%d", &math);
	}
	while (math<1 || math>4);

	printf("Enter two number please.\n");
	scanf("%d %d", &num1,&num2);
		
	switch (math)
	{
		case 1:
			math=num1+num2;
			printf("answer= %d",math); break;
		
		case 2:
			math=num1-num2;
			printf("answer= %d",math); break;
		
		case 3:
			math=num1*num2;
			printf("answer= %d",math); break;
		
		case 4 :
			math=num1/num2;
			printf("answer= %d",math);
				break;
		
	}
	
	
	
	
	
	return 0;
}
