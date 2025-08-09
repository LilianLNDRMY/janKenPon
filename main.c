#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define PIERRE 1
#define FEUILLE 2
#define CISEAUX 3

// 1 = Pierre  2 = Feuille  3 = Ciseaux           Feuille > Pierre  > Ciseaux
//                                                Ciseaux > Feuille > Pierre
//                                                Pierre  > Ciseaux > Feuille


void quiGagne(int joueur, int ia){
    printf("===================================\n");
    printf("Vous        IA\n");

    if(joueur == PIERRE){
        switch (ia) {

            case PIERRE:
                printf("PIERRE vs PIERRE\n");
                printf("Égalité !\n");
                break;
            
            case FEUILLE:
                printf("PIERRE vs FEUILLE\n");
                printf("Dommage vous avez perdu...\n");
                break;
            
            case CISEAUX:
                printf("PIERRE vs CISEAUX\n");
                printf("Bravo ! Vous avez gagné !\n");
                break;
        }
    }
    if(joueur == FEUILLE){
        switch (ia) {

            case PIERRE:
                printf("FEUILLE vs PIERRE\n");
                printf("Bravo ! Vous avez gagné !\n");
                break;
            
            case FEUILLE:
                printf("FEUILLE vs FEUILLE\n");
                printf("Égalité !\n");
                break;
            
            case CISEAUX:
                printf("FEUILLE vs CISEAUX\n");
                printf("Dommage vous avez perdu...\n");
                break;
        }

    }
    if(joueur == CISEAUX){
        switch (ia) {

            case PIERRE:
                printf("CISEAUX vs PIERRE\n");
                printf("Dommage vous avez perdu...\n");
                break;
            
            case FEUILLE:
                printf("CISEAUX vs FEUILLE\n");
                printf("Bravo ! Vous avez gagné !\n");
                break;
            
            case CISEAUX:
                printf("CISEAUX vs CISEAUX\n");
                printf("Égalité !\n");
                break;

        }
    }
    sleep(3);
}


void lancerJeu(void){

    srand(time(NULL));                  
    int choixIA = rand() % 3+1 ;      
    int choixDuJoueur = 0;
    while(true){
        printf("===================================\n");
        printf("Choix : \n");
        printf("1.Pierre\n2.Feuille\n3.Ciseaux\n");
        scanf("%d", &choixDuJoueur);

        if (choixDuJoueur == PIERRE || choixDuJoueur == FEUILLE || choixDuJoueur == CISEAUX){

            printf("\n===JAN===\n");
            sleep(1);
            printf("===KEN===\n");
            sleep(1);
            printf("===PON===\n\n");
            sleep(1);

            quiGagne(choixDuJoueur, choixIA);
            break;
        }
        else {
            printf("Veuillez entrer un choix valide !\n");
        }  
    }  
}


int main(){
    printf("\nBonjour bienvenue dans Pierre Feuille Cisaux !\n");
    while(true){
        int choix;
        printf("===================================\n");
        printf("1. Lancer le jeu\n2. Quitter le jeu\n");
        printf("===================================\n");
        scanf("%d", &choix);
        switch (choix) {
            
            case 1 :
                lancerJeu();
                break;

            case 2 :
                printf("Merci d'avoir joué, À bientôt !\n");
                exit(0);

            default :
                printf("Ce n'est pas une option valide !\n");
                
        
        }

    }
    return 0;
}