#include<stdio.h> // Erick Kussumoto do Nascimento 196492

void ordenacaoDecrescente(int vet[], int tam){
    int i, j, aux=0;
    for(i=0; i<tam-1; i++){
        for(j=i+1; j<tam; j++){
                if(vet[i]<vet[j]){
                    aux=vet[i];
                    vet[i]=vet[j];
                    vet[j]=aux;
                }
        }
    }
}

void ordenacaoCrescente(int vet[], int tam){
    int i, j, aux=0;
    for(i=0; i<tam-1; i++){
        for(j=i+1; j<tam; j++){
                if(vet[i]>vet[j]){
                    aux=vet[i];
                    vet[i]=vet[j];
                    vet[j]=aux;
                }
        }
    }
}

int buscaBinariaCrescente(int vet[], int tam, int chave){
    int ini = 0, fim = tam - 1, meio;
    while (ini <= fim){
        meio = (ini + fim) / 2;
        printf("%d ", meio);
        if(vet[meio] == chave){
            printf("\n");
            return meio;
        }else if(vet[meio] > chave){
            fim = meio - 1;
        }else{
            ini = meio + 1;
        }
    }
    printf("\n");
    return -1;
}

int buscaBinariaDescrescente(int vet[], int tam, int chave){
    int ini = 0, fim = tam - 1, meio;
    while (ini <= fim){
        meio = (ini + fim) / 2;
        printf("%d ", meio);
        if(vet[meio] == chave){
            printf("\n");
            return meio;
        }else if(vet[meio] < chave){
            fim = meio - 1;
        }else{
            ini = meio + 1;
        }
    }
    printf("\n");
    return -1;
}

int busca(int vet[], int tam, int chave){
    int i;
    for(i = 0; i < tam; i++){
        if(vet[i] == chave)
            return 1;
    }
    return 0;
}

void printvet(int vet[], int tam){
    int j;
    if(tam != 0){
        for(j = 0; j < tam; j++){ 
            printf("%d ", vet[j]);
        }
        printf("\n");
    }
}

int insert(int vet[], int tam, char state, int chave){
    
    if(tam == 150){
        printf("Limite de vagas excedido!\n");
        return tam;
    }
    if(!busca(vet, tam, chave)){
        switch(state){
            case 'u':{
                vet[tam] = chave;
                tam++;
                break;
            }
            case 'c':{
                vet[tam] = chave;
                tam++;
                ordenacaoCrescente(vet, tam);
                break;
            }
            case 'd':{
                vet[tam] = chave;
                tam++;
                ordenacaoDecrescente(vet, tam);
                break;
            }
        }
    }else{
        printf("Aluno ja matriculado na turma!\n");
    }
    return tam;
}

int remover(int vet[], int tam, char state, int chave){
    int aux, j;
    aux = 0;
    if(tam == 0){
        printf("Nao ha alunos cadastrados na turma!\n");
        return tam;
    }
    if(busca(vet, tam , chave)){
        for(j = 0; j < tam; j++){
            if(vet[j] == chave){
                aux = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = aux;
            }
        }
        tam--;
    }else{
        printf("Aluno nao matriculado na turma!\n");
    }
    return tam;
}

int main(){
    int n, m, i, add, pos, RA[150] = {0};
    char com, state = 'u';
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &m);
        RA[i] = m;
    }
    while(scanf("%c", &com) && com != 's'){
        switch(com){
            case 'p':{
                printvet(RA, n);
                break;
            }
            case 'c':{
                ordenacaoCrescente(RA, n);
                state = 'c';
                break;
            }
            case 'd':{
                ordenacaoDecrescente(RA, n);
                state = 'd';
                break;
            }
            case 'i':{
                scanf("%d", &add);
                n = insert(RA, n, state, add);
                break;
            }
            case 'r':{
                scanf("%d", &add);
                n = remover(RA, n, state, add);
                break;
            }
            case 'b':{
                scanf("%d", &add);
                if(state == 'c'){
                    pos = buscaBinariaCrescente(RA, n, add);
                    if(pos != -1){
                        printf("%d esta na posicao: %d\n", add, pos);
                    }else{
                        printf("%d nao esta na lista!\n", add);
                    }
                }
                if(state == 'd'){
                    pos = buscaBinariaDescrescente(RA, n, add);
                    if(pos != -1){
                        printf("%d esta na posicao: %d\n", add, pos);
                    }else{
                        printf("%d nao esta na lista!\n", add);
                    }
                }
                if(state == 'u'){
                    printf("Vetor nao ordenado!\n");
                }
                
            }
            
        }
        
    }
    return 0;
    
}