#include <stdio.h> 
 
int deretbilanganGenap(int x){ 
    if(x<=20) printf("%d ",x); 
    deretbilanganGenap(x+=2); 
} 
 
main(){ 
   deretbilanganGenap(0); 
}
