/*************************************************************************
                           CollectionEntiers  -  description
                             -------------------
    début                : 07/10/2015
    copyright            : (C) 2015 par abarzasi sdigiovann
*************************************************************************/

//---------- Interface de la classe <CollectionEntiers> (fichier CollectionEntiers.h) ------
#if ! defined ( COLLECTIONENTIERS_H )
#define COLLECTIONENTIERS_H
#define MAP

// Rôle de la classe <CollectionEntiers>
//
//
//------------------------------------------------------------------------ 

class CollectionEntiers
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    void Afficher () const;
    // Mode d'emploi :
    // Affiche la valeur de chaque elements contenus dans une collection d'entiers separes par un espace
    // Contrat : aucun

    int Ajouter (int nouvelleValeur);
    // Mode d'emploi :
    // Ajoute un element après les autres dans le tableau de valeurs
    // Contrat : aucun

    void Retirer ( int nombreValeurs, int * valeursARetirer );
    // Mode d'emploi :
    // Retire les valeurs presentes dans le tableau valeursARetirer
    // nombreValeurs indique le nombre de valeurs differentes a retirer cest a dire le nombre delement de valeursARetirer
    // si une valeur de valeursARetirer est presente en plusieurs exemplaires, ces derniers seront tous retires
    // Contrat : les valeurs fournies dans valeursAretirer doivent etre differentes

    int Ajuster (int nouvelleTaille);
    // Mode d'emploi :
    // Ajuste la taille du tableau à la taille demandée. Par défaut, on ajuste à une case vide de plus que nbElemtCourant.
    // Si nouvelleTaille est inférieure à nbElemtCourant, on perd les éléments d'indice entre nouvelleTaille et nbElemtCourant.
    // Contrat : la nouvelle taille doit être positive.    

    int Reunir (CollectionEntiers collectionAAjouter);
    // Mode d'emploi :
    // Ajoute au contenu de la collection d'entiers "collection" sur laquelle est appelée la méthode le contenu de collectionAAjouter
    // Contrat : aucun


//-------------------------------------------- Constructeurs - destructeur
    CollectionEntiers ( const CollectionEntiers & unCollectionEntiers );
    // Mode d'emploi (constructeur de copie) :
    // Construit un tableau d'entiers identique à unCollectionEntiers (même tailles utilisées et max, et même valeurs)
    // Contrat : aucun

    CollectionEntiers ( unsigned int nbElemtInitial );
    // Mode d'emploi :
    // Construit un tableau d'entiers de taille variable initialisee a nbElemtInitial
    // Contrat : aucun

    virtual ~CollectionEntiers ( );
    // Mode d'emploi :
    // Libère la mémoire allouée pour le tableau de valeurs tabValeurs
    // Contrat : aucun

//------------------------------------------------------------------ PRIVE 

private:
//------------------------------------------------------- Attributs privés
    int nbElemtMax;
    int nbElemtCourant;
    int * tabValeurs;

};

#endif // COLLECTIONENTIERS_H
