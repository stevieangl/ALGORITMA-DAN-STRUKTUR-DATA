#include <stdio.h>
int main(void)
{
    int array[5], i, j, temp, n;
    printf("masukkan banyak elemen : ");
    scanf("%d", &n);
    printf("masukkan %d angka : ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    for (i = 0; i < (n - 1); i++)
    {
        for (j = (i + 1); j < n; j++)
        {
            if (array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    printf("hasil pengurutan: ");
    for (i = 0; i < n; i++)
    {
        printf(" %d ", array[i]);
    }
    return 0;
}