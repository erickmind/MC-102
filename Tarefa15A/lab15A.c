#include <stdio.h> // Erick Kussumoto do Nascimento 196492
void setarZero(int mat[][200], int colunas, int linhas);
void leMatriz(int mat[][200], int colunas, int linhas);
void imprimeMatriz(int mat[][200], int colunas, int linhas);
void copiaMatriz(int source[][200], int target[][200], int colunas, int linhas);
int qntH(int source[][200], int colunas, int linhas);
int qntZ(int source[][200], int colunas, int linhas);


int main(){
    int m, n, i, a, b, c, humanos, zumbis;
    int mat[200][200], mataux[200][200];
    
    scanf("%d %d %d", &m, &n, &i);
    m = m + 2;
    n = n + 2;
    
    setarZero(mat, m, n);
    
    leMatriz(mat, m, n);
    
    for(c = 0; c <= i; c++){
        for(a = 1; a < m - 1; a++){
            for(b = 1; b < n - 1; b++){
                if(mat[a][b] == 0){
                    humanos = qntH(mat, a, b);
                    if(humanos == 2)
                        mataux[a][b] = 1;
                }
                
                if(mat[a][b] == 1){
                    zumbis = qntZ(mat, a, b);
                    if(zumbis != 0){
                        mataux[a][b] = 2;
                    }else{
                        mataux[a][b] = 1;
                    }
                }
                
                if(mat[a][b] == 2){
                    humanos = qntH(mat, a, b);
                    if(humanos >= 2 || humanos == 0){
                        mataux[a][b] = 0;
                    }else if(humanos == 1){
                        mataux[a][b] = 2;
                    }
                }
            }
        }
        printf("iteracao %d\n", c);
        
        imprimeMatriz(mat, m, n); 
        
        copiaMatriz(mataux, mat, m, n);
    }
}






int qntH(int source[][200], int colunas, int linhas){
    int i, j, humanos;
    humanos = 0;
    for(i = colunas - 1; i <= colunas + 1; i++){
        for(j = linhas - 1; j <= linhas + 1; j++){
            if(i == colunas && j == linhas)
                continue;
            if(source[i][j] == 1){
                humanos++;
            }
        }
    }
    return humanos;
}


int qntZ(int source[][200], int colunas, int linhas){
    int i, j, zumbis;
    zumbis = 0;
    for(i = colunas - 1; i <= colunas + 1; i++){
        for(j = linhas - 1; j <= linhas + 1; j++){
            if(i == colunas && j == linhas)
                continue;
            if(source[i][j] == 2){
                zumbis++;
            }
        }
    }
    return zumbis;
}


void copiaMatriz(int source[][200], int target[][200], int colunas, int linhas){
    int i, j;
    for(i = 0; i < colunas; i++){
        for(j = 0; j < linhas; j++){
            target[i][j] = source[i][j];
        }
    }
}


void setarZero(int mat[][200], int colunas, int linhas){
    int i, j;
    for(i = 0; i < colunas; i++){
        for(j = 0; j < linhas; j++){
            mat[i][j] = 0;
        }
    }
}


void leMatriz(int mat[][200], int colunas, int linhas){
    int i, j;
    for(i = 1; i < colunas - 1; i++){
        for(j = 1; j < linhas - 1; j++){
            scanf("%d", &mat[i][j]);
        }
    }
}


void imprimeMatriz(int mat[][200], int colunas, int linhas){
    int i, j;
    for(i = 1; i < colunas - 1; i++){
        for(j = 1; j < linhas - 1; j++){
            printf("%d", mat[i][j]);
        }
        printf("\n");
    }
}


