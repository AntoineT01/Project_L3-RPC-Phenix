/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "phenix.h"


#include "phenix.h"

// declaration des variables globales

// liste des clients =0
Client liste_client[100];
int nb_client;

// liste des partenaires =1
Partenaire liste_partenaire[100];
int nb_partenaire;

// liste des gestionnaires =2
Gestionnaire liste_gestionnaire[100];
int nb_gestionnaire;

// gestion de session (0=client, 1=partenaire, 2=gestionnaire)
int compte_connectee[2];

// declaration des fonctions globales

// fonction de creation d'une coordonnee
Coordonnee creer_coordonnee(float latitude, float longitude)
{
	Coordonnee coordonnee;
	coordonnee.x = latitude;
	coordonnee.y = longitude;
	return coordonnee;
}

// fonction de creatiom d'une adresse
Adresse creer_adresse(char ville[50], char pays[50], char code_postal[50], char rue[50], Coordonnee coordonnee)
{
	Adresse adresse;
	strcpy(adresse.ville, ville);
	strcpy(adresse.pays, pays);
	strcpy(adresse.code_Postal, code_postal);
	strcpy(adresse.rue, rue);
	adresse.Coordonnee = coordonnee;
	return adresse;
}

// fonction de creation d'un partenaire
Partenaire creer_partenaire(char nom[50], char email[100], char telephone[10], char mdp[256], char categorie[50], Adresse adresse, char description[100])
{
	Partenaire partenaire;
	strcpy(partenaire.nom, nom);
	strcpy(partenaire.email, email);
	strcpy(partenaire.telephone, telephone);
	strcpy(partenaire.mdp, mdp);
	strcpy(partenaire.categorie, categorie);
	partenaire.adresse = adresse;
	strcpy(partenaire.description, description);
	partenaire.nb_pannier = 0;
	nb_partenaire++;
	return partenaire;
}

// fonction de creation d'un client
Client creer_client(char nom[50], char prenom[50], char email[100], char telephone[10], Adresse adresse, char mdp[256])
{
	Client client;
	strcpy(client.nom, nom);
	strcpy(client.prenom, prenom);
	strcpy(client.email, email);
	strcpy(client.telephone, telephone);
	client.adresse = adresse;
	strcpy(client.mdp, mdp);
	client.nb_commande = 0;
	nb_client++;
	return client;
}

// fonction de creation d'un gestionnaire
Gestionnaire creer_gestionnaire(char nom[50], char prenom[50], char email[100], char telephone[10], char mdp[256])
{
	Gestionnaire gestionnaire;
	strcpy(gestionnaire.nom, nom);
	strcpy(gestionnaire.prenom, prenom);
	strcpy(gestionnaire.email, email);
	strcpy(gestionnaire.telephone, telephone);
	strcpy(gestionnaire.mdp, mdp);
	nb_gestionnaire++;
	return gestionnaire;
}

// fonction de creation d'une commande
Commande creer_commande(int numero, char commentaire[100], int prix, Date date_commande, char etat[10], int nb_pannier)
{
	Commande commande;
	commande.numero = numero;
	strcpy(commande.commentaire, commentaire);
	commande.prix = prix;
	commande.date_commande = date_commande;
	strcpy(commande.etat, etat);
	commande.nb_pannier = nb_pannier;

	return commande;
}

// fonction de creation d'un panier
Pannier creer_pannier(int id, char nom[50], char categorie[50], char specialite[50], char description[100], int prix, Date date_ajout, char heure_recuperation[11], char etat, int nb_produit)
{
	Pannier pannier;
	pannier.id = id;
	strcpy(pannier.nom, nom);
	strcpy(pannier.categorie, categorie);
	strcpy(pannier.specialite, specialite);
	strcpy(pannier.description, description);
	pannier.prix = prix;
	pannier.date_ajout = date_ajout;
	strcpy(pannier.heure_recuperation, heure_recuperation);
	pannier.etat = etat;
	pannier.nb_produit = nb_produit;
	return pannier;
}

