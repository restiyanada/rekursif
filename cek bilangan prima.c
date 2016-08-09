#include <stdio.h>
#include <conio.h>

int n;

int cekbilanganPrima(int p){
   if(p == 1){
      return 1;
   }else if(n%p==0){
      return 0;
   }else{
      return cekbilanganPrima(p-1);
   }
}

main(){
   printf("masukkan nilai :"); scanf("%d",&n);
   if(n>1){
      int p = cekbilanganPrima(n-1);
      if(p == 1){
         printf("%d bilangan PRIMA\n",n);
      }else{
         printf("%d bilangan BUKAN PRIMA\n",n);
      }
   }else{
      printf("%d bilangan BUKAN PRIMA\n",n);
   }
}
