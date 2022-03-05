/* In-place merge two sorted arrays.
Given two sorted arrays, X[ ] and Y[ ] of size m and n each, merge elements of X[ ] with elements of
array Y[ ] by maintaining the sorted order, i.e., fill X[ ] with the first m smallest elements and fill Y[ ]
with remaining elements. 
For example,
Input:
X[] = { 1, 4, 7, 8, 10 }
Y[] = { 2, 3, 9 }

Output:
X[] = { 1, 2, 3, 4, 7 }
Y[] = { 8, 9, 10 }
*/

#include <stdio.h>

void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
void merge(int M, int N, int A[], int B[])
{
	for (int i = 0; i < M; i++)
	{
		if (A[i] > B[0])
		{
			swap(&A[i], &B[0]);
			int j = 0;

			while (j + 1 < N && B[j] > B[j + 1])
				swap(&B[j], &B[j + 1]), j++;
		}
	}

	printf("\nMatrix 1: ");
	for (int i = 0; i < M; i++)
		printf("%d ",A[i]);

	printf("\nMatrix 2: ");
	for (int i = 0; i < N; i++)
		printf("%d ",B[i]);
}

int main()
{
	int M, N;
	printf("Enter size of matrix 1 and 2: ");
	scanf("%d %d",&M,&N);

	int A[M], B[N];

	printf("\nMatrix 1: ");
	for (int i = 0; i < M; i++)
		scanf("%d",&A[i]);

	printf("Matrix 2: ");
	for (int i = 0; i < N; i++)
		scanf("%d",&B[i]);

	merge(M, N, A, B);
	printf("\n");
}
