#include <stdio.h> 
 
int deretGenap(int i){ 
    if(i<=20) printf("%d ",i); 
    deretGenap(i+=2); 
} 
 
main(){ 
   deretGenap(0); 
}