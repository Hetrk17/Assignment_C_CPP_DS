//Het Kanzariya

#include<stdio.h>
void main()
{
	int a[10]={1,5,4,8,9,2,0,6,11,7},i;
	printf("Array elements are:\n");
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");

	int ele;
	printf("Enter the element you want to search: ");
	scanf("%d",&ele);

	int flag=0;
	for(i=0;i<10;i++)
	{
		if(a[i]==ele)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
		printf("YES");
	else
		printf("NO");


	printf("\nSequence of array elements:\n");
	for(i=0;i<10;i++)
	{
		printf("%d",a[i]);
	}
	printf("\n");
}
