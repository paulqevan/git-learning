def calculer_prix_ttc(prix_ht, taux):
    if prix_ht < 0 or (taux < 0 or taux > 1):
        raise ValueError("Le prix doit être positif et le taux compris entre 0 et 1")
    return round(prix_ht * (1 + taux), 2)
