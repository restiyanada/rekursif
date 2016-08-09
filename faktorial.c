#include <stdio.h>
int faktorial(int x){
	if(x==0 || x==1) return 1;
	return x*faktorial(x-1);
}
main(){
	printf("%d", faktorial(6));
}
