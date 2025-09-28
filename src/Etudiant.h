//
// Created by orocheco on 28/09/2025.
//

#ifndef FICHE_MEMO_ETUDIANT_H
#define FICHE_MEMO_ETUDIANT_H
#include <iostream>

#include <ostream>
#include <string>


/**
 * @class Etudiant
 * @brief La classe Etudiant de la fiche mémo
 * @author O. Rochecouste
 */

class Etudiant {
private:
    /// L'attribut _prenom est masqué.
    std::string _prenom;
    /// Nombre de notes
    int _nbNotes;
    /// Liste des notes (équivalent à int* _notes{})
    int* _notes = nullptr;

public:
    /// Suppression du constructeur par défaut.
    Etudiant() = delete;
    /// Surcharge du constructeur.
    Etudiant(std::string const& p, const int nbNotes = 10 );
    /// Constructeur de copie
    Etudiant(Etudiant const& e);

    /// Accesseur pour _prenom
    const std::string& getPrenom() const { return _prenom; }
    /// Mutateur pour _prenom
    void setPrenom(const std::string& p) { _prenom = p; }

    int getNote(const int i) const {
        if (i < _nbNotes) return _notes[i];
        return -1;
    }

    void setNote(const int i, const int note) {
        if (i < _nbNotes) _notes[i] = note;
    }

};


#endif // FICHE_MEMO_ETUDIANT_H
