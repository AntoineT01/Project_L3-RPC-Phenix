/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _PHENIX_H_RPCGEN
#define _PHENIX_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct Coordonnee {
	int x;
	int y;
};
typedef struct Coordonnee Coordonnee;


struct Adresse {
	char ville[50];
	char pays[50];
	char code_Postal[5];
	char rue[100];
	Coordonnee Coordonnee;
};
typedef struct Adresse Adresse;


struct Date {
	int jour;
	int mois;
	int annee;
};
typedef struct Date Date;


struct Produit {
	char nom[50];
	char categorie[50];
	char description[100];
	char specificite[50];
	int quantite;
};
typedef struct Produit Produit;


struct Pannier {
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


struct Commande {
	int numero;
	char commentaire[200];
	int prix;
	Date date_commande;
	char etat[10];
	Pannier liste_pannier[100];
	int nb_pannier;
};
typedef struct Commande Commande;


struct Partenaire {
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


struct Client {
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


struct Gestionnaire {
	char nom[50];
	char prenom[50];
	char email[100];
	char telephone[10];
	char mdp[256];
};
typedef struct Gestionnaire Gestionnaire;

struct Search_Param {
	char type_recherche[50];
	char parametre[50];
};
typedef struct Search_Param Search_Param;


struct Connexion_param {
	char email[100];
	char mdp[256];
};
typedef struct Connexion_param Connexion_param;


struct Change_pannier_param {
	int id;
	char info_a_modifier[50];
	char parametre[50];
};
typedef struct Change_pannier_param Change_pannier_param;


struct Change_profil_param {
	char info_a_modifier[50];
	char parametre[100];
};
typedef struct Change_profil_param Change_profil_param;


struct Tab_int {
	int tab[100];
};
typedef struct Tab_int Tab_int;


#define TEST 0x20000001
#define phenix 1

#if defined(__STDC__) || defined(__cplusplus)
#define init 1
extern  int * init_1(void *, CLIENT *);
extern  int * init_1_svc(void *, struct svc_req *);
#define inscription 2
extern  int * inscription_1(Partenaire *, CLIENT *);
extern  int * inscription_1_svc(Partenaire *, struct svc_req *);
#define connexion 3
extern  int * connexion_1(Connexion_param *, CLIENT *);
extern  int * connexion_1_svc(Connexion_param *, struct svc_req *);
#define cln_recherche_partenaire 4
extern  Tab_int * cln_recherche_partenaire_1(Search_Param *, CLIENT *);
extern  Tab_int * cln_recherche_partenaire_1_svc(Search_Param *, struct svc_req *);
#define cln_recherche_pannier 5
extern  Tab_int * cln_recherche_pannier_1(int *, CLIENT *);
extern  Tab_int * cln_recherche_pannier_1_svc(int *, struct svc_req *);
#define cln_commande_pannier 6
extern  int * cln_commande_pannier_1(int *, CLIENT *);
extern  int * cln_commande_pannier_1_svc(int *, struct svc_req *);
#define cln_historique_commande 7
extern  Tab_int * cln_historique_commande_1(void *, CLIENT *);
extern  Tab_int * cln_historique_commande_1_svc(void *, struct svc_req *);
#define modifier_profil 8
extern  int * modifier_profil_1(Change_profil_param *, CLIENT *);
extern  int * modifier_profil_1_svc(Change_profil_param *, struct svc_req *);
#define part_ajouter_pannier 9
extern  int * part_ajouter_pannier_1(Pannier *, CLIENT *);
extern  int * part_ajouter_pannier_1_svc(Pannier *, struct svc_req *);
#define part_modifier_pannier 10
extern  int * part_modifier_pannier_1(Pannier *, CLIENT *);
extern  int * part_modifier_pannier_1_svc(Pannier *, struct svc_req *);
#define part_supprimer_pannier 11
extern  int * part_supprimer_pannier_1(int *, CLIENT *);
extern  int * part_supprimer_pannier_1_svc(int *, struct svc_req *);
#define part_liste_pannier 12
extern  Tab_int * part_liste_pannier_1(void *, CLIENT *);
extern  Tab_int * part_liste_pannier_1_svc(void *, struct svc_req *);
#define cln_reecherche_pannier 13
extern  Tab_int * cln_reecherche_pannier_1(Coordonnee *, CLIENT *);
extern  Tab_int * cln_reecherche_pannier_1_svc(Coordonnee *, struct svc_req *);
extern int test_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define init 1
extern  int * init_1();
extern  int * init_1_svc();
#define inscription 2
extern  int * inscription_1();
extern  int * inscription_1_svc();
#define connexion 3
extern  int * connexion_1();
extern  int * connexion_1_svc();
#define cln_recherche_partenaire 4
extern  Tab_int * cln_recherche_partenaire_1();
extern  Tab_int * cln_recherche_partenaire_1_svc();
#define cln_recherche_pannier 5
extern  Tab_int * cln_recherche_pannier_1();
extern  Tab_int * cln_recherche_pannier_1_svc();
#define cln_commande_pannier 6
extern  int * cln_commande_pannier_1();
extern  int * cln_commande_pannier_1_svc();
#define cln_historique_commande 7
extern  Tab_int * cln_historique_commande_1();
extern  Tab_int * cln_historique_commande_1_svc();
#define modifier_profil 8
extern  int * modifier_profil_1();
extern  int * modifier_profil_1_svc();
#define part_ajouter_pannier 9
extern  int * part_ajouter_pannier_1();
extern  int * part_ajouter_pannier_1_svc();
#define part_modifier_pannier 10
extern  int * part_modifier_pannier_1();
extern  int * part_modifier_pannier_1_svc();
#define part_supprimer_pannier 11
extern  int * part_supprimer_pannier_1();
extern  int * part_supprimer_pannier_1_svc();
#define part_liste_pannier 12
extern  Tab_int * part_liste_pannier_1();
extern  Tab_int * part_liste_pannier_1_svc();
#define cln_reecherche_pannier 13
extern  Tab_int * cln_reecherche_pannier_1();
extern  Tab_int * cln_reecherche_pannier_1_svc();
extern int test_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_Coordonnee (XDR *, Coordonnee*);
extern  bool_t xdr_Coordonnee (XDR *, Coordonnee*);
extern  bool_t xdr_Adresse (XDR *, Adresse*);
extern  bool_t xdr_Adresse (XDR *, Adresse*);
extern  bool_t xdr_Date (XDR *, Date*);
extern  bool_t xdr_Date (XDR *, Date*);
extern  bool_t xdr_Produit (XDR *, Produit*);
extern  bool_t xdr_Produit (XDR *, Produit*);
extern  bool_t xdr_Pannier (XDR *, Pannier*);
extern  bool_t xdr_Pannier (XDR *, Pannier*);
extern  bool_t xdr_Commande (XDR *, Commande*);
extern  bool_t xdr_Commande (XDR *, Commande*);
extern  bool_t xdr_Partenaire (XDR *, Partenaire*);
extern  bool_t xdr_Partenaire (XDR *, Partenaire*);
extern  bool_t xdr_Client (XDR *, Client*);
extern  bool_t xdr_Client (XDR *, Client*);
extern  bool_t xdr_Gestionnaire (XDR *, Gestionnaire*);
extern  bool_t xdr_Search_Param (XDR *, Search_Param*);
extern  bool_t xdr_Search_Param (XDR *, Search_Param*);
extern  bool_t xdr_Connexion_param (XDR *, Connexion_param*);
extern  bool_t xdr_Connexion_param (XDR *, Connexion_param*);
extern  bool_t xdr_Change_pannier_param (XDR *, Change_pannier_param*);
extern  bool_t xdr_Change_pannier_param (XDR *, Change_pannier_param*);
extern  bool_t xdr_Change_profil_param (XDR *, Change_profil_param*);
extern  bool_t xdr_Change_profil_param (XDR *, Change_profil_param*);
extern  bool_t xdr_Tab_int (XDR *, Tab_int*);
extern  bool_t xdr_Tab_int (XDR *, Tab_int*);

#else /* K&R C */
extern bool_t xdr_Coordonnee ();
extern bool_t xdr_Coordonnee ();
extern bool_t xdr_Adresse ();
extern bool_t xdr_Adresse ();
extern bool_t xdr_Date ();
extern bool_t xdr_Date ();
extern bool_t xdr_Produit ();
extern bool_t xdr_Produit ();
extern bool_t xdr_Pannier ();
extern bool_t xdr_Pannier ();
extern bool_t xdr_Commande ();
extern bool_t xdr_Commande ();
extern bool_t xdr_Partenaire ();
extern bool_t xdr_Partenaire ();
extern bool_t xdr_Client ();
extern bool_t xdr_Client ();
extern bool_t xdr_Gestionnaire ();
extern bool_t xdr_Search_Param ();
extern bool_t xdr_Search_Param ();
extern bool_t xdr_Connexion_param ();
extern bool_t xdr_Connexion_param ();
extern bool_t xdr_Change_pannier_param ();
extern bool_t xdr_Change_pannier_param ();
extern bool_t xdr_Change_profil_param ();
extern bool_t xdr_Change_profil_param ();
extern bool_t xdr_Tab_int ();
extern bool_t xdr_Tab_int ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_PHENIX_H_RPCGEN */