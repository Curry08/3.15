#include <stdio.h>

int main(){
    float przb,sco;
    char stato;

    printf("Inserisci il tuo stato pensionato [P], studenti [S], disoccupato [D]: \n");
    scanf("%c",&stato);
    printf("Inserisci il prezzo del biglietto: ");
    scanf("%f",&przb);

    if(stato=='P'){
        sco=przb*10/100;
    }
    else if(stato=='S'){
        sco=przb*15/100;
    }
    else if(stato=='D'){
        sco=przb*25/100;
    }
    printf("Il prezzo del biglietto è di %.2f euro",przb-sco);
    return 0;
}
