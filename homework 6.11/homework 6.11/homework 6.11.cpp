#include <stdio.h>

int main()
{
    int array[10];
    int k = 9;

    printf("Enter 10 number :\n");
    for (int i = 0; i < 10; i++)
    {
        scanf_s("%d", &array[i]);
    }
    for (int i = 0; i < 9; i++)
    {
        int n = 0;
        for (int j = 0; j < k; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                n += 1;
            }
        }
        if (n == 0)
            break;
        k--;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", array[i]);
    }
}
