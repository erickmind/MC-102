//Erick Kussumoto do Nascimento 196492
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void cinza(FILE *arqin, FILE *arqout);
void esticar(FILE *arqin, FILE *arqout);
void normalizar(FILE *arqin, FILE *arqout);

int main(int argc, char **argv) {
    int x;
    x = 0;
    
    if (argc != 3) {
        fprintf(stderr, "Argumentos invalidos. Use:\n");
        fprintf(stderr, "./lab18 <arqEntrada> <arqSaida>\n");
        fprintf(stderr, "Usado:");
        for (int i=0; i<argc; i++) {
        fprintf(stderr, " %s", argv[i]);
        }
        fprintf(stderr, "\n");
        return 1;
    }
  
  
    char efeito[20];
    char *arqEntrada = argv[1];
    char *arqSaida = argv[2];
    scanf("%s", efeito);
    
    FILE *arqin;
    FILE *arqout;
    
    arqin = fopen(arqEntrada, "r");
    arqout = fopen(arqSaida, "w");
    
    
    x = strcmp(efeito, "cinza");
    if(x == 0){
        cinza(arqin, arqout);
    }
    
    x = strcmp(efeito, "esticar");
    if(x == 0){
        esticar(arqin, arqout);
    }
    
    x = strcmp(efeito, "normalizar");
    if(x == 0){
        normalizar(arqin, arqout);
    }
    
    fclose(arqin);
    fclose(arqout);
    return 0;
}




void cinza(FILE *arqin, FILE *arqout){
    int i, j, linhas, colunas;
    
    fscanf(arqin, "P3 %d %d 255", &colunas, &linhas);
    
    int matR[colunas][linhas];
    int matG[colunas][linhas];
    int matB[colunas][linhas];
    int novaR[colunas][linhas];
    int novaG[colunas][linhas];
    int novaB[colunas][linhas];
    
    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            fscanf(arqin, "%d", &matR[j][i]);
            fscanf(arqin, "%d", &matG[j][i]);
            fscanf(arqin, "%d", &matB[j][i]);
        }
    }
    
    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            novaR[j][i] = floor((matR[j][i] + matG[j][i] + matB[j][i])/3);
            novaG[j][i] = novaR[j][i];
            novaB[j][i] = novaR[j][i];
        }
    }
    
    fprintf(arqout, "P3\n%d %d\n255\n", colunas, linhas);
    
    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            fprintf(arqout, "%d ", novaR[j][i]);
            fprintf(arqout, "%d ", novaG[j][i]);
            fprintf(arqout, "%d ", novaB[j][i]);
        }
        fprintf(arqout, "\n");
    }
    
    return;
}


void esticar(FILE *arqin, FILE *arqout){
    int i, j, Rmax, Gmax, Bmax, Rmin, Gmin, Bmin, linhas, colunas;

    fscanf(arqin, "P3 %d %d 255", &colunas, &linhas);
    
    int matR[colunas][linhas];
    int matG[colunas][linhas];
    int matB[colunas][linhas];
    int novaR[colunas][linhas];
    int novaG[colunas][linhas];
    int novaB[colunas][linhas];
    
    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            fscanf(arqin, "%d", &matR[j][i]);
            fscanf(arqin, "%d", &matG[j][i]);
            fscanf(arqin, "%d", &matB[j][i]);
        }
    }
    
    Rmax = matR[0][0];
    Gmax = matG[0][0];
    Bmax = matB[0][0];
    Rmin = matR[0][0];
    Gmin = matG[0][0];
    Bmin = matB[0][0];
    
    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            if(Rmax < matR[j][i]){
                Rmax = matR[j][i];
            }
            if(Rmin > matR[j][i]){
                Rmin = matR[j][i];
            }
            if(Gmax < matG[j][i]){
                Gmax = matG[j][i];
            }
            if(Gmin > matG[j][i]){
                Gmin = matG[j][i];
            }
            if(Bmax < matB[j][i]){
                Bmax = matB[j][i];
            }
            if(Bmin > matB[j][i]){
                Bmin = matB[j][i];
            }
        }
    }
    
    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            if(Rmax != Rmin){
                novaR[j][i] = floor(((matR[j][i] - Rmin) * 255)/(Rmax - Rmin));
            }else{
                novaR[j][i] = matR[i][j];
            }
            if(Gmax != Gmin){
                novaG[j][i] = floor(((matG[j][i] - Gmin) * 255)/(Gmax - Gmin));
            }else{
                novaG[j][i] = matG[i][j];
            }
            if(Bmax != Bmin){
                novaB[j][i] = floor(((matB[j][i] - Bmin) * 255)/(Bmax - Bmin));
            }else{
                novaB[j][i] = matB[i][j];
            }
        }
    }
    
    fprintf(arqout, "P3\n%d %d\n255\n", colunas, linhas);
    
    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            fprintf(arqout, "%d ", novaR[j][i]);
            fprintf(arqout, "%d ", novaG[j][i]);
            fprintf(arqout, "%d ", novaB[j][i]);
        }
        fprintf(arqout, "\n");
    }
    
    return;
    
    
}


void normalizar(FILE *arqin, FILE *arqout){
    int i, j, linhas, colunas;
    
    fscanf(arqin, "P3 %d %d 255", &colunas, &linhas);
    
    int matR[colunas][linhas];
    int matG[colunas][linhas];
    int matB[colunas][linhas];
    int novaR[colunas][linhas];
    int novaG[colunas][linhas];
    int novaB[colunas][linhas];
    
    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            fscanf(arqin, "%d", &matR[j][i]);
            fscanf(arqin, "%d", &matG[j][i]);
            fscanf(arqin, "%d", &matB[j][i]);
        }
    }
    
    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            if((matR[j][i] + matG[j][i] + matB[j][i]) != 0){
                novaR[j][i] = floor(matR[j][i] * 255 / (matR[j][i] + matG[j][i] + matB[j][i]));
            }else{
                novaR[j][i] = matR[j][i];
            }
            if((matR[j][i] + matG[j][i] + matB[j][i]) != 0){
                novaG[j][i] = floor(matG[j][i] * 255 / (matR[j][i] + matG[j][i] + matB[j][i]));
            }else{
                novaG[j][i] = matG[j][i];
            }
            if((matR[j][i] + matG[j][i] + matB[j][i]) != 0){
                novaB[j][i] = floor(matB[j][i] * 255 / (matR[j][i] + matG[j][i] + matB[j][i]));
            }else{
                novaB[j][i] = matB[j][i];
            }
        }
    }
    
    fprintf(arqout, "P3\n%d %d\n255\n", colunas, linhas);
    
    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            fprintf(arqout, "%d ", novaR[j][i]);
            fprintf(arqout, "%d ", novaG[j][i]);
            fprintf(arqout, "%d ", novaB[j][i]);
        }
        fprintf(arqout, "\n");
    }
    
    return;
}













