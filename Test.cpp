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

void TestConstructeurAfficher2 ()
{
	CollectionEntiers collection (0);
	collection.Afficher();
}

void TestConstructeurDeuxAfficher1 ()
{
	int tab []={13, 28, 47, 59, 71, 1062, 0, 12};
	CollectionEntiers collection(8,tab);
	collection.Afficher();
}

void TestConstructeurDeuxAfficher2 ()
{
	int tab []={};
	CollectionEntiers collection(0,tab);
	collection.Afficher();
}

void TestConstructeurDeuxAfficher3 ()
{
	int tab []={13, 28, 13, 59, 59, 1062, 0, 13, 20};
	CollectionEntiers collection(9,tab);
	collection.Afficher();
}

void TestAjouter1 ()
{
	CollectionEntiers collection (10);
	collection.Ajouter(14);
	collection.Ajouter(17);
	collection.Ajouter(-165);
	collection.Afficher();
}

void TestAjouter2 ()
{
	CollectionEntiers collection (0);
	collection.Ajouter(14);
	collection.Afficher();
}

void TestAjouter3 ()
{
	CollectionEntiers collection (13);
	collection.Ajouter(14);
	collection.Ajouter(17);
	collection.Ajouter(-165);
	collection.Ajouter(17);
	collection.Ajouter(17);
	collection.Ajouter(1655);
	collection.Afficher();
}

void TestAjouter4 ()
{
	CollectionEntiers collection (4);
	collection.Ajouter(14);
	collection.Ajouter(17);
	collection.Ajouter(-165);
	collection.Ajouter(17);
	collection.Ajouter(17);
	collection.Ajouter(133);
	collection.Afficher();
}

void TestRetirer1 ()
{
	CollectionEntiers collection (15);
	collection.Ajouter(14);
	collection.Ajouter(17);
	collection.Ajouter(-165);
	collection.Ajouter(17);
	collection.Ajouter(17);
	collection.Ajouter(133);
	collection.Ajouter(78);
	collection.Ajouter(21);
	collection.Ajouter(13);
	collection.Ajouter(114);
	collection.Ajouter(218);
	collection.Afficher();
	int tab []={133, 78, -165, 246};
	collection.Retirer(4,tab);
	collection.Afficher();
}
void TestRetirer2 ()
{
	CollectionEntiers collection (0);
	collection.Afficher();
	int tab []={133, 78, -165, 246};
	collection.Retirer(4,tab);
	collection.Afficher();
}

void TestRetirer3 ()
{
	CollectionEntiers collection (15);
	collection.Ajouter(14);
	collection.Ajouter(17);
	collection.Ajouter(-165);
	collection.Ajouter(17);
	collection.Ajouter(218);
	collection.Afficher();
	int tab []={};
	collection.Retirer(0,tab);
	collection.Afficher();	
}

void TestRetirer4 ()
{
	CollectionEntiers collection (0);
	collection.Afficher();
	int tab []={};
	collection.Retirer(0,tab);
	collection.Afficher();
}

void TestRetirer5 ()
{
	CollectionEntiers collection (17);
	collection.Ajouter(14);
	collection.Ajouter(17);
	collection.Ajouter(-165);
	collection.Ajouter(17);
	collection.Ajouter(17);
	collection.Ajouter(133);
	collection.Ajouter(78);
	collection.Ajouter(21);
	collection.Ajouter(13);
	collection.Ajouter(114);
	collection.Ajouter(218);
	collection.Afficher();
	int tab []={17, 13};
	collection.Retirer(2,tab);
	collection.Afficher();
}

void TestAjuster1 ()
{
	CollectionEntiers collection (17);
	collection.Ajouter(71);
	collection.Ajouter(44);
	collection.Ajouter(-35);
	collection.Ajouter(17);
	collection.Ajouter(17);
	collection.Ajouter(143);
	int codeRetourAjuster;
	codeRetourAjuster=collection.Ajuster(15);
	collection.Afficher();
	cout << codeRetourAjuster << endl;
}

void TestAjuster2 ()
{
	CollectionEntiers collection (0);
	int codeRetourAjuster;
	codeRetourAjuster=collection.Ajuster(15);
	collection.Afficher();
	cout << codeRetourAjuster << endl;
}

