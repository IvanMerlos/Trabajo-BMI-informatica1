/******************************************************************************
Realizar un programa en lenguaje C que solicite al usuario el ingreso de peso y altura y
devuelva dicho índice y una tabla de referencia.
*******************************************************************************/
#include <stdio.h>
float peso, altura,resultado;

int main()
{
    printf("Ingrese la Altura (m): ");
    scanf("%f",&altura);
    printf("Ingrese el Peso (Kg): ");
    scanf("%f",&peso);
    
    while(altura<0 || peso<0){
     printf("ERROR:Ingrese numeros *POSITIVOS*\n");
        
     printf("Ingrese la Altura (m): ");
    scanf("%f",&altura);
    printf("Ingrese el Peso (Kg): ");
    scanf("%f",&peso);
    }
    
    resultado = peso/(altura*altura);
    
    printf("Su índice de masa corporal es: %.2f \n",resultado);
     printf("\n");
    printf("|IMC                |Nivel de peso\n");
    printf("|Por debajo de 18.5 |Bajo peso\n");
    printf("|18.5 – 24.9        |Normal\n");
    printf("|25.0 – 29.9        |Sobrepeso\n");
    printf("|30.0 o más         |Obesidad\n");
printf("\n");
if(resultado>=18.5 || resultado<=24.9){
 printf("Tiene un peso normal\n");
 
}
else if(resultado>=25.0 || resultado<=29.9){
 printf("Tiene un Sobrepeso\n");
 
}
else if(resultado>=30 ){
 printf("Tiene Obesidad\n");
 
}
else if(resultado<=18.5){
 printf("Tiene bajo peso\n");
 
}
    
    
    return 0;
}
