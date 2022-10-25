#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <search.h>

struct info{
	char *name;
	int midterm;
	int finals;
};

struct info *root = NULL;

int compare(const void *cp1, const void * cp2)
{
	return strcmp(((struct info *)cp1)->name,((struct info *)cp2)->name);
}

void print_node(const void *, VISIT, int);

int main(){
	int number;
	printf("학생 수를 입력하세요: ");
	scanf("%d",&number);
	char *nameptr = (char *)malloc(sizeof(char)* (number*30));
	struct info *a = (struct info *)malloc(sizeof(struct info) * number);
	struct info **ret;

	for(int i=0; i<number;i++)
	{
		scanf("%s %d %d", nameptr, &a->midterm, &a->finals );
		a->name = nameptr;

		ret = (struct info **)tsearch((void *)a,(void **)&root, compare);
		printf("%s ",(*(struct info **)ret)->name);
		if(*ret == a){
			printf("이(가) 등록되었습니다.\n");
			nameptr += strlen(nameptr)+1;
			a++;
		}
		else
			printf("이(가) 중복됩니다.\n");
		
	}
	twalk((void *) root, print_node);
}

void print_node(const void *a, VISIT order, int level)
{
	if (order == preorder || order == leaf)
		printf("성명: %s, 중간 고사 성적: %d, 기말 고사 성적: %d\n",
		(*(struct info **)a)->name,
		(*(struct info **)a)->midterm,
		(*(struct info **)a)->finals);
}	
