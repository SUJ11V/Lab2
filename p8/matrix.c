#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x, y;
	int **a1, **a2;
	
	printf("숫자 두 개를 입력하세요: ");
	scanf("%d %d", &x, &y);

	a1 = (int **)malloc(sizeof(int *) * x);
	a2 = (int **)malloc(sizeof(int *) * x);

	for(int i=0; i < x; i++){
		a1[i] = (int *)malloc(sizeof(int *) * y);
		a2[i] = (int *)malloc(sizeof(int *) * y);
	}

	printf("첫 행렬에 넣을 숫자를 입력하세요\n");
	for(int i=0; i<x; i++){
		for(int j=0; j<y; j++){
			printf("a1[%d][%d] : ", i,j);
			scanf("%d",&a1[i][j]);
		}
	}
	
	printf("두 번째 행렬에 넣을 숫자를 입력하세요\n");
	for(int i=0; i<x; i++){
		for(int j=0; j<y; j++){
			printf("a2[%d][%d] : ", i,j);
			scanf("%d",&a2[i][j]);
		}
	}
	
	printf("첫 번째 행렬 + 두 번째 행렬\n");

	for(int i=0; i<x; i++){
		for(int j=0; j<y; j++){
			printf("%d ", a1[i][j] + a2[i][j]);	
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
