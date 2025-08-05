#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, j;
	float media, mat[5][3];
	for(i = 0; i < 5; i++){
		printf("\n");
		printf("Aluno %d: \n", i + 1);
		for(j = 0; j < 3; j++){
			printf("Informe a %dª nota: \n", j + 1);
			scanf("%f", &mat[i][j]);
		}
	}
	printf("\n");
	printf("MÉDIAS DOS ALUNOS: \n");
	printf("\n");
	for(i = 0; i < 5; i++){
		media = 0;
		for(j = 0; j < 3; j++){
			media += mat[i][j];
		}
		media /= 3;
		printf("Aluno %d: Média = %.1f\n", i + 1, media);
	}
	return(0);
}