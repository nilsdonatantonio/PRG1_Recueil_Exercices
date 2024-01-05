cmake_minimum_required(VERSION 3.26)
project(PRG1_Recueil_Exercices)

set(CMAKE_CXX_STANDARD 20)

add_executable(01-04-Date_Personne
        Exercices/07-Structure_Enum/01-04-Date_Personne.cpp)

add_executable(01-05-est_bissextile
        Exercices/07-Structure_Enum/01-05-est_bissextile.cpp)

add_executable(01-06-Nombre_jours_entre_2_dates
        Exercices/07-Structure_Enum/01-06-Nombre_jours_entre_2_dates.cpp)

add_executable(03-03-Deplacer_point
        Exercices/07-Structure_Enum/03-03-Deplacer_point.cpp)

add_executable(03-04-Chiffre_en_toute_lettre
        Exercices/07-Structure_Enum/03-04-Chiffre_en_toute_lettre.cpp)

add_executable(03-05-Coordonnees_GPS Exercices/07-Structure_Enum/03-05-Coordonnees_GPS.cpp)
add_executable(03-01-Milieu-chaine-caractere Exercices/08-Chaines-de-caracteres/03-01-Milieu-chaine-caractere.cpp)
add_executable(03-02-Chiffres_romains Exercices/08-Chaines-de-caracteres/03-02-Chiffres_romains.cpp)
add_executable(03-03-Analyse_nombre_entier Exercices/08-Chaines-de-caracteres/03-03-Analyse_nombre_entier.cpp)
add_executable(03-04-Nom_acronyme Exercices/08-Chaines-de-caracteres/03-04-Nom_acronyme.cpp)
add_executable(03-05-Palindrome Exercices/08-Chaines-de-caracteres/03-05-Palindrome.cpp)
add_executable(04-02-Compter_occurences Exercices/08-Chaines-de-caracteres/04-02-Compter_occurences.cpp)
add_executable(01-06-Calcul_vectoriel Exercices/09-Tableaux/01-06-Calcul_vectoriel.cpp
        Exercices/09-Tableaux/01-08-Jour.cpp)
add_executable(02-07-Rendre_unique Exercices/09-Tableaux/02-07-Rendre_unique.cpp)
add_executable(03-07-Recherche_dichotomique Exercices/09-Tableaux/03-07-Recherche_dichotomique.cpp)
add_executable(01-07-Stack Exercices/09-Tableaux/01-07-Stack.cpp)
add_executable(01-08-Jour Exercices/09-Tableaux/01-08-Jour.cpp)
add_executable(02-03-To_string Exercices/09-Tableaux/02-03-To_string.cpp)
add_executable(02-04-Rotate_right Exercices/09-Tableaux/02-04-Rotate_right.cpp)
add_executable(02-05-Supprimer_elements_centraux Exercices/09-Tableaux/02-05-Supprimer_elements_centraux.cpp)
add_executable(02-06-Supprimer_valeur Exercices/09-Tableaux/02-06-Supprimer_valeur.cpp)
add_executable(02-08-Moyenne_notes Exercices/09-Tableaux/02-08-Moyenne_notes.cpp)
add_executable(03-02-To_string Exercices/09-Tableaux/03-02-To_string.cpp)
add_executable(03-03-Remplacement_valeur Exercices/09-Tableaux/03-03-Remplacement_valeur.cpp)
add_executable(03-04-Span_croissant Exercices/09-Tableaux/03-04-Span_croissant.cpp)
add_executable(03-05-Ensemble Exercices/09-Tableaux/03-05-Ensemble.cpp)
add_executable(03-06-Ensemble_trie Exercices/09-Tableaux/03-06-Ensemble_trie.cpp)
add_executable(04-01-Matrice_vecteur Exercices/09-Tableaux/04-01-Matrice_vecteur.cpp)
add_executable(04-02-Tableau_2d_caractere Exercices/09-Tableaux/04-02-Tableau_2d_caractere.cpp)
add_executable(05-01-Factorielle Exercices/04-Fonctions/05-01-Factorielle.cpp)
add_executable(05-02-Fibonacci Exercices/04-Fonctions/05-02-Fibonacci.cpp)
add_executable(01-01-Ecriture_dans_un_fichier Exercices/05-Flux/01-01-Ecriture_dans_un_fichier.cpp)
add_executable(01-02-Lecture_et_ajout_dans_un_fichier Exercices/05-Flux/01-02-Lecture_et_ajout_dans_un_fichier.cpp)
add_executable(02-01-Redirection_cin Exercices/05-Flux/02-01-Redirection_cin.cpp)
add_executable(03-02-Formattage_infos_etudiants Exercices/05-Flux/03-02-Formattage_infos_etudiants.cpp)
add_executable(11-01-01-Structure_Point Exercices/11-Classes/11-01-01-Structure_Point.cpp)
add_executable(11-02-01-Point Exercices/11-Classes/11-02-01-Point.cpp)
add_executable(11-03-01-Point_avec_constructeur Exercices/11-Classes/11-03-01-Point_avec_constructeur.cpp)
add_executable(11-03-02-Point_avec_limites Exercices/11-Classes/11-03-02-Point_avec_limites.cpp)
add_executable(11-03-03-Pays Exercices/11-Classes/11-03-03-Pays.cpp)
add_executable(11-03-04-Robot Exercices/11-Classes/11-03-04-Robot.cpp)
add_executable(11-04-01-Point_avec_operateur Exercices/11-Classes/11-04-01-Point_avec_operateur.cpp)
add_executable(11-04-02-Surcharge_des_operateurs Exercices/11-Classes/11-04-02-Surcharge_des_operateurs.cpp)
add_executable(11-05-01-Point_avec_identifiant_unique Exercices/11-Classes/11-05-01-Point_avec_identifiant_unique.cpp)
add_executable(11-05-02-Voitures Exercices/11-Classes/11-05-02-Voitures.cpp)
add_executable(11-06-04-Messages Exercices/11-Classes/11-06-04-Messages/11-06-04-Messages.cpp
        Exercices/11-Classes/11-06-04-Messages/message.h
        Exercices/11-Classes/11-06-04-Messages/message.cpp)
