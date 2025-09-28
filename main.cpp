#include <iostream>

#include "src/Etudiant.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    int nbNotes = 10;



    Etudiant* paul = new Etudiant("Paul", nbNotes);

    std::cout << paul->getPrenom() << std::endl;

    for (int i = 0; i < nbNotes; i++) {
        std::cout << paul->getNote(i) << " ";
    }

    std::cout << std::endl;

    Etudiant mary = *paul;
    mary.setPrenom("Mary");
    std::cout << mary.getPrenom() << std::endl;



    for (int i = 0; i < nbNotes; i++) {
        std::cout << mary.getNote(i) << " ";
    }

    std::cout << std::endl;

    paul->setNote(2, 19);

    std::cout << paul->getPrenom() << std::endl;

    for (int i = 0; i < nbNotes; i++) {
        std::cout << paul->getNote(i) << " ";
    }

    std::cout << std::endl;

    std::cout << mary.getPrenom() << std::endl;

    for (int i = 0; i < nbNotes; i++) {
        std::cout << mary.getNote(i) << " ";
    }

    std::cout << std::endl;

    Etudiant louise { "Louise", 20 };

    std::cout << louise.getPrenom() << std::endl;

    for (int i = 0; i < 20; i++) {
        std::cout << louise.getNote(i) << " ";
    }

    std::cout << std::endl;


    delete paul;
    return 0;
}
