//-----------------------------------------------------------------------------------//
// Nom du projet 		: 
// Nom du fichier 		: 
// Date de création 	: xx.xx.2016
// Date de modification : 28.09.2021
//
// Auteur 				: CHR (Christian Huber)
//                        Philou (Ph. Bovey)
//
// Version 				: 0.3
//
// Description          : Voir donnee exercice 4 
//
//
// Remarques :            lien pour la table ASCII :
// 						  -> http://www.asciitable.com/
// 						  
//----------------------------------------------------------------------------------//

//-- déclaration des librairies --// 
#include <stdio.h>	// pour usage printf
 
int main(void)
{
	// Déclaration cas A
	unsigned short A1 = 400;
	unsigned short A2 = 500;
	unsigned long ResA1 = 0;
	unsigned short ResA2 = 0;

	// Déclaration cas B
	unsigned short ValB = 0x1234;
	char HighValB = ;
	char ShortLowValB = ;
	// Déclaration cas C

	// Déclaration cas D

	// Traitement cas A
	printf ("Traitement cas A \n");
	ResA1 =  A1 * A2;
	ResA2 = A1 * A2;
	printf ("ResA1 = A1 * A2 soit  %d * %d = %d \n", A1, A2, ResA1);
	printf ("ResA2 = A1 * A2 soit  %d * %d = %d \n", A1, A2, ResA2);
	/*
		Multiplication calcul sur 2 short = oveflow --> perte donée
		soit il faut caster soit  utiliser une variable adéquatte
	*/
	// Traitement cas B
	printf ("Traitement cas B \n");

	//printf ("ValB  % HighValB = %2x LowValB = %\n", );
	
	// Traitement cas C
	printf ("Traitement cas C \n");

	//printf ("ResC = %  OU % =  % \n",);
	//printf ("ResC = %  ET % =  %0 \n",);

	// Traitement cas D

	printf ("Traitement cas D \n");

	//printf ("Division de %4d par %4d = %4d Reste = %4d \n",);

  return(0);
}
