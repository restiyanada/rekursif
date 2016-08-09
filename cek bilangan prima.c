#include <stdio.h>
#include <conio.h>

int n;

int cekbilanganPrima(int a){
   if(a == 1){
      return 1;
   }else if(n%a==0){
      return 0;
   }else{
      return cekbilanganPrima(a-1);
   }
}

main(){
   printf("masukkan nilai :"); scanf("%d",&n);
   if(n>1){
      int a = cekbilanganPrima(n-1);
      if(a == 1){
         printf("%d bilangan PRIMA\n",n);
      }else{
         printf("%d bilangan BUKAN PRIMA\n",n);
      }
   }else{
      printf("%d bilangan BUKAN PRIMA\n",n);
   }
}
