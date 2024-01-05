//
// Created by Nils on 04.01.2024.
//
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <iostream>

using namespace std;

class Voiture{
private:
    int capacite_reservoir;
    double consommation_moy;
    double nbr_litre_ds_reservoir;

public:
    static double prix_essence;

    //constructor
    Voiture(int capa_r, double conso_moy, double l_restant);

    //getter
    static double getPrixEssence() {return prix_essence;}
    int getCapactieReservoir() const {return capacite_reservoir;}
    double getConsommationMoyenne() const {return consommation_moy;}
    double getNbrLitreRestant() const {return nbr_litre_ds_reservoir;}


    //setter
    static void setPrixEssence(double nouveau_prix) {prix_essence = nouveau_prix;}

    //member functions
    double effectuerTrajet(int dist);


};

double Voiture::prix_essence = 1.7;

Voiture::Voiture(int capa_r, double conso_moy, double l_restant = 0) : capacite_reservoir(capa_r), consommation_moy(conso_moy), nbr_litre_ds_reservoir(l_restant) {
    nbr_litre_ds_reservoir = capa_r;
}

void afficherPrixEssence(double prix_essence){
    cout << "Prix de l'essence : " << prix_essence << " Frs" << endl;
}

void afficherVoiture(const Voiture& v){
    cout << "Capacite du reservoir [l] : " << v.getCapactieReservoir() << "\n"
    << "Consommation moyenne [l/100km] : " << v.getConsommationMoyenne() << "\n"
    << "Nb litres restants : " << v.getNbrLitreRestant() << endl;

}

void afficherCoutTrajet(double cout_trajet){
    cout << "Cout du trajet : " << cout_trajet << " Frs" << endl;
}

double Voiture::effectuerTrajet(int dist) {
    double conso_trajet = (consommation_moy/100) * dist;
    double prix_trajet = conso_trajet * prix_essence;

    nbr_litre_ds_reservoir -= conso_trajet;
    while(nbr_litre_ds_reservoir <= 0){
        nbr_litre_ds_reservoir += capacite_reservoir;
    }

    return prix_trajet;
}

int main() {

    afficherPrixEssence(Voiture::getPrixEssence());

    Voiture::setPrixEssence(1.95);
    afficherPrixEssence(Voiture::getPrixEssence());

    Voiture v(52, 6.7);

    afficherVoiture(v);
    afficherCoutTrajet(v.effectuerTrajet(1000));
    afficherVoiture(v);
    afficherCoutTrajet(v.effectuerTrajet(200));
    afficherVoiture(v);

    return EXIT_SUCCESS;
}