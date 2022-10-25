/*main.c*/
#include <stdio.h>
#include "lib_four.h"

int main(){
	printf("덧셈 -> add(1,2) = %d\n",add(1,2));
	printf("뺄셈 -> sub(4,3) = %d\n",sub(4,3));
	printf("곱셈 -> mul(1,2) = %d\n",mul(1,2));
	printf("나눗셈 -> div(4,2) = %d\n",div(4,2));
}

