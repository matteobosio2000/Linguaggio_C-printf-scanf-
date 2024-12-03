#include <stdio.h>

int main(){


int primo_numero;
int secondo_numero;
int moltiplicazione;
float media;



int valid;
int valid2;


do {    printf("Inserire il primo valore numerico intero: ");
        valid = scanf("%d", &primo_numero); 

        if (valid != 1) {
            printf("Errore: Il valore inserito non è un intero. Riprova.\n");

            while (getchar() != '\n');
        }
    } while (valid != 1); 


do {    printf("Inserire il secondo valore numerico intero: ");
        valid2 = scanf("%d", &secondo_numero);                          
        
        if (valid2 != 1) {
            printf("Errore: Il valore inserito non è un intero. Riprova.\n");
            
            while (getchar() != '\n');
        }
    } while (valid2 != 1);   


moltiplicazione = primo_numero*secondo_numero;
media= (primo_numero+secondo_numero)/2.0 ;



printf("la moltiplicazione tra i numeri è  %d \n",moltiplicazione);
printf("la media tra i numeri è:  %.2f \n",media);

return 0; 

}

