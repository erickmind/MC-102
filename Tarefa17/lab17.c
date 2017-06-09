//Erick Kussumoto do Nascimento 196492
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  int ra, telefone;
  char nome[100];
} Aluno;

typedef struct {
  int armazenado;
  int capacidade;
  Aluno *alunos;
} Base;

/* Funcao: criar_base
 *
 * Inicializa a base ja com a capacidade.
 *
 * Parametros:
 *   base: ponteiro para a base
 *   n: quantidade maxima de alunos
 */
void criar_base(Base *base, int n) {
    (*base).alunos = malloc (n*sizeof(int));
    (*base).capacidade = n;
    (*base).armazenado = 0;
    printf("Base criada.\n");
  
    return;
}

/* Funcao: buscar
 *
 * Parametros:
 *   base: ponteiro para a base
 *   ra: numero do RA
 *
 * Retorno:
 *   Indice do registro com RA no vetor de alunos
 *   -1 caso contrario.
 */
int buscar(Base *base, int ra) {
    int i;
    
    for(i = 0; i <= (*base).armazenado; i++){  
        if((*base).alunos[i].ra == ra){
            return i;
        }
    }
    return -1;
}

/* Funcao: imprimir
 *
 * Parametros:
 *   base: ponteiro para a base
 *   ra: numero do RA
 */
void imprimir(Base *base, int ra) {
    int x;
    x = buscar(base, ra);
    if(x != (-1)){
        printf("%d - %d - %s\n", (*base).alunos[x].ra, (*base).alunos[x].telefone, (*base).alunos[x].nome);
    }else{
        printf("Aluno %d nao encontrado.\n", ra);
    }
    return;
}

/* Funcoes: adicionar
 *
 * Inclui um registro sem permitir RAs duplicados.
 * O quantidade de alunos deve ser atualizada.
 *
 * Parametros:
 *   base: ponteiro para a base
 *   ra: numero do RA
 *   telefone: numero do telefone
 *   nome: string com o nome
 */
void adicionar(Base *base, int ra, int telefone, char *nome) {
    int x;
    x = buscar(base, ra);
    if(x != (-1)){
        (*base).alunos[x].ra = ra;
        (*base).alunos[x].telefone = telefone;
        strcpy((*base).alunos[x].nome, nome);
        printf("Alterado: %d - %d - %s\n", (*base).alunos[x].ra, (*base).alunos[x].telefone, (*base).alunos[x].nome);
    }else{
        if((*base).capacidade == (*base).armazenado){
            printf("Erro: base cheia.\n");
        }else{
            (*base).alunos[((*base).armazenado) + 1].ra = ra;
            (*base).alunos[((*base).armazenado) + 1].telefone = telefone;
            strcpy((*base).alunos[((*base).armazenado) + 1].nome, nome);
            (*base).armazenado = ((*base).armazenado) + 1;
            printf("Adicionado: %d - %d - %s\n", (*base).alunos[(*base).armazenado].ra, (*base).alunos[(*base).armazenado].telefone, (*base).alunos[(*base).armazenado].nome);
        }
    }
    
    return;
}

/* Funcoes: remover
 *
 * Remove um registro se o ra estiver presente.
 * O quantidade de registro deve ser atualizada.
 *
 * Parametros:
 *   base: ponteiro para a base
 *   ra: numero do RA
 */
void remover(Base *base, int ra) {
    int i, x;
    x = buscar(base, ra);
    if(x != (-1)){
        (*base).armazenado = ((*base).armazenado) - 1;
        for(i = x; i <= (*base).armazenado; i++){
            (*base).alunos[i] = (*base).alunos[i + 1];   
        }
        printf("Aluno %d removido.\n", ra);
    
    }else{
        printf("Aluno %d nao encontrado.\n", ra);
    }
    
    return;
}

/* Funcao: liberar_base
 *
 * Libera a memoria de todos alunos da base.
 * Deve deixar a base com capacidade e quantidade armazenada igual a zero
 * e o ponteiro para alunos igual a NULL.
 *
 * Parametros:
 *   base: ponteiro para a base
 */
void liberar_base(Base *base) {
    (*base).alunos = NULL;
    (*base).capacidade = 0;
    (*base).armazenado = 0;
    return;
}
