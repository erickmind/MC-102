#include <stdio.h>
int checarV(int linha, int coluna, int mat[][200]);

int main(){
    int m, n, i, ent, x, a, b, aux;
    int mat[200][200];
    int mataux[200][200];
    int vetaux[400] = {};
    scanf("%d %d", &m, &n);
    scanf("%d", &i);
    for(a = 0; a < m + 1; a++){ // Setar toda a matriz para 0 (MATRIZ ESTA COM UM TAMANHO A MAIS, TOMAR CUIDADO COM O PRINT!)
        for(b = 0; b < n + 1; b++){
            mat[a][b] = 0;
        }
    }
    
    for(a = 1; a < m; a++){ // Seta todos os valores de entrada na matriz 
        for(b = 1; b < n; b++){
            scanf("%d", &ent);
            mat[a][b] = ent;
        }
    }
    
    
    for(a = 1; a < m; a++){  
        for(b = 1; b < n; b++){
            
            if(mat[a][b] == 0){
                x = checarV(a, b, mat);
                if(x == 1)
                    mataux[a][b] == 1;
                
            }else if(mat[a][b] == 1){
                
                
            }else if(mat[a][b] == 2){
            
                
                
                
            }
            
            
            
        }
    }
    
    for(a = 1; a < m; a++){
        for(b = 1; b < n; b++){
            printf("%d", mat[a][b]);
        }
        printf("\n");
    }
}


int checarV(int linha, int coluna, int mat[][200]){
    int i, j, x;
    int vet[400] = {};
    x = 0;
    for(i = linha - 1; i <= linha + 1; i++){
        for(j = coluna - 1; j <= coluna + 1; j++){
            if(i = linha && j == coluna){
                break;
            }
            vet[x] = mat[i][j];
            x++;
        }
        
    }
    for(i = 0; i < x - 1; i++){
        for(j = 0; j < x; j++){
            if(vet[i] == 1 && vet[j] == 1)
                return 1;
        }
    }
    return 0;
    
}



