#include <stdio.h> // Erick Kussumoto do Nascimento 196492
#include <string.h>
int main (){
    char st[1001]={};
    char N[8] = "mercurio";
    char NE[5] = "venus";
    char L[5] = "terra";
    char SE[5] = "marte";
    char S[7] = "jupiter";
    char SO[7] = "saturno";
    char O[5] = "urano";
    char NO[6] = "netuno";
    char VERD[5] = "verde";
    char AMA[7] = "amarelo";
    char VERM[8] = "vermelho";
    int i, tamanho;
    
    tamanho = 0;
    fgets(st, 1000, stdin);
    tamanho = strlen(st);
    
    for(i = 0; i < tamanho; i++){ 
        if(st[i] >= 'A' && st[i] <= 'Z'){
            st[i] = st[i] + 32;
        }
    }

    for(i = 0; st[i] != '\0' && st[i] != '\n'; i++){
        if(st[i] == N[0]){
            if(st[i+1] == N[1]){
                if(st[i+2] == N[2]){
                    if(st[i+3] == N[3]){
                        if(st[i+4] == N[4]){
                            if(st[i+5] == N[5]){
                                if(st[i+6] == N[6]){
                                    if(st[i+7] == N[7]){
                                        printf("N - ");
                                        i = i + 9;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        
        if(st[i] == NE[0]){
            if(st[i+1] == NE[1]){
                if(st[i+2] == NE[2]){
                    if(st[i+3] == NE[3]){
                        if(st[i+4] == NE[4]){
                            printf("NE - ");
                            i= i + 6;
                        }
                    }
                }
            }
        }
        
        if(st[i] == L[0]){
            if(st[i+1] == L[1]){
                if(st[i+2] == L[2]){
                    if(st[i+3] == L[3]){
                        if(st[i+4] == L[4]){
                            printf("L - ");
                            i= i + 6;
                        }
                    }
                }
            }
        }
        
        if(st[i] == SE[0]){
            if(st[i+1] == SE[1]){
                if(st[i+2] == SE[2]){
                    if(st[i+3] == SE[3]){
                        if(st[i+4] == SE[4]){
                            printf("SE - ");
                            i= i + 6;
                        }
                    }
                }
            }
        }
        
        if(st[i] == S[0]){
            if(st[i+1] == S[1]){
                if(st[i+2] == S[2]){
                    if(st[i+3] == S[3]){
                        if(st[i+4] == S[4]){
                            if(st[i+5] == S[5]){
                                if(st[i+6] == S[6]){
                                    printf("S - ");
                                    i= i + 8;
                                }
                            }
                        }
                    }
                }
            }
        }
        
        if(st[i] == SO[0]){
            if(st[i+1] == SO[1]){
                if(st[i+2] == SO[2]){
                    if(st[i+3] == SO[3]){
                        if(st[i+4] == SO[4]){
                            if(st[i+5] == SO[5]){
                                if(st[i+6] == SO[6]){
                                    printf("SO - ");
                                    i= i + 8;
                                }
                            }
                        }
                    }
                }
            }
        }
        
        if(st[i] == O[0]){
            if(st[i+1] == O[1]){
                if(st[i+2] == O[2]){
                    if(st[i+3] == O[3]){
                        if(st[i+4] == O[4]){
                            printf("O - ");
                            i= i + 6;
                        }
                    }
                }
            }
        }
        
        if(st[i] == NO[0]){
            if(st[i+1] == NO[1]){
                if(st[i+2] == NO[2]){
                    if(st[i+3] == NO[3]){
                        if(st[i+4] == NO[4]){
                            if(st[i+5] == NO[5]){
                                printf("NO - ");
                                i= i + 6;
                            }
                        }
                    }
                }
            }
        }
        
        if(st[i] == VERD[0]){
            if(st[i+1] == VERD[1]){
                if(st[i+2] == VERD[2]){
                    if(st[i+3] == VERD[3]){
                        if(st[i+4] == VERD[4]){
                            printf("30\n");
                            i= i + 5;
                        }
                    }
                }
            }
        }
        
        if(st[i] == AMA[0]){
            if(st[i+1] == AMA[1]){
                if(st[i+2] == AMA[2]){
                    if(st[i+3] == AMA[3]){
                        if(st[i+4] == AMA[4]){
                            if(st[i+5] == AMA[5]){
                                if(st[i+6] == AMA[6]){
                                    printf("45\n");
                                    i= i + 8;
                                }
                            }
                        }
                    }
                }
            }
        }
        
        if(st[i] == VERM[0]){
            if(st[i+1] == VERM[1]){
                if(st[i+2] == VERM[2]){
                    if(st[i+3] == VERM[3]){
                        if(st[i+4] == VERM[4]){
                            if(st[i+5] == VERM[5]){
                                if(st[i+6] == VERM[6]){
                                    if(st[i+7] == VERM[7]){
                                        printf("60\n");
                                        i = i + 8;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        
    }
    
    
}