void TestAjuster3 ()
{
	CollectionEntiers collection (17);
	collection.Ajouter(71);
	collection.Ajouter(44);
	collection.Ajouter(-35);
	collection.Ajouter(17);
	int codeRetourAjuster;
	codeRetourAjuster=collection.Ajuster(0);
	collection.Afficher();
	cout << codeRetourAjuster << endl;
}

void TestAjuster4 ()
{
	CollectionEntiers collection (0);
	int codeRetourAjuster;
	codeRetourAjuster=collection.Ajuster(0);
	collection.Afficher();
	cout << codeRetourAjuster << endl;
}

void TestAjuster5 ()
{
	CollectionEntiers collection (17);
	collection.Ajouter(71);
	collection.Ajouter(44);
	collection.Ajouter(-35);
	collection.Ajouter(17);
	collection.Ajouter(17);
	collection.Ajouter(143);
	int codeRetourAjuster;
	codeRetourAjuster=collection.Ajuster(4);
	collection.Afficher();
	cout << codeRetourAjuster << endl;
}

void TestReunir1 ()
{
	CollectionEntiers collection (10);
	collection.Ajouter(13);
	collection.Ajouter(17);
	collection.Ajouter(76);
	collection.Ajouter(42);
	CollectionEntiers collection2 (7);
	collection2.Ajouter(41);
	collection2.Ajouter(0);
	collection2.Ajouter(12);
	collection.Reunir(collection2);
	collection.Afficher();
}

void TestReunir2 ()
{
	CollectionEntiers collection (0);
	CollectionEntiers collection2 (7);
	collection2.Ajouter(41);
	collection2.Ajouter(0);
	collection2.Ajouter(12);
	collection.Reunir(collection2);
	collection.Afficher();
}

void TestReunir3 ()
{
	CollectionEntiers collection (10);
	collection.Ajouter(13);
	collection.Ajouter(17);
	collection.Ajouter(76);
	collection.Ajouter(42);
	CollectionEntiers collection2 (0);
	collection.Reunir(collection2);
	collection.Afficher();
}

void TestReunir4 ()
{
	CollectionEntiers collection (0);
	CollectionEntiers collection2 (0);
	collection.Reunir(collection2);
	collection.Afficher();
}

void TestReunir5 ()
{
	CollectionEntiers collection (14);
	collection.Ajouter(11);
	collection.Ajouter(24);
	collection.Ajouter(0);
	collection.Ajouter(42);
	CollectionEntiers collection2 (7);
	collection2.Ajouter(24);
	collection2.Ajouter(24);
	collection2.Ajouter(128);
	collection2.Ajouter(24);
	collection2.Ajouter(-5874);
	collection.Reunir(collection2);
	collection.Afficher();
}

void TestReunir6 ()
{
	CollectionEntiers collection (6);
	collection.Ajouter(11);
	collection.Ajouter(24);
	collection.Ajouter(0);
	collection.Ajouter(42);
	CollectionEntiers collection2 (7);
	collection2.Ajouter(24);
	collection2.Ajouter(24);
	collection2.Ajouter(128);
	collection2.Ajouter(24);
	collection2.Ajouter(-5874);
	collection.Reunir(collection2);
	collection.Afficher();
}



void TestConstructeurAfficher ()
{
	TestConstructeurAfficher1();
	TestConstructeurAfficher2();
}

void TestConstructeurDeuxAfficher ()
{
	TestConstructeurDeuxAfficher1();
	TestConstructeurDeuxAfficher2();
	TestConstructeurDeuxAfficher3();
}

void TestAjouter ()
{
	TestAjouter1();  
	TestAjouter2(); 
	TestAjouter3();
	TestAjouter4();
}

void TestRetirer ()  
{
	TestRetirer1();
	TestRetirer2(); 
	TestRetirer3();
	TestRetirer4();
	TestRetirer5();
}

void TestAjuster () 
{
	TestAjuster1();  
	TestAjuster2();
	TestAjuster3();
	TestAjuster4();
	TestAjuster5();
}

void TestReunir ()
{
	TestReunir1();
	TestReunir2();  
	TestReunir3();
	TestReunir4();
	TestReunir5();  
	TestReunir6();
}



int main ()
{
	TestConstructeurAfficher();
	TestConstructeurDeuxAfficher();
	TestAjouter();
	TestRetirer();
	TestAjuster();
	TestReunir();
}
