#include <stdio.h>

int funcaoVetor(int v[]){
	int i,j,k,l,z;
	int media;
	int somatorio = 0;
	int controle;
	
	printf("\nCrie o vetor\n");
		for(i=0; i<3;i++){
			printf("Digite um numero: ");
			scanf("%d", &v[i]);
			somatorio = somatorio + v[i];
		}
	
	while(controle != 0){
		
		printf("\nMENU\n1 - Imprimir a soma\n2 - Imprimir a media\n3 - Substituir todos os valores negativos\n4 - Substituir por zero todos os valores repetidos\n0 - Para Sair\n");
		scanf("%d", &controle);
		if(controle == 1){
			printf("O Somatorio é: %d\n", somatorio);
		}else if(controle == 2){
			
			media = somatorio/3;
			printf("A media é: %d\n", media);	
		}else if(controle == 3){
			for(k=0; k<3; k++){
				if(v[k]<0){
					v[k] = 0;
				}
			}
			
		}else if(controle == 4){
			for(l = 0; l<3; l++){
				for(z = l + 1; z<3; z++){
					if(v[l] == v[z]){
						v[l] = 0;
					}
				}
			}
		}
		printf("O vetor atualmente: \n");
		for(j = 0; j<3; j++){
			printf("%d ",v[j]);	
		}
			
	}	
}


int main(){	
	int v[3];
	funcaoVetor(v);
}




