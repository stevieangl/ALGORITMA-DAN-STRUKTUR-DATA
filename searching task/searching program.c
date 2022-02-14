#include <stdio.h>

int main()
{
    int n, i, Data[10], cari;
    printf("mau input berapa data? ");
    scanf("%d", &n);
    printf("masukan %d integer(s)\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &Data[i]);

    printf("Cari angka berapa?");
    scanf("%d", &cari);
    for (i = 0; i < n; i++)
    {
        if (Data[i] == cari)
        {
            printf("angka %d ketemu, dan tersimpan di lokasi/indeks %d", cari, i + 1);
            break;
        }
    }

    if (i == n)
        printf("angka %d tidak ditemukan", cari);

    return 0;
}