//
// Created by orocheco on 28/09/2025.
//

#include "Etudiant.h"

int Etudiant::_nbEtudiants = 0;

Etudiant::Etudiant() : _nbNotes(0) {
    Etudiant::_nbEtudiants++;
}

Etudiant::Etudiant(std::string const &p, const int nbNotes) :
    _prenom(p), _nbNotes(nbNotes), _notes(new int[nbNotes]{0})
{

    for (int i = 0; i < nbNotes; i++) {
        _notes[i] = i;
    }

    Etudiant::_nbEtudiants++;
}

Etudiant::~Etudiant() {
    delete[] _notes;

    Etudiant::_nbEtudiants--;
}


/*
 Etudiant::Etudiant(Etudiant const &e) {

    Etudiant::_nbEtudiants++;
     _prenom = e._prenom;
    _nbNotes = e._nbNotes;
    _notes = new int[_nbNotes];

    if (e._notes != nullptr) {
        for (int i = 0; i < _nbNotes; i++) {
            _notes[i] = e._notes[i];
        }
    }
 }
 */

void Etudiant::toString() const {
    std::cout << _prenom << std::endl;
    for (int i = 0; i < _nbNotes; i++) {
        std::cout << _notes[i] << " ";
    }
    std::cout << std::endl;
}