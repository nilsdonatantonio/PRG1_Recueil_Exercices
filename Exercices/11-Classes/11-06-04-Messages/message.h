//
// Created by Nils on 05.01.2024.
//

#ifndef PRG1_RECUEIL_EXERCICES_MESSAGE_H
#define PRG1_RECUEIL_EXERCICES_MESSAGE_H

#include <string>
#include <ctime>
#include <vector>

using TextMessage = std::vector<std::string>;

class Message{
public :
    //constructor
    Message(const std::string exp, const std::string dest);

    //member functions
    void ajouter(const std::string text);
    std::string toString(std::string exp, std::string dest, std::time_t date_creation);
    void afficher() const;


private:

    std::string expediteur;
    std::string destinataire;
    const std::time_t date_creation;
    TextMessage message;

};
#endif //PRG1_RECUEIL_EXERCICES_MESSAGE_H
