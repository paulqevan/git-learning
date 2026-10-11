from calcul import calculer_prix_ttc
import pytest


def test_calculer_prix_standard():
    assert calculer_prix_ttc(100, 0.2) == 120


def test_calculer_prix_gratuit():
    assert calculer_prix_ttc(0, 0.2) == 0


def test_calculer_taux_zero():
    assert calculer_prix_ttc(100, 0) == 100


def test_prix_negatif_erreur():
    with pytest.raises(ValueError):
        calculer_prix_ttc(-50, 0.2)


def test_taux_negatif_erreur():
    with pytest.raises(ValueError):
        calculer_prix_ttc(100, -0.2)


def test_taux_sup_un():
    with pytest.raises(ValueError):
        calculer_prix_ttc(100, 1.2)
