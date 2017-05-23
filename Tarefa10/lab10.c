#include <stdio.h>
int main (){
  int d, dc1, dv1, dc2, dv2, dc3, dv3, dc4, dv4, i, lucro1, lucro2, lucro3, lucro4, aux1, aux2, aux3, aux4;  
  float emp1[15], emp2[15], emp3[15], emp4[15];
  
  scanf("%d", &d); // Dias
  
  for(i=0; i <= d; i++){ // Valores empresa 1
      scanf("%f", &emp1[i]);
  }
  for(i=0; i <= d; i++){ // Valores empresa 2
      scanf("%f", &emp2[i]);
  }
  for(i=0; i <= d; i++){ // Valores empresa 3
      scanf("%f", &emp3[i]);
  }
  for(i=0; i <= d; i++){ // Valores empresa 4
      scanf("%f", &emp4[i]);
  }
  for(dc1=0; dc1 < d; dc1++){
      for(dv1=0; dv1 < d; dv1++){
          for(dc2=0; dc2 < d; dc2++){
              for(dv2=0; dv2 < d; dv2++){
                  for(dc3=0; dc3 < d; dc3++){
                      for(dv3=0; dv3 < d; dv3++){
                          for(dc4=0; dc4 < d; dc4++){
                              for(dv4=0; dv4 < d; dv4++){
                                  if(dc1<dv1){
                                       if(dc2<dv2){
                                           if(dc3<dv3){
                                               if(dc4<dv4){
                                                   if(emp1[dv1]-emp1[dc1] > 0){
                                                       lucro1 = emp1[dv1]-emp1[dc1];    
                                                   } 
                                                   if(emp2[dv2]-emp2[dc2] > 0){
                                                        lucro2 = emp2[dv2]-emp2[dc2]; 
                                                   }
                                                   if(emp3[dv3]-emp3[dc3] > 0){
                                                        lucro3 = emp3[dv3]-emp3[dc3];
                                                   }
                                                   if(emp4[dv4]-emp4[dc4] > 0){
                                                        lucro4 = emp4[dv4]-emp4[dv4];
                                                   }
                                                   if(lucro1 > lucro2 && lucro1 > lucro3 && lucro1 > lucro4){
                                                        aux1++;
                                                   }
                                                   if(lucro2 > lucro1 && lucro2 > lucro3 && lucro2 > lucro4){
                                                        aux2++;
                                                   }
                                                   if(lucro3 > lucro2 && lucro3 > lucro1 && lucro3 > lucro4){
                                                        aux3++;
                                                   }
                                                   if(lucro4 > lucro2 && lucro4 > lucro3 && lucro4 > lucro1){
                                                        aux4++;
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
          }
      }
  }
  if(aux1 > aux2 && aux1 > aux3 && aux1 > aux4){
      printf("empresa 1");
  }
  if(aux2 > aux1 && aux2 > aux3 && aux2 > aux4){
      printf("empresa 2");
  }
  if(aux3 > aux2 && aux3 > aux1 && aux3 > aux4){
      printf("empresa 3");
  }
  if(aux4 > aux2 && aux4 > aux3 && aux4 > aux1){
      printf("empresa 4");
  }

  
  
  
  
  
  
}  