// fonction de creation d'un produit
Produit creer_produit(char nom[50], char categorie[50], char description[100], char specificite[50], char quantite[50])
{
	Produit produit;
	strcpy(produit.nom, nom);
	strcpy(produit.categorie, categorie);
	strcpy(produit.description, description);
	strcpy(produit.specificite, specificite);
	strcpy(produit.quantite, quantite);
	return produit;
}


int *
test_auto_1_svc(void *argp, struct svc_req *rqstp)
{
	static int  result;

	/*
	 * insert server code here
	 */

	return &result;
}

//fonction server
int *init_1_svc(void *argp, struct svc_req *rqstp)
{
	static int result;

	// creation du jeux de donnee

	// creation des partenaires

	//Les boulangeries partenaires
	liste_partenaire[nb_partenaire] = creer_partenaire("boulangerie Talbourdet", "Talbourdet@gmail.com", "0606060606", "mdp_Talbourdet", "boulangerie", creer_adresse("Brest", "France", "29200", "rue de la boulangerie", creer_coordonnee(48.390394, -4.486076)), "Boulangerie artisanale");

	liste_partenaire[nb_partenaire] = creer_partenaire("boulangerie Levene", "Levene@gmail.com", "0707070707", "mdp_Levene", "boulangerie", creer_adresse("Brest", "France", "29200", "rue de la Petite Boulangerie", creer_coordonnee(35.689487, 139.691706)), "Boulangerie familiale");

	liste_partenaire[nb_partenaire] = creer_partenaire("boulangerie Thomas", "Thomas@gmail.com", "0808080808", "mdp_Thomas", "boulangerie", creer_adresse("Brest", "France", "29200", "rue de la fleur", creer_coordonnee(52.520008, 13.404954)), "Boulanger depuis 1 mois");

	//Les boucherie partenaires
	liste_partenaire[nb_partenaire] = creer_partenaire("boucherie du coin", "ducoin@gmail.com", "0909090909", "mdp_ducoin", "boucherie", creer_adresse("Brest", "France", "29200", "rue de la boucherie", creer_coordonnee(25.204849, 55.270783)), "Boucherie artisanale");

	liste_partenaire[nb_partenaire] = creer_partenaire("boucherie de la ville", "delaville@gmail.com", "0101010101", "mdp_delaville", "boucherie", creer_adresse("Brest", "France", "29200", "rue du petit boucher", creer_coordonnee(32.085299, 34.781767)), "Boucherie familiale");

	liste_partenaire[nb_partenaire] = creer_partenaire("boucherie de la mer", "delamer@gmail.com", "0202020202", "mdp_delamer", "boucherie", creer_adresse("Brest", "France", "29200", "rue de la mer", creer_coordonnee(26.820553, 30.802498)), "Plus connue sous le nom de poissonnerie");

	//Les supermarche partenaires
	liste_partenaire[nb_partenaire] = creer_partenaire("Casino", "casino@gmail.com", "0303030303", "mdp_casino", "supermarche", creer_adresse("Brest", "France", "29200", "rue des promos", creer_coordonnee(42.697708, 23.321868)), "Hypermarch??");

	liste_partenaire[nb_partenaire] = creer_partenaire("Carrefour", "carrefour@gmail.com", "0404040404", "mdp_carrefour", "Hypermarche", creer_adresse("Brest", "France", "29200", "rue des trucs", creer_coordonnee(90.673271, 135.500000)), "Hypermarch?? de l'autre cot?? de la terre");

	//Creation des clients
	liste_client[nb_client] = creer_client("Dupont", "Pierre", "Duont.pierre@gmail.com", "0606060606",creer_adresse("Brest", "France", "29200", "rue Jean jaures",creer_coordonnee(15.454166, 18.732207)),"mdp_Dupont");

	liste_client[nb_client] = creer_client("Leveque", "Jean", "LevequeJean@gmail.com", "0707070707",creer_adresse("Brest", "France", "29200", "rue de la paix",creer_coordonnee(37.7382,78.3635) ),"mdp_Leveque");

	return &result;
}

int *inscription_1_svc(Partenaire *argp, struct svc_req *rqstp)
{
	static int result;

	/*
	 * insert server code here
	 */

	return &result;
}

int *connexion_1_svc(Connexion_param *argp, struct svc_req *rqstp)
{
	static int result;

	/*
	 * insert server code here
	 */

	return &result;
}

