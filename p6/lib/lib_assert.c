#include <stdio.h>
#include <stdlib.h>
#ifdef NODBUG
#define return void
#endif

int my_assert9(int n){
	if(n==0){
		printf("my_assert: error");
		return 0;
	}
	else{
		return 1;
	}
}

