/*dltest.c*/
#include <stdio.h>
#include <dlfcn.h>

int main(){
	void *handle;
	int (*add)(int,int), (*sub)(int,int),
		(*mul)(int,int), (*div)(int,int);
	char *error;

	handle=dlopen("./lib/libtest.so", RTLD_LAZY);
	if(!handle){
		fputs(dlerror(), stderr);
		exit(1);
	}
	
	add=dlsym(handle,"add");
	if((error=dlerror())!=NULL){
			fprintf(stderr,"%s",error);
			exit(1);
	}
	sub=dlsym(handle,"sub");
	if((error=dlerror())!=NULL){
		fprintf(stderr,"%s",error);
		exit(1);
	}
	mul=dlsym(handle,"mul");
	if((error=dlerror())!=NULL){
		fprintf(stderr,"%s",error);
		exit(1);
	}
	div=dlsym(handle,"div");
	if((error=dlerror())!=NULL){
		fprintf(stderr,"%s",error);
		exit(1);
	}

	printf("add(1,2)=%d\n",(*add)(1,2));
	printf("sub(2,1)=%d\n",(*sub)(2,1));
	printf("mul(1,2)=%d\n",(*mul)(1,2));
	printf("div(2,1)=%d\n",(*div)(2,1));
	dlclose(handle);
}



