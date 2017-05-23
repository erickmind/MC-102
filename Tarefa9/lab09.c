#include <stdio.h> // Erick Kussumoto do Nascimento 196492
int main(){
    int i, j, k , l, m, n, o, p;
    int vet1[30]={}, vet2[30]={}, vetaux1[30]={}, vetaux2[30]={},  vetfinal[30]={};
    char a, b, c;
    i=0;
    l=0;
    do{//Vetor 1
        scanf("%c", &a);
        if(a == '\n'){
            break;
        }
        vet1[i] = a - '0';
        i++;
    }while(a!='\n' && i!= 0);
    for(j = 30 - i, k = 0; j <= 29; j++, k++){
        vetaux1[j] = vet1[k];
        vet1[k] = 0;
    }// Vetor 1
    
    scanf("%c\n", &b); // + ou -
    
    do{ // Vetor 2
        scanf("%c", &c);
        if(c == '\n'){
            break;
        }
        vet2[l] = c - '0';
        l++;
    }while(c!='\n' && l!= 0);
    for(m = 30 - l, n = 0; m <= 29; m++, n++){
        vetaux2[m] = vet2[n];
        vet2[n] = 0;
    }// Vetor 2
    
    for(p = 0; p <=29; p++){
        printf("%d", vetaux1[p]);
    }
    printf("\n");
    for(p = 0; p <=29; p++){
        printf("%d", vetaux2[p]);
    }
    printf("\n");
        
    if(b == '+'){ // Soma
        for(o = 29; o >= 0; o--){
            if(vetaux1[o] + vetaux2[o] > 10){
                vetfinal[o] = vetaux1[o] + vetaux2[o] - 10;
                vetaux1[o-1]++;
            }else if(vetaux1[o] + vetaux2[o] == 10){
                vetfinal[o] == 0;
                vetaux1[o - 1]++;
            }else{
                vetfinal[o] = vetaux1[o] + vetaux2[o];
            }
        }
        if(vetaux1[0] + vetaux2[0] >= 10){
            printf("overflow");
        }else{
            for(p = 0, k = 0; p <=29, vetfinal[p] == 0; p++){
                k++;
            }
            for(p = 0 + k; p <= 29; p++){
                printf("%d", vetfinal[p]);
            }
        }
        printf("\n");
    // Soma
    }else if(b == '-'){//Subtracao
        for(p = 0; p <= 29 && vetaux1[p] == vetaux2[p]; p++){
            if(p== 29){
                printf("0\n");
                return 0;
            }
        }
        for(o = 0; o <= 29; o++){
            if(vetaux1[o] < vetaux2[o]){
                for(p = 29; p >= 0; p--){
                    if(vetaux2[p] >= vetaux1[p]){
                        vetfinal[p] = vetaux2[p] - vetaux1[p];
                    }else if(vetaux2[p] < vetaux1[p]){
                        vetfinal[p] = ((10 + vetaux2[p]) - vetaux1[p]);
                        vetaux2[p-1]--;
                    }
                    if(vetfinal[p + 1] < 0){
                        vetfinal[p + 1] = vetfinal[p+1] * (-1);
                    }
                }
            printf("-");
            break;
            }else if(vetaux1[o] > vetaux2[o]){
                for(p = 29; p >= 0; p--){
                    if(vetaux1[p] >= vetaux2[p]){
                        vetfinal[p] = vetaux1[p] - vetaux2[p];
                    }else if(vetaux1[p] < vetaux2[p]){
                        vetfinal[p] = (10 + vetaux1[p]) - vetaux2[p];
                        vetaux1[p-1]--;
                    }   
                }
            break;
            }
        }
            
        for(p = 0, k = 0; p <=29, vetfinal[p] == 0; p++){
            k++;
        }
        for(p = 0 + k; p <= 29; p++){
            printf("%d", vetfinal[p]);
        }
        printf("\n");
    }//Subtracao
    
}
 
