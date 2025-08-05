#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, j, ii = 3, jj = 1, x = 1;
	float a[4][2], b[4][2];
	for(i = 0; i < 4; i++){
		for(j = 0; j < 2; j++){
			printf("Informe o %dº valor da matriz A: \n", x++);
			scanf("%f", &a[i][j]);
			b[ii][jj] = a[i][j];
			jj--;
			if(jj < 0){
				jj = 1;
				ii--;
			}
		}
	}
	printf("\n");
	printf("MATRIZ A: \n");
	for(i = 0; i < 4; i++){
		for(j = 0; j < 2; j++){
			printf("%.1f   ", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("MATRIZ B: \n");
	for(i = 0; i < 4; i++){
		for(j = 0; j < 2; j++){
			printf("%.1f   ", b[i][j]);
		}
		printf("\n");
	}
	return(0);
}