#include <iostream>
#include <string>

using namespace std;

// Fonction pour échanger deux entiers en utilisant des pointeurs
void swapString(string& a,string& b) {
    string swap = &a;
    &a = &b;
    &b = swap;
}
int main() {
    string chaine1, chaine2;

    cout << "Entrez le premier entier : ";
    cin >> chaine1;

    cout << "Entrez le deuxième entier : ";
    cin >> chaine2;

    cout << "Avant l'échange : Chaine 1 = " << chaine1 << ", Chaine 2 = " << chaine2 << endl;

    // Appel de la fonction echangeEntiers en passant les adresses de num1 et num2
    swapString(&chaine1, &chaine2);

    cout << "Après l'échange : Chaine 1 = " << chaine1 << ", Chaine 2 = " << chaine2 << endl;
    return 0; }



// Main function of the C++ program.

#include <iostream>
#include <string>

using namespace std; // Ajout de l'instruction using namespace std

class Livre {
private:
    string titre;
    string auteur;
    int numeroIdentification;
    bool disponible;

public:
    // Constructeur
    Livre(string t, string a, int id) : titre(t), auteur(a), numeroIdentification(id), disponible(true) {}

    // Méthode pour vérifier si le livre est disponible
    bool estDisponible() {
        return disponible;
    }

    // Méthode pour emprunter le livre
    void emprunter() {
        if (disponible) {
            disponible = false;
            cout << "Le livre \"" << titre << "\" a été emprunté." << endl;
        } else {
            cout << "Le livre \"" << titre << "\" n'est pas disponible pour l'emprunt." << endl;
        }
    }

    // Méthode pour retourner le livre
    void retourner() {
        if (!disponible) {
            disponible = true;
            cout << "Le livre \"" << titre << "\" a été retourné." << endl;
        } else {
            cout << "Le livre \"" << titre << "\" est déjà disponible." << endl;
        }
    }
};

int main() {
    // Exemple d'utilisation de la classe Livre
    Livre monLivre("Le Seigneur des Anneaux", "J.R.R. Tolkien", 12345);

    cout << "Le livre est disponible : " << monLivre.estDisponible() << endl;

    monLivre.emprunter();
    cout << "Le livre est disponible : " << monLivre.estDisponible() << endl;

    monLivre.retourner();
    cout << "Le livre est disponible : " << monLivre.estDisponible() << endl;

    return 0;
}

