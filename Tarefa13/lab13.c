/* Laboratorio 15 - Conjuntos
 * Nome: Erick Kussumoto do Nascimento
 * RA:196492
 */

#include <stdio.h>

/* Funcao: pertence
 *
 * Parametros:
 *   conj: vetor contendo o conjunto de entrada
 *    tam: tamanho do conjunto
 *  letra: elemento a ser verificado pertinencia
 *
 * Retorno:
 *   1 se letra pertence a conj e 0 caso contrario
 */
int pertence(char conj[], int tam, char letra){
    int i;
    for(i = 0; i < tam; i++){
        if(conj[i] == letra){
            return 1;
        }
    }
  /* Implementar a funcao e trocar o valor de retorno */
  return 0;
}

/* Funcao: contido
 *
 * Parametros:
 *   conj1: vetor contendo um conjunto de entrada
 *   conj2: vetor contendo um conjunto de entrada
 *    tam1: tamanho do conjunto conj1
 *    tam2: tamanho do conjunto conj2
 *
 * Retorno:
 *   1 se conj1 esta contido em conj2 e 0 caso contrario
 */
int contido(char conj1[], char conj2[], int tam1, int tam2){
    int i, j, aux;
    aux = 0;
    for(i = 0; i < tam1; i++){
        for(j = 0; j < tam2; j++){
            if(conj1[i] == conj2[j]){
                aux++;
            }
        }
    }
    if(aux == tam1){
        return 1;
    }
    /* Implementar a funcao e trocar o valor de retorno */
  return 0;
}

/* Funcoes: adicao e subtracao
 *
 * Parametros:
 *   conj: vetor contendo o conjunto que tera incluso ou removido o elemento
 *    tam: tamanho do conjunto
 *  letra: elemento a ser adicionado ou removido
 *
 * Retorno:
 *   tamanho do conjunto apos a operacao.
 */
int adicao(char conj[], int tam, char letra){
    int i;
    for(i = 0; i < tam; i++){
        if(letra == conj[i]){
            return tam;
        }
    }
    conj[tam] = letra;
    /* Implementar a funcao e trocar o valor de retorno */
    return tam + 1;
}

int subtracao(char conj[], int tam, char letra){
    int i, j;
    for(i = 0; i < tam; i++){
        if(letra == conj[i]){
            tam--;
            for(j = i; j < tam; j++){
                conj[j] = conj[j+1];
            }
        }
    }
    /* Implementar a funcao e trocar o valor de retorno */
  return tam;
}

/* Funcoes: uniao, intersecao e diferenca
 *
 * Parametros:
 *   conjRes: vetor contendo o conjunto de saida/resultado da operacao
 *     conj1: vetor contendo o conjunto de entrada do primeiro operando
 *     conj2: vetor contendo o conjunto de entrada do segundo operando
 *      tam1: tamanho do conjunto conj1
 *      tam2: tamanho do conjunto conj2
 *
 * Retorno:
 *   tamanho do conjunto de saida conjRes.
 */
int uniao(char destRes[], char conj1[], char conj2[], int tam1, int tam2){
    int i, j, tam =0;
    for(i = 0; i < tam1; i++){
        tam = adicao(destRes, tam, conj1[i]);
    }
    for(j =0; j < tam2; j++) {
        tam = adicao(destRes, tam, conj2[j]);  
    }
    /* Implementar a funcao e trocar o valor de retorno */
    return tam;
}

int intersecao(char destRes[], char conj1[], char conj2[], int tam1, int tam2){
    int i, k;
    k=0;
    for(i = 0; i < tam2; i++){
        if(pertence(conj1, tam1, conj2[i])){
            destRes[k] = conj2[i];
            k++;
        }
    }
    /* Implementar a funcao e trocar o valor de retorno */
  return k;
}

int diferenca(char destRes[], char conj1[], char conj2[], int tam1, int tam2){
    int i, k;
    k = 0;
    for(i = 0;  i < tam1; i++){
        if(!pertence(conj2, tam2, conj1[i])){
            destRes[k] = conj1[i];
            k++;   
        }
    }
    /* Implementar a funcao e trocar o valor de retorno */
  return k; 
}

/* Funcao: complemento
 * Guarda em conjRes o resultado da operação U-conj, onde U é o conjunto
 * de todas as letras minusculas do alfabeto ingles
 *
 * Parametros:
 *   conjRes: vetor contendo o conjunto de saida/resultado da operacao
 *      conj: vetor contendo o conjunto de entrada do primeiro operando
 *       tam: tamanho do conjunto conj
 *
 * Retorno:
 *   tamanho do conjunto de saida conjRes.
 */
int complemento(char conjRes[], char conj[], int tam){
    char Uni[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int i, k;
    k = 0;
    for(i = 0;  i < 26; i++){
        if(!pertence(conj, tam, Uni[i])){
            conjRes[k] = Uni[i];
            k++;
        }
    }
    /* Implementar a funcao e trocar o valor de retorno */
  return k;
}
