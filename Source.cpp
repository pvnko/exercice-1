#include <iostream>

int main() {
	std::string nom;
	int age;
	double salaire;

	std::cout << "Saisir prenom ";
	std::cin >> nom;

	std::cout << "Saisir age ";
	std::cin >> age;

	std::cout << "Quel est votre salaire ";
	std::cin >> salaire;


	std::cout << " \nBonjour " << nom << " ," << age << " ans est un bel age pour un salaire de " << salaire << " euros par mois " << std::endl;

	return 0;
}