#include <iostream>
#include <string>
#include <vector>
#include "nombre.h"
#include <fstream>

using namespace std;

int main ()
{
	vector <nombre> liste;

	float number;
	int option;

	start:

	cout << "1-Ajouter un réel" << endl;
	cout << "2-Afficher la liste des réels" << endl;
	cout << "3-Supprimer le premier réel ayant une valeur donnée" << endl;
	cout << "4-Supprimer tous les réels ayant une valeur donnée" << endl;
	cout << "5-Quitter" << endl;
	cin >> option;

	switch (option)
	{
	case 1 :{
		ofstream f_nombres;
		f_nombres.open("liste.txt");

		for (int i = 0; i < 1; i++) {
		cout << "Entrez un réel" << endl;
		cin >> number;

		liste.push_back(nombre());
		liste[i].nombres = number;

		f_nombres << liste[i].nombres << " " << endl;
		}
		f_nombres.close();

		cout << "Votre valeur a été ajoutée dans la liste" << endl;

		goto start;
	break;}
	case 2 :{
		for (int i = 0; i < liste.size(); i++) {
			cout << liste[i].nombres << " " << endl;
		}

	break;}
	case 3 :{
		cout << "Entrez le réel que vous voulez supprimer" << endl;
		cin >> number;

		for (int i = 0; i < liste.size(); i++) {
			if (number == liste[i].nombres) {
				liste.erase (liste.begin());
				cout << number << " a été supprimé de la liste" << endl;
			}
		}

		goto start;
	break;}
	case 4 :{
		cout << "Entrez le réel que vous voulez supprimer" << endl;

		goto start;
	break;}
	case 5 :{
		goto end;
		end:

		return 0;
	break;}
	}

}
