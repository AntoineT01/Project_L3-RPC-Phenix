/***************************/
/*  Author:  Antoine THOMAS
/*  Date:  03/2023
/*  Version:  1.0
/*  Description:
/*    - Developpement et test d un service RPC
/*    - Gestion de paniers
/*  compile:  rpcgen -a -o phenix.x
/***************************/

struct Coordonnee
{
  int x;
  int y;
};
typedef struct Coordonnee Coordonnee;

struct Adresse
{
  char ville[50];
  char pays[50];
  char code_Postal[5];
  char rue[100];
  Coordonnee Coordonnee;
};
typedef struct Adresse Adresse;

struct Date
{
  int jour;
  int mois;
  int annee;
};
typedef struct Date Date;

struct Produit
{
  char nom[50];
  char categorie[50];
  char description[100];
  char specificite[50];
  int quantite;
};
typedef struct Produit Produit;

struct Pannier
{
  int id;
  char nom[50];
  char categorie[50];
  char specialite[50];
  char description[100];
  int prix;
  Date date_ajout;
  char heure_recuperation[11];
  char etat;
  Produit liste_produit[5];
  int nb_produit;
};
typedef struct Pannier Pannier;

struct Commande
{
  int numero;
  char commentaire[200];
  int prix;
  Date date_commande;
  char etat[10];
  Pannier liste_pannier[100];
  int nb_pannier;
};
typedef struct Commande Commande;

struct Partenaire
{
  char nom[50];
  char email[100];
  char telephone[10];
  char mdp[256];
  char categorie[50];
  Adresse adresse;
  char description[100];
  Pannier liste_pannier[100];
  int nb_pannier;
};
typedef struct Partenaire Partenaire;

struct Client
{
  char nom[50];
  char prenom[50];
  char email[100];
  char telephone[10];
  Adresse adresse;
  char mdp[256];
  Commande liste_commande[100];
  Partenaire partenaire_favorit[100];
  int nb_commande;
  int nb_partenaire_favorit;
};
typedef struct Client Client;

struct Gestionnaire
{
  char nom[50];
  char prenom[50];
  char email[100];
  char telephone[10];
  char mdp[256];
};


struct Search_Param
{
  char type_recherche[50];
  char parametre[50];
};
typedef struct Search_Param Search_Param;

struct Connexion_param
{
  char email[100];
  char mdp[256];
};
typedef struct Connexion_param Connexion_param;

struct Change_pannier_param
{
  int id;
  char info_a_modifier[50];
  char parametre[50];
};
typedef struct Change_pannier_param Change_pannier_param;

struct Change_profil_param
{
  char info_a_modifier[50];
  char parametre[100];
};
typedef struct Change_profil_param Change_profil_param;

struct Tab_int
{
  int tab[100];
};
typedef struct Tab_int Tab_int;

program TEST
{
  version phenix
  {
    int test_auto() = 1;
    int init() = 2;
    int inscription(Partenaire) = 3;
    int connexion(Connexion_param) = 4;

    Tab_int cln_recherche_partenaire(Search_Param) = 5;
    Tab_int cln_recherche_pannier(int) = 6;
    int cln_commande_pannier(int) = 7;
    Tab_int cln_historique_commande(void) = 8;
    int modifier_profil(Change_profil_param) = 9;

    int part_ajouter_pannier(Pannier) = 10;
    int part_modifier_pannier(Pannier) = 11;
    int part_supprimer_pannier(int) = 12;

    Tab_int part_liste_pannier(void) = 13;

    Tab_int cln_reecherche_pannier(Coordonnee) = 14;

    /*Creer_Pannier



    chercher_pannier(char)=1;
    reserver_pannier
    inscription
    connection

    Ajouter un article au panier
    Supprimer un article du panier
    Mettre à jour la quantité d un article dans le panier
    Vider le panier
    Passer une commande*/
  }
  = 1;
}
= 0x20000001;
