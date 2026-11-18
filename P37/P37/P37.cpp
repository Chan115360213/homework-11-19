#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int search(const int array[], int key, int size);
int main()
{
    int a[SIZE];
    int key;
    int element;
    for (int i = 0; i < SIZE; i++)
        a[i] = 2 * i;

    printf("Enter integer search key:\n");
    scanf_s("%d", &key);

	element = search(a, key, SIZE);
    if(element != -1)
    {
        printf("Found value in element %d\n", element);
    }
    else
    {
        printf("Value not found\n");
    }
}

int search(const int array[], int key, int size)
{
	for (int i = 0; i < SIZE; i++)
	{
		if (array[i] == key)
			return i;
	}
	return -1;
}