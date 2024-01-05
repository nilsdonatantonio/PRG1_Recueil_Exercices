//
// Created by Nils on 05.01.2024.
//
#include <cstdlib>
#include "message.h"

using namespace std;

int main() {
    Message msg("Pierre Burki", "Alfred Strohmeier");
    msg.ajouter("Cher ami,");
    msg.ajouter("RDV demain a 9h.");
    msg.ajouter("Meilleures salutations.");

    msg.ajouter("\nPierre");
    msg.afficher(); // ou cout << msg.toString();
    return EXIT_SUCCESS;
}