Tab_int *
cln_recherche_partenaire_1_svc(Search_Param *argp, struct svc_req *rqstp)
{
	static Tab_int result;

	/*
	 * insert server code here
	 */

	return &result;
}

Tab_int *
cln_recherche_pannier_1_svc(int *argp, struct svc_req *rqstp)
{
	static Tab_int result;

	/*
	 * insert server code here
	 */

	return &result;
}

int *cln_commande_pannier_1_svc(int *argp, struct svc_req *rqstp)
{
	static int result;

	/*
	 * insert server code here
	 */

	return &result;
}

Tab_int *
cln_historique_commande_1_svc(void *argp, struct svc_req *rqstp)
{
	static Tab_int result;

	/*
	 * insert server code here
	 */

	return &result;
}

int *modifier_profil_1_svc(Change_profil_param *argp, struct svc_req *rqstp)
{
	static int result;

	/*
	 * insert server code here
	 */

	return &result;
}

int *part_ajouter_pannier_1_svc(Pannier *argp, struct svc_req *rqstp)
{
	static int result;

	/*
	 * insert server code here
	 */

	return &result;
}

int *part_modifier_pannier_1_svc(Pannier *argp, struct svc_req *rqstp)
{
	static int result;

	/*
	 * insert server code here
	 */

	return &result;
}

int *part_supprimer_pannier_1_svc(int *argp, struct svc_req *rqstp)
{
	static int result;

	/*
	 * insert server code here
	 */

	return &result;
}

Tab_int *
part_liste_pannier_1_svc(void *argp, struct svc_req *rqstp)
{
	static Tab_int result;

	/*
	 * insert server code here
	 */

	return &result;
}

Tab_int *
cln_reecherche_pannier_1_svc(Coordonnee *argp, struct svc_req *rqstp)
{
	static Tab_int result;

	/*
	 * insert server code here
	 */

	return &result;
}

int *
inscription_1_svc(Partenaire *argp, struct svc_req *rqstp)
{
	static int  result;

	/*
	 * insert server code here
	 */

	return &result;
}

int *
connexion_1_svc(Connexion_param *argp, struct svc_req *rqstp)
{
	static int  result;

	/*
	 * insert server code here
	 */

	return &result;
}

Tab_int *
cln_recherche_partenaire_1_svc(Search_Param *argp, struct svc_req *rqstp)
{
	static Tab_int  result;

	/*
	 * insert server code here
	 */

	return &result;
}

Tab_int *
cln_recherche_pannier_1_svc(int *argp, struct svc_req *rqstp)
{
	static Tab_int  result;

	/*
	 * insert server code here
	 */

	return &result;
}

int *
cln_commande_pannier_1_svc(int *argp, struct svc_req *rqstp)
{
	static int  result;

	/*
	 * insert server code here
	 */

	return &result;
}

Tab_int *
cln_historique_commande_1_svc(void *argp, struct svc_req *rqstp)
{
	static Tab_int  result;

	/*
	 * insert server code here
	 */

	return &result;
}

int *
modifier_profil_1_svc(Change_profil_param *argp, struct svc_req *rqstp)
{
	static int  result;

	/*
	 * insert server code here
	 */

	return &result;
}

int *
part_ajouter_pannier_1_svc(Pannier *argp, struct svc_req *rqstp)
{
	static int  result;

	/*
	 * insert server code here
	 */

	return &result;
}

int *
part_modifier_pannier_1_svc(Pannier *argp, struct svc_req *rqstp)
{
	static int  result;

	/*
	 * insert server code here
	 */

	return &result;
}

int *
part_supprimer_pannier_1_svc(int *argp, struct svc_req *rqstp)
{
	static int  result;

	/*
	 * insert server code here
	 */

	return &result;
}

Tab_int *
part_liste_pannier_1_svc(void *argp, struct svc_req *rqstp)
{
	static Tab_int  result;

	/*
	 * insert server code here
	 */

	return &result;
}

Tab_int *
cln_reecherche_pannier_1_svc(Coordonnee *argp, struct svc_req *rqstp)
{
	static Tab_int  result;

	/*
	 * insert server code here
	 */

	return &result;
}
