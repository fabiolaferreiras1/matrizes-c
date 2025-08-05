#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, j, x, a[2][3], b[2][3], c[2][3];
	x = 1;
	for(i = 0; i < 2; i++){
		for(j = 0; j < 3; j++){
			printf("Informe o %dº valor da matriz A: \n", x++);
			scanf("%d", &a[i][j]);
		}
	}
	x = 1;
	for(i = 0; i < 2; i++){
		for(j = 0; j < 3; j++){
			printf("Informe o %dº valor da matriz B: \n", x++);
			scanf("%d", &b[i][j]);
		}
	}
	for(i = 0; i < 2; i++){
		for(j = 0; j < 3; j++){
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	printf("O resultado da soma das matrizes A e B é: \n");
	for(i = 0; i < 2; i++){
		for(j = 0; j < 3; j++){
			printf("%d   ", c[i][j]);
		}
		printf("\n");
	}
	return(0);
}