#include <stdio.h> 
 
void deret(int a){ 
    if(a<10){ 
        printf("%d ",a); 
        deret(++a); 
    } 
} 
 
main(){ 
    int a=0; 
    deret(a); 
}
