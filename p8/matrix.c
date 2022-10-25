#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x, y;
	int **a1, **a2;
	int result;
	
	printf("숫자 두 개를 입력하세요: ");
	scanf("%d %d", &x, &y);

	a1 = (int **)malloc(sizeof(int *) *x);
	a2 = (int **)malloc(sizeof(int *) *x);

	for(int i=0; i < x; i++){
		a1[i] = (int *)malloc(sizeof(int *) *y);
		a2[i] = (int *)malloc(sizeof(int *) *y);
	}

	printf("첫 행렬에 넣을 숫자를 입력하세요\n");
	for(int i=0; i<x; i++){
		for(int k=0; k<y; k++){
			printf("첫 번째 행렬[%d][%d]: ", i,k);
			scanf("%d",&a1[i][k]);
		}
	}
	
	printf("두 번째 행렬에 넣을 숫자를 입력하세요\n");
	for(int i=0; i<x; i++){
		for(int k=0; k<y; k++){
			printf("두 번째 행렬[%d][%d]: ", i,k);
			scanf("%d",&a2[i][k]);
		}
	}
	
	printf("결과 행렬\n");

	for(int i=0; i<x; i++){
		for(int k=0; k<y; k++){
			result=a1[i][k] + a2[i][k];
			printf("%d ",result);	
		}
		printf("\n");
	}

	for(int i=0; i<x; i++){
		free(a1[i]);
		free(a2[i]);
	}
	
	free(a1);
	free(a2);

}
