#include <stdio.h>

void staticArray(void);
void automaticArray(void);

int main()
{
   printf("First call to each function:\n");
   staticArray();
   automaticArray();

   printf("\n\nSecond call to each function:\n");
   staticArray();
   automaticArray();
}

void staticArray(void)
{
	static int array1[3]; 
	printf("\nValues on entering staticArray:\n");
	for (int i = 0; i <= 2; i++)
		printf("array1[%d] = %d ", i, array1[i]);
	printf("\nValues on exiting staticArray:\n");
	for (int j = 0; j < 3; j++)
		printf("array1[%d] = %d ", j, array1[j] += 5);
}

void automaticArray(void)
{
	int array2[3] = {1,2,3};
	printf("\n\nValues on entering automaticArray:\n");
	for (int i = 0; i <=2; i++)
		printf("array2[%d] = %d ", i, array2[i]);
	printf("\nValues on exiting automaticArray:\n");
	for (int j = 0; j < 3; j++)
		printf("array2[%d] = %d ", j, array2[j] += 5);
}
