#include <stdio.h> 
 
void deret(int x){ 
    if(x<10){ 
        printf("%d ",x); 
        deret(++x); 
    } 
} 
 
main(){ 
    int x=0; 
    deret(x); 
}
