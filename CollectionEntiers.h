/*************************************************************************
                           CollectionEntiers  -  description
                             -------------------
    début                : 07/10/2015
    copyright            : (C) 2015 par abarzasi sdigiovann
*************************************************************************/

//---------- Interface de la classe <CollectionEntiers> (fichier CollectionEntiers.h) ------
#if ! defined ( COLLECTIONENTIERS_H )
#define COLLECTIONENTIERS_H

//------------------------------------------------------------------ Types 
enum codeRetour {collectionNonTronquee, collectionTronquee};

//------------------------------------------------------------------------ 
// Rôle de la classe <CollectionEntiers>
// Gestion d'une collection de nombres entiers stockés dans un tableau :
// ajout et suppression d'un entier, ajustement de la taille maximale d'une
// collection, réunion et affichage de collections
//------------------------------------------------------------------------ 

class CollectionEntiers
{
//----------------------------------------------------------------- PUBLIC
public:
//----------------------------------------------------- Méthodes publiques
	void Afficher () const;
	// Mode d'emploi :
	// Affiche la valeur de chaque entiers contenus dans la collection séparés par un espace
	// Retour à la ligne automatique en bout de ligne
	// Contrat : aucun

	void Ajouter (int nouvelleValeur);
	// Mode d'emploi :
	// Ajoute un entier à la suite des autres dans la collection
	// Les doublons ne sont pas gérés (possibilité qu'une même collection possède plusieurs fois le même entier)
	// Les entiers sont triés par ordre d'insertion (le dernier entier ajouté est à la dernière place)
	// La taille maximale de la collection est augmentée de 1 si nécessaire
	// Contrat : aucun

	void Retirer ( int nombreValeurs, int * valeursARetirer );
	// Mode d'emploi :
	// Retire les entiers de la collection dont la valeur est contenue dans valeursARetirer
	// Lors de chaque retrait, l'entier en dernière position dans la collection est déplacé à la position libérée par l'entier retiré
	// Si plusieurs entiers de la collection ont une même valeur présente dans valeurARetirer, alors ils sont tous retirés
	// La taille maximale de la collection à l'issue des retraits d'entiers est fixée de manière optimale (plus petite taille permettant de stocker tous les entiers 		// restants)
	// Contrat : nombreValeurs doit correspondre à la taille de valeursARetirer et les valeurs des entiers contenus dans valeursARetirer doivent être distinctes

	int Ajuster (unsigned int nouvelleTailleMax);
	// Mode d'emploi :
	// Ajuste la taille maximale d'une collection à la taille nouvelleTaille
	// Si nouvelleTaille est inférieure au nombre d'entiers contenus dans la collection, la collection sera tronquée afin de respecter l'ajustement de la taille
	// maximale et des entiers seront perdus
	// La méthode renvoie un code de retour entier qui peut prendre la valeur collectionNonTronquee ou collectionTronquee
	// Contrat : aucun   

	void Reunir (CollectionEntiers &collectionAAjouter);
	// Mode d'emploi :
	// Ajoute le contenu de la collection d'entiers passée en paramètre (collectionAAjouter) à la collection sur laquelle la méthode est appelée
	// Les entiers ajoutés sont placés à la suite de ceux déjà présents dans la collection et dans leur ordre initial (avant réunion)
	// Si la taille maximale de la collection sur laquelle la méthode est appelée est insuffisante pour stocker le contenu des deux collections réunies, alors elle est
	// ajustée de manière optimale (plus petite taille permettant de stocker tous les entiers)
	// Contrat : aucun


//-------------------------------------------- Constructeurs - destructeur
	CollectionEntiers ( unsigned int tailleMax );
	// Mode d'emploi :
	// Construit une collection d'entiers vide de taille maximale tailleMax
	// Contrat : aucun

	CollectionEntiers (unsigned int tailleTab, int * tab);
	// Mode d'emploi :
	// Construit une collection d'entiers à partir d'un tableau d'entiers tab et de sa taille tailleTab en concervant l'ordre des valeurs
	// et en fixant la taille maximale de la collection à tailleTab
	// Contrat : tailleTab doit correspondre à la taille de tab

	virtual ~CollectionEntiers ( );
	// Mode d'emploi :
	// Libère la mémoire allouée pour stocker la collection d'entiers
	// Contrat : aucun


//------------------------------------------------------------------ PRIVE 
private:
//------------------------------------------------------- Attributs privés
	int nbElemtMax; // taille maximale de la collection
	int nbElemtCourant; // nombre d'entiers que contient la collection
	int * tabValeurs; // contenu de la collection

};
#endif // COLLECTIONENTIERS_H
