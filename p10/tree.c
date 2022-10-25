#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <search.h>

struct stu{
	char *name;
	int middle;
	int final;
};

struct stu *root = NULL;

int compare(const void *cp1, const void * cp2)
{
	return strcmp(((struct stu *)cp1)->name,((struct stu *)cp2)->name);
}
void print_node(const void *, VISIT, int);

int main(){
	int num;
	int i = 0;
	printf("How many student : ");
	scanf("%d",&num);
	char *nameptr = (char *)malloc(sizeof(char)* (num*30));
	struct stu *arr = (struct stu *)malloc(sizeof(struct stu) * num);
	struct stu **ref;


	while(scanf("%s %d %d", nameptr, &arr->middle, &arr->final ) !=EOF && i++ < num)
	{
		arr->name = nameptr;

		ref = (struct stu **)tsearch((void *)arr,(void **)&root, compare);
		printf("%s ",(*(struct stu **)ref)->name);
		if(*ref == arr)
			printf("= input\n");
		else
			printf("= equal name\n");
		nameptr += strlen(nameptr)+1;
		arr++;
	}
	twalk((void *) root, print_node);
}

void print_node(const void *arr, VISIT order, int level)
{
	if (order == preorder || order == leaf)
		printf("name = %s, middle = %d, final = %d\n",
		(*(struct stu **)arr)->name,
		(*(struct stu **)arr)->middle,
		(*(struct stu **)arr)->final);
}	
