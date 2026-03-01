#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cadastro{
char nome[50];
char cpf[50];
char profissao[50];
};

int main(){

struct cadastro c[5];
int cont[5];
int maior = 0;
int i, j;
    
for(int i=0;i<5;i++){
    printf("Nome: ");
    fgets(c[i].nome, sizeof(c[i].nome), stdin);
    printf("CPF: ");
    fgets(c[i].cpf, sizeof(c[i].cpf), stdin);
    printf("Profissao: ");
    fgets(c[i].profissao, sizeof(c[i].profissao), stdin);
        
    }
    
    for(i=0;i<5;i++){
        cont[i] = 1;
        for(j=i+1;j<5;j++){
            if(strcmp(c[i].profissao,c[j].profissao) == 0){
                cont[i] = cont[i] + 1;
            }
        }
        if(cont[i]>maior){
            maior = cont[i];
        }
            
    }
    printf("Profissoes que mais se reptem: ");
        for(i=0;i<5;i++){
            if(cont[i] == maior){
                printf("%s(%d pessoas)\n", c[i].profissao, maior);

        }
            
    }
      
return 0;
   
}
