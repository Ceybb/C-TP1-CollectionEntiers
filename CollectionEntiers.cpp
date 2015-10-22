/*************************************************************************
                           CollectionEntiers  -  description
                             -------------------
    début                : 07/10/2015
    copyright            : (C) 2015 par abarzasi sdigiovann
*************************************************************************/

//---------- Réalisation de la classe <CollectionEntiers> (fichier CollectionEntiers.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "CollectionEntiers.h"

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques

void CollectionEntiers::Afficher () const
// Algorithme : aucun
{
	#ifdef MAP
    		cout << nbElemtCourant << " / " << nbElemtMax << endl;
	#endif
	for (int i=0;i<nbElemtCourant;i++)
	{
		cout << tabValeurs[i] << ' ';
	}
	cout << endl;
} //----- Fin de Méthode

int CollectionEntiers::Ajouter (int nouvelleValeur )
// Algorithme : aucun
{
	int necessAjust = 0;	
	if (nbElemtCourant == nbElemtMax)
	{
		Ajuster(nbElemtMax+1);
		necessAjust = 1;
	}
	tabValeurs [nbElemtCourant] = nouvelleValeur;
	nbElemtCourant++;
	return necessAjust;
} //----- Fin de Méthode

void CollectionEntiers::Retirer ( int nombreValeurs, int * valeurARetirer )
// Algorithme : aucun
{
	for (int i=nbElemtCourant-1;i>=0;i--)
	{
		for (int j=0;j<nombreValeurs;j++)
		{
			if(tabValeurs[i]==valeurARetirer[j])
			{
				for (int k=i;k<nbElemtCourant-1;k++)
				{
					tabValeurs[k]=tabValeurs[k+1];
				}
				nbElemtCourant--;
			}
		}
	}
	Ajuster(nbElemtCourant);
} //----- Fin de Méthode

int CollectionEntiers::Ajuster (int nouvelleTaille)
// Algorithme : aucun
{
	int perteVal = collectionNonTronquee;
	int * tabValeursModif = new int [nouvelleTaille];

	for (int i=0; i<nouvelleTaille && i<nbElemtCourant;i++)
	{
		tabValeursModif[i]=tabValeurs[i];
	}
	delete[] tabValeurs;
	tabValeurs=tabValeursModif;
	if(nouvelleTaille < nbElemtCourant)
	{
		nbElemtCourant=nouvelleTaille;
		perteVal = collectionTronquee;
	}
	nbElemtMax=nouvelleTaille;
	return perteVal;
} //----- Fin de Méthode

int CollectionEntiers::Reunir (CollectionEntiers collectionAAjouter)
// Algorithme : aucun
{
	int necessAjust = 0;
	if (nbElemtCourant + collectionAAjouter.nbElemtCourant > nbElemtMax)
	{
		Ajuster(nbElemtCourant + collectionAAjouter.nbElemtCourant);
		necessAjust = 1;
	}
	for (int i = 0 ; i<collectionAAjouter.nbElemtCourant ; i++)
	{
		Ajouter(collectionAAjouter.tabValeurs[i]);
	}
	return necessAjust;	
} //----- Fin de Méthode


//-------------------------------------------- Constructeurs - destructeur
CollectionEntiers::CollectionEntiers ( const CollectionEntiers & unCollectionEntiers )
// Algorithme : aucun
{
#ifdef MAP
    cout << "Appel au constructeur de copie de CollectionEntiers" << endl;
#endif
    nbElemtMax = unCollectionEntiers.nbElemtMax;
    nbElemtCourant = unCollectionEntiers.nbElemtCourant;
    tabValeurs = new int[nbElemtMax];
    for (int i=0;i<nbElemtCourant;i++)
    {
	tabValeurs[i] = unCollectionEntiers.tabValeurs[i];
    }
} //----- Fin de CollectionEntiers (constructeur de copie)

CollectionEntiers::CollectionEntiers ( unsigned int nbElemtInitial )
// Algorithme : aucun
{
#ifdef MAP
    cout << "Appel au constructeur de <CollectionEntiers>" << endl;
#endif
    nbElemtMax = nbElemtInitial;
    nbElemtCourant = 0;
    tabValeurs = new int[nbElemtMax];
} //----- Fin de CollectionEntiers

CollectionEntiers::CollectionEntiers (int tailleTab, int * tab)
{
#ifdef MAP
    cout << "Appel au constructeur de <CollectionEntiers>" << endl;
#endif
    nbElemtMax = tailleTab;
    nbElemtCourant = tailleTab;
    tabValeurs = new int[nbElemtMax];
    for (int i=0;i<nbElemtMax;i++)
    {       
	    tabValeurs[i] = tab[i];	    
    }
}

CollectionEntiers::~CollectionEntiers ( )
// Algorithme : aucun
{
#ifdef MAP
    cout << "Appel au destructeur de <CollectionEntiers>" << endl;
#endif
    delete [] tabValeurs;
} //----- Fin de ~CollectionEntiers
