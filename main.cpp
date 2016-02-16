#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	cout << "1 pomoc" << endl;
	cout << "2 wypozyczenie" << endl;
	cout << "3 zwrot" << endl;
	cout << "4 prolongata" << endl;
	cout << "5 wyszukaj" << endl << endl;
	cout << "Wybierz: ";
	
	string Odpowiedz="";
	
	cin >> Odpowiedz;
	if (Odpowiedz=="1") {
		cout << "Tu bedzie pomoc" << endl;
	}
	
	else if (Odpowiedz=="2") {
		cout << "Tu bedzie wypozyczanie" << endl;
	}	
	
		else if (Odpowiedz=="3") {
		cout << "Tu bedzie zwrot" << endl;
	}	
	else if (Odpowiedz=="4") {
		cout << "Tu bedzie prolongata" << endl;
	}
		else if (Odpowiedz=="5") {
		cout << "Tu bedzie wyszukaj" << endl;
	}
	else {
		cout << "Zdecyduj sie" << endl;
		return 1;
	}
	return 0;
}
