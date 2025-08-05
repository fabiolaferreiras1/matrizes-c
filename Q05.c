#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, j, n, m, x = 1;
	printf("Informe a quantidade de linhas para a matriz: \n");
	scanf("%d", &n);
	printf("Informe a quantidade de colunas para a matriz: \n");
	scanf("%d", &m);
	int a[n][m];
	int b[n][m];
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			printf("Informe o %dº número para a matriz: \n", x++);
			scanf("%d", &a[i][j]);
		}
	}
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			b[i][j] = a[i][j] * 3;
		}
	}
	printf("\n");
	printf("MATRIZ A: \n");
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			printf("%d   ", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("MATRIZ B: \n");
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			printf("%d   ", b[i][j]);
		}
		printf("\n");
	}
	return(0);
}