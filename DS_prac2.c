/* Generate binary numbers between 1 to `n` using a queue.
Given a positive number n, efficiently generate binary numbers between 1 and n using the queue data
structure in linear time.
For example, for n = 16, the binary numbers are:
Input :
1 10 11 100 101 110 111 1000 1001 1010 1011 1100 1101 1110 1111 10000
Output:
1 10 11 100 101 110 111 1000 1001 1010 1011 1100 1101 1110 1111 10000 */

#include <stdio.h>
#include <stdlib.h>

void bin_num(int n)
{
	int bin_num[1000];
	int i = 0;
	while (n > 0) 
	{
		bin_num[i] = n % 2;
		n = n / 2;
		i++;
	}
	for (int j = i - 1; j >= 0; j--)
		printf("%d",bin_num[j]);
	printf(" ");
}

void bin_num_gen(int n)
{
	for(int i = 0; i<= n; i++)
	{
		bin_num(i);
	}
}

void main()
{
	int n;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	bin_num_gen(n);	
	printf("\n");
}
