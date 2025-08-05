#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, j, x = 1, mat[3][3];
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("Digite o %dº número: \n", x++);
			scanf("%d", &mat[i][j]);
		}
	}
	printf("MATRIZ INVERSA: \n");
	for(i = 2; i >= 0; i--){
		for(j = 2; j >= 0; j--){
			printf("%d  ", mat[i][j]);
		}
		printf("\n");
	}
	return(0);
}