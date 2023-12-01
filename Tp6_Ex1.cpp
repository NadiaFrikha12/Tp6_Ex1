#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

int main(){
	
	//Saisir, en utilisant un adressage indirect, une lettre alphabétique (se servir d’une variable 
	//identifiee par l et d'un pointeur p).
	
	char l ; //declaration d'une variable pour stocker la lettre 
	char* p; //declaration d'un pointeur sur char 
	p=&l; // Initialisation du pointeur pour qu'il pointe vers la variable l
	
	do{
		printf("donner un caractere:");
		scanf("%c",p);	
	}while (isalpha(*p)==0);
	
	
	//Saisir une chaine de caractères non vide (se servir d’une variable identifiée par ch1).
	char ch1[10]; //declaration de la chaine ch1
	do{
		printf("donner une chaine:");
		gets(ch1);	
	}while (strlen(ch1)==0);
	
	//Vérifier, en utilisant la technique des pointeurs, si l existe ou non dans ch1 et si oui
	//afficher la position de la première occurrence de l dans ch1 ainsi que la position de sa
	//dernière occurrence. La solution ne doit pas utiliser les fonctions prédéfinies du langage
	//C mais doit simuler le fonctionnement des fonctions strchr et strrchr.
	
	char* pch=ch1;
	int premiere_occurrence = -1 ;
	int derniere_occurrence = -1 ;
	int occurrence_actuelle = 0 ;
	
	while(*pch !='\0'){ //parcourir la chaine
		if (*pch == *p){
			//si c'est la premiere position on enregistre la position
			if (premiere_occurrence == -1){
				premiere_occurrence = occurrence_actuelle ;
			}
		//mettre à jour la derniere occurrence
		derniere_occurrence = occurrence_actuelle;
		}
		pch++ ;
		occurrence_actuelle++ ;
	}
	
	//affichage
	printf("la position de la premiere occurence est: %d",premiere_occurrence);
	printf("\nla position de la derniere occurence est: %d",derniere_occurrence);
	
	return 0;
}
