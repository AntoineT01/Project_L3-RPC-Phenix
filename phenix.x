/***************************/
/*  Author:  Antoine THOMAS
/*  Date:  02/03/2023
/*  Version:  1.0
/*  Description:  
/*    - Developpement et test d un service RPC
/*    - Gestion de paniers
/*  compile:  rpcgen -a -o phenix.x
/***************************/


struct date{
  int jour;
  int mois;
  int annee;
};
typedef struct date date;

struct commande{
  int numero;
  char commentaire[200];
  int prix;
  date date_commande;
  char etat[10];
};


struct pannier{
  int id;
  char Nom[50];
  char categorie[50];
  char Specialite[50];
  char Description[100];
  int prix;
  date date_ajout;
  date date_recuperation;
  char etat;
};
typedef struct pannier pannier;


struct partenaire{
  char Nom[50];
  char Email[100];
  char Telephone[10];
  char mdp[256];
  char categorie[50];
  char description[100];
  pannier liste_pannier[100];

};

struct client{
  char Nom[50];
  char Prenom[50];
  char Email[100];
  char Telephone[10];
  char Code_Postal[5];
  char mdp[256];
  commande liste_commande[100];
  partenaire partenaire_favorit[100];
};

typedef struct client client;




struct produit{
  char nom[50];
  char categorie[50];
  char description[100];
  int quantite;

};
typedef struct produit produit;



struct Adresse{
  char Ville[50];
  char Pays[50];
  char Code_Postal[5];
  char Adresse[100];
};
typedef struct Adresse Adresse;

struct search_param{
  char type_recherche[50];
  char parametre[50];

};

struct connexion_param{
  char Email[100];
  char mdp[256];
};

struct change_pannier_param{
  int id;
  char info_a_modifier[50];
  char parametre[50];
};

struct change_profil_param{
  char info_a_modifier[50];
  char parametre[50];
};

struct tab_int{
  int tab[100];
};






program TEST {
  version phenix {

    void init()=1;
    int inscription(partenaire)=2;
    int connexion(connexion_param)=3;

    tab_int cln_recherche_partenaire(search_part_param)= 4;
    tab_int cln_recherche_pannier(int)= 5;
    int cln_commande_pannier(int)= 6; 
    tab_int cln_historique_commande(void)= 7;
    int modifier_profil(change_profil_param)= 8;

    int part_ajouter_pannier(pannier)= 9;
    int part_modifier_pannier(pannier)= 10;
    int part_supprimer_pannier(int)= 11;

    tab_int part_liste_pannier(void)= 12;


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



  } = 1;
} = 0x20000001;



