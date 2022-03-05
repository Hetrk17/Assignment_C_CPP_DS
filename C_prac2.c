//Het Kanzariya

#include<stdio.h>
int func()
{
	int marks[3],i,sum=0,percentage;
	for(i=0;i<3;i++)
	{
		printf("Enter marks of subject %d out of 100: ",i+1);
		scanf("%d",&marks[i]);
	}

	for(i=0;i<3;i++)
	{
		sum += marks[i];
	}
	for(i=0;i<3;i++)
	{
		percentage = sum/3;
	}
	printf("Total marks: %d\n",sum);
	printf("Final Percentage: %d\n",percentage);
}

void main()
{
	func();
}


