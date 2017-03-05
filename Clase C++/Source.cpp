#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Carte{
	public:
		char titlu[256];
		char autor[64];
		float pret;
		void arata_titlu(){
			cout << titlu << endl;
		};
		float da_pret(){
			return (pret);
		};
};

void main(){
	Carte capitole;

	strcpy(capitole.titlu, "Jamsa C++ Programmers Bible");
	strcpy(capitole.autor, "Jamsa");
	capitole.pret= 50.00;
	capitole.arata_titlu();
	cout << "Pretul carti este" << setprecision(2) << capitole.da_pret();

	system("pause");
}