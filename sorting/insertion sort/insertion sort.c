#include<stdio.h>

int main(){
   int i, j, n, temp, angka[25];

   printf("masukkan banyak elemen: ");
   scanf("%d",&n);

   printf("masukkan %d angka: \n", n);
  
   for(i=0;i<n;i++)
      scanf("%d",&angka[i]);

   for(i=1;i<n;i++){
      temp=angka[i];
      j=i-1;
      while((temp<angka[j])&&(j>=0)){
         angka[j+1]=angka[j];
         j=j-1;
      }
      angka[j+1]=temp;
   }

   printf("hasil pengurutan: ");
   for(i=0;i<n;i++)
      printf(" %d",angka[i]);

   return 0;
}