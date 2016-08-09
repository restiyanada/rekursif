#include <stdio.h>
#include <conio.h>
#include <math.h>

int fibo(int n){
  if((n==1) || (n==2)){ //basis
     return 1;
  }else if(n % 2 == 0){ //rekurens
      return fibo(n-2) + 2; //Kondisi Genap
   }else {
      return fibo(n-2) + 1; //Kondisi Ganjil
    }
}

main(){
 int i,j;
 printf("masukan batasan deret: "); scanf("%d", &j);
 for (i=1; i<j;i++){
   printf(" %d  ",fibo(i));
   }
   getch();
}