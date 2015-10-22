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

void CollectionEntiers::Ajouter (int nouvelleValeur )
// Algorithme : aucun
{	
	if (nbElemtCourant == nbElemtMax)
	{
		Ajuster(nbElemtMax+1);
	}
	tabValeurs [nbElemtCourant] = nouvelleValeur;
	nbElemtCourant++;
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
				#ifdef MAP
    					cout << tabValeurs[i] << "==" << valeurARetirer[j] << endl;
 				#endif
				tabValeurs[i] = tabValeurs[nbElemtCourant-1];
				nbElemtCourant--;
				#ifdef MAP
    					Afficher();
				#endif
			}
		}
	}
	Ajuster(nbElemtCourant);
} //----- Fin de Méthode

int CollectionEntiers::Ajuster (unsigned int nouvelleTailleMax)
// Algorithme : aucun
{
	codeRetour codeRetourAjuster;
	codeRetourAjuster = collectionNonTronquee;
	if (nouvelleTailleMax == nbElemtMax)
	{
	}
	else
	{
		int * tabValeursAjuste = new int [nouvelleTailleMax];
		for (int i=0; i<nouvelleTailleMax && i<nbElemtCourant;i++)
		{
			tabValeursAjuste[i]=tabValeurs[i];
		}
		delete[] tabValeurs;
		tabValeurs=tabValeursAjuste;
		if(nouvelleTailleMax < nbElemtCourant)
		{
			nbElemtCourant=nouvelleTailleMax;
			codeRetourAjuster = collectionTronquee;
		}
		nbElemtMax=nouvelleTailleMax;
	}
	return codeRetourAjuster;
} //----- Fin de Méthode

void CollectionEntiers::Reunir (CollectionEntiers collectionAAjouter)
// Algorithme : aucun
{
	if (nbElemtCourant + collectionAAjouter.nbElemtCourant > nbElemtMax)
	{
		Ajuster(nbElemtCourant + collectionAAjouter.nbElemtCourant);
	}
	for (int i = 0 ; i<collectionAAjouter.nbElemtCourant ; i++)
	{
		Ajouter(collectionAAjouter.tabValeurs[i]);
	}	
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

CollectionEntiers::CollectionEntiers ( unsigned int tailleMax )
// Algorithme : aucun
{
#ifdef MAP
    cout << "Appel au constructeur de <CollectionEntiers>" << endl;
#endif
    nbElemtMax = tailleMax;
    nbElemtCourant = 0;
    tabValeurs = new int[tailleMax];
} //----- Fin de CollectionEntiers

CollectionEntiers::CollectionEntiers (unsigned int tailleTab, int * tab)
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
