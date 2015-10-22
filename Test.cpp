/*************************************************************************
                           Test  -  description
                             -------------------
    début                : 07/10/2015
    copyright            : (C) 2015 par abarzasi sdigiovann
*************************************************************************/

//---------- Réalisation de la classe <Test> (fichier Test.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "CollectionEntiers.h"


//----------------------------------------------------------------- PUBLIC

void TestConstructeurAfficher1 ()
{
	CollectionEntiers collection (10);
	collection.Afficher();
}

void TestAjuster2 ()
{
	CollectionEntiers collection (10);
	collection.Afficher();
	int codeRetour;
	codeRetour = collection.Ajuster(8);
	cout << codeRetour << endl;
	collection.Afficher();
}

void TestAjouter3 ()
{
	CollectionEntiers collection (10);
	collection.Afficher();
	int codeRetour;
	codeRetour = collection.Ajouter(13);
	cout << codeRetour << endl;
	collection.Afficher();
}

void TestAjouter4 ()
{
	CollectionEntiers collection (10);
	collection.Afficher();
	int codeRetour;
	codeRetour = collection.Ajouter(13);
	cout << codeRetour << endl;
	collection.Afficher();
	codeRetour = collection.Ajouter(17);
	cout << codeRetour << endl;
	collection.Afficher();
	codeRetour = collection.Ajouter(21);
	cout << codeRetour << endl;
	collection.Afficher();
	codeRetour = collection.Ajouter(32);
	cout << codeRetour << endl;
	collection.Afficher();
	codeRetour = collection.Ajouter(103);
	cout << codeRetour << endl;
	collection.Afficher();
	codeRetour = collection.Ajouter(27);
	cout << codeRetour << endl;
	collection.Afficher();
	codeRetour = collection.Ajouter(8);
	cout << codeRetour << endl;
	collection.Afficher();
	codeRetour = collection.Ajouter(0);
	cout << codeRetour << endl;
	collection.Afficher();
	codeRetour = collection.Ajouter(2);
	cout << codeRetour << endl;
	collection.Afficher();
	codeRetour = collection.Ajouter(17);
	cout << codeRetour << endl;
	collection.Afficher();
	codeRetour = collection.Ajouter(5);
	cout << codeRetour << endl;
	collection.Afficher();
	codeRetour = collection.Ajouter(15);
	cout << codeRetour << endl;
	collection.Afficher();
	codeRetour = collection.Ajouter(35);
	cout << codeRetour << endl;
	collection.Afficher();
}

void TestAjuster5 ()
{
	CollectionEntiers collection (10);
	collection.Ajouter(13);
	collection.Ajouter(17);
	collection.Ajouter(21);
	collection.Ajouter(32);
	collection.Ajouter(103);
	collection.Afficher();
	int codeRetour;
	codeRetour = collection.Ajuster(3);
	cout << codeRetour << endl;
	collection.Afficher();
}

void TestConstructeurCopieAfficher6 ()
{
	CollectionEntiers collection (10);
	collection.Ajouter(13);
	collection.Ajouter(17);
	collection.Ajouter(21);
	collection.Ajouter(32);
	CollectionEntiers collection2 (collection);
	collection2.Afficher();
}

void TestRetirer7 ()
{
	CollectionEntiers collection (10);
	collection.Ajouter(13);
	collection.Ajouter(17);
	collection.Ajouter(21);
	collection.Ajouter(13);
	collection.Ajouter(32);
	int nbVal = 3;
	int * valARetirer;
	valARetirer = new int [3];
	valARetirer[0] = 21;
	valARetirer[1] = 31;
	valARetirer[2] = 13;
	collection.Retirer(nbVal,valARetirer);
	collection.Afficher();
	delete (valARetirer);
}

void TestReunir8 ()
{
	CollectionEntiers collection (10);
	collection.Ajouter(13);
	collection.Ajouter(17);
	collection.Ajouter(13);
	collection.Ajouter(42);
	CollectionEntiers collection2 (7);
	collection2.Ajouter(41);
	collection2.Ajouter(0);
	collection2.Ajouter(12);
	int codeRetour;
	codeRetour = collection.Reunir(collection2);
	cout << codeRetour << endl;
	collection.Afficher();
}

void TestReunir9 ()
{
	CollectionEntiers collection (5);
	collection.Ajouter(11);
	collection.Ajouter(24);
	collection.Ajouter(0);
	collection.Ajouter(42);
	CollectionEntiers collection2 (7);
	collection2.Ajouter(73);
	collection2.Ajouter(108);
	collection2.Ajouter(12);
	int codeRetour;
	codeRetour = collection.Reunir(collection2);
	cout << codeRetour << endl;
	collection.Afficher();
}



void TestConstructeurAfficher()
{
	TestConstructeurAfficher1();
}

void TestConstructeurDeuxAfficher()
{
	TestConstructeurDeuxAfficher1();
}

void TestConstructeurCopieAfficher()
{
	TestConstructeurCopieAfficher1;
}

void TestAjouter()
{
	TestAjouter1();  // ajout sans ajuster
	TestAjouter2();  // ajout dun doublon sans ajuster
	TestAjouter3();  //ajout avec ajustement
}

void TestRetirer()    // changer mode completion de la case vide
{
	TestRetirer1();  // verif tab[i] = tab[nbElemtCourant] ET taille ajustée au mieux
	TestRetirer2();  // verif enleve tous les doublons 
}

void TestAjuster()  // si taille demande == taile max ne rien faire
{
	TestAjuster1();  // verif sans tronquer
	TestAjuster2();  // verif en tronquant
}

void TestReunir()
{
	TestReunir1();   // test sans ajuster
	TestReunir2();   // test avec ajuster
}



int main ()
{
	TestConstructeurAfficher();
	TestConstructeurDeuxAfficher();
	TestConstructeurCopieAfficher()
	TestAjouter();
	TestRetirer();
	TestAjuster();
	TestReunir();
}
