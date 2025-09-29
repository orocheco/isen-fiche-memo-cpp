#include <iostream>

#include "src/Etudiant.h"

int nbNotes = 10;


Etudiant* all_in_one() {

    // création d'une instance avec allocation dynamique
    Etudiant* paul = new Etudiant("Paul", nbNotes);

    // affichage via accesseur
    std::cout << paul->getPrenom() << std::endl;
    for (int i = 0; i < nbNotes; i++) {
        std::cout << paul->getNote(i) << " ";
    }
    std::cout << std::endl;

    // constructeur de copie
    Etudiant mary = *paul;

    // on affiche le prénom de Mary
    std::cout << mary.getPrenom() << std::endl;

    mary.setPrenom("Mary"); // on change le prénom
    mary.toString(); // on affiche Mary
    paul->setNote(2, 19);  // on modifie la note de Paul
    paul->toString(); // on affiche Paul
    // ------------------------------------------------------------------------------
    // uncomment le constructeur de copie
    // ------------------------------------------------------------------------------
    mary.toString();  // sans constructeur de copie, la note de Mary serait aussi modifiée !

    // initialisation avec les accolades
    Etudiant louise { "Louise", 20 };

    louise.toString();

    // allocation des tableaux
    int nbEtudiants = 13;
    Etudiant* etudiants = new Etudiant[nbEtudiants]
    { { "Paul"}, { "Marie", 10}, /*{ "Louise", 10} */};
   // {};
    for (int i = 0; i < nbEtudiants; i++) {
        std::cout << etudiants[i].getPrenom() << " ";
    }
    std::cout << std::endl;

    std::cout << "nombre d'étudiants: " << Etudiant::getNbEtudiants() << std::endl;


    // libère le tableau (appelle le destructeur de chaque élément)
    delete[] etudiants;

    std::cout << "nombre d'étudiants: " << Etudiant::getNbEtudiants() << std::endl;

    return  paul;
}

int main() {

    auto paul = all_in_one();

    paul->toString();

    // on libère Paul
    delete paul;
    return 0;
}
