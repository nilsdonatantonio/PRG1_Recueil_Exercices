//
// Created by enigma on 05.01.24.
//
#include "message.h"
#include <iostream>

Message::Message(const std::string exp, const std::string dest) : expediteur(exp), destinataire(dest), date_creation(time(NULL)){}

void Message::ajouter(const std::string& text) {
    message.push_back(text);
}

std::string Message::toString() const {
    const std::string FORMAT = "%d.%m.%Y %X";
    char buffer[256];
    std::strftime(buffer, sizeof (buffer), FORMAT.c_str(), localtime(&date_creation));
    std::string str = "From : " + expediteur + "\n"
                    + "To   : " + destinataire + "\n"
                    + "Date : " + buffer + "\n" + "\n";

    for(const std::string& s : message){
        str += s + "\n";
    }
    return str;
}

void Message::afficher() const {
    std::cout << toString();
}
