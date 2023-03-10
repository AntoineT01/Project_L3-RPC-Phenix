/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "phenix.h"

bool_t
xdr_Coordonnee (XDR *xdrs, Coordonnee *objp)
{
	register int32_t *buf;

	 if (!xdr_int (xdrs, &objp->x))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->y))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_Adresse (XDR *xdrs, Adresse *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_vector (xdrs, (char *)objp->ville, 50,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->pays, 50,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->code_Postal, 5,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->rue, 100,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_Coordonnee (xdrs, &objp->Coordonnee))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_Date (XDR *xdrs, Date *objp)
{
	register int32_t *buf;

	 if (!xdr_int (xdrs, &objp->jour))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->mois))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->annee))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_Produit (XDR *xdrs, Produit *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_vector (xdrs, (char *)objp->nom, 50,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->categorie, 50,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->description, 100,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->specificite, 50,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->quantite))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_Pannier (XDR *xdrs, Pannier *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_int (xdrs, &objp->id))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->nom, 50,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->categorie, 50,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->specialite, 50,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->description, 100,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->prix))
		 return FALSE;
	 if (!xdr_Date (xdrs, &objp->date_ajout))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->heure_recuperation, 11,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_char (xdrs, &objp->etat))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->liste_produit, 5,
		sizeof (Produit), (xdrproc_t) xdr_Produit))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->nb_produit))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_Commande (XDR *xdrs, Commande *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_int (xdrs, &objp->numero))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->commentaire, 200,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->prix))
		 return FALSE;
	 if (!xdr_Date (xdrs, &objp->date_commande))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->etat, 10,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->liste_pannier, 100,
		sizeof (Pannier), (xdrproc_t) xdr_Pannier))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->nb_pannier))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_Partenaire (XDR *xdrs, Partenaire *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_vector (xdrs, (char *)objp->nom, 50,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->email, 100,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->telephone, 10,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->mdp, 256,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->categorie, 50,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_Adresse (xdrs, &objp->adresse))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->description, 100,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->liste_pannier, 100,
		sizeof (Pannier), (xdrproc_t) xdr_Pannier))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->nb_pannier))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_Client (XDR *xdrs, Client *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_vector (xdrs, (char *)objp->nom, 50,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->prenom, 50,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->email, 100,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->telephone, 10,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_Adresse (xdrs, &objp->adresse))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->mdp, 256,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->liste_commande, 100,
		sizeof (Commande), (xdrproc_t) xdr_Commande))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->partenaire_favorit, 100,
		sizeof (Partenaire), (xdrproc_t) xdr_Partenaire))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->nb_commande))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->nb_partenaire_favorit))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_Gestionnaire (XDR *xdrs, Gestionnaire *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_vector (xdrs, (char *)objp->nom, 50,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->prenom, 50,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->email, 100,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->telephone, 10,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->mdp, 256,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_Search_Param (XDR *xdrs, Search_Param *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_vector (xdrs, (char *)objp->type_recherche, 50,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->parametre, 50,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_Connexion_param (XDR *xdrs, Connexion_param *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_vector (xdrs, (char *)objp->email, 100,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->mdp, 256,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_Change_pannier_param (XDR *xdrs, Change_pannier_param *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_int (xdrs, &objp->id))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->info_a_modifier, 50,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->parametre, 50,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_Change_profil_param (XDR *xdrs, Change_profil_param *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_vector (xdrs, (char *)objp->info_a_modifier, 50,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->parametre, 100,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_Tab_int (XDR *xdrs, Tab_int *objp)
{
	register int32_t *buf;

	int i;

	if (xdrs->x_op == XDR_ENCODE) {
		buf = XDR_INLINE (xdrs, ( 100 ) * BYTES_PER_XDR_UNIT);
		if (buf == NULL) {
			 if (!xdr_vector (xdrs, (char *)objp->tab, 100,
				sizeof (int), (xdrproc_t) xdr_int))
				 return FALSE;
		} else {
			{
				register int *genp;

				for (i = 0, genp = objp->tab;
					i < 100; ++i) {
					IXDR_PUT_LONG(buf, *genp++);
				}
			}
		}
		return TRUE;
	} else if (xdrs->x_op == XDR_DECODE) {
		buf = XDR_INLINE (xdrs, ( 100 ) * BYTES_PER_XDR_UNIT);
		if (buf == NULL) {
			 if (!xdr_vector (xdrs, (char *)objp->tab, 100,
				sizeof (int), (xdrproc_t) xdr_int))
				 return FALSE;
		} else {
			{
				register int *genp;

				for (i = 0, genp = objp->tab;
					i < 100; ++i) {
					*genp++ = IXDR_GET_LONG(buf);
				}
			}
		}
	 return TRUE;
	}

	 if (!xdr_vector (xdrs, (char *)objp->tab, 100,
		sizeof (int), (xdrproc_t) xdr_int))
		 return FALSE;
	return TRUE;
}
