#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "lib/lib_assert.c"

void foo(int num){
	my_assert(((num>=0)&&(num<=100)));
	printf("foo : num = %d\n",num);
}

void main(int argc, char *argv[]){
	int num;

	if(argc<2){
		fprintf(stderr, "Usage : p6_assert aNumber\n(0 <= aNumber <=100)\n");
		exit(1);
	}
	num=atoi(argv[1]);
	foo(num);
}
