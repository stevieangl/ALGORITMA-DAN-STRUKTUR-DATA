#include <stdio.h>

int main()
{
    int a,swap,i,j,n,array[20];
    printf("masukan banyak elemen: ");
    scanf("%d",&n);
    printf("masukan %d angka: \n",n);
    for (i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    for (int i = 0; i < n-1; i++)
    {
        a =i;
        for ( j = i+1; j < n; j++)
        {
            if (array[a]>array[j])
            {
                a=j;
            }
            
        }
        if (a !=i)
        {
            swap=array[i];
            array[i]=array[a];
            array[a]=swap;
        }
    }
    printf("hasil pengurutan: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ",array[i]);
    }

    return 0;
}