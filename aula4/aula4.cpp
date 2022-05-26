#include <iostream>
#include <string>

using namespace std;

int main(){
	
	int numero = 25;
	char letra = 'A';
	//char letras[20];
	double decimal = 9.99999999;
	float decimal_2 = 2.5;
	bool verificacao = true;
	string texto = "Hello World";
	
	cout << "digite um numero:\n";
	cin >> numero;
	cout << "digite uma letra:\n";
	cin >> letra;
	cout << "digite um numero descimal:\n";
	cin >> decimal;
	cout << "digite um texto:\n";
	cin.ignore();
	getline(cin, texto);
	
	cout << numero << "\n";
	cout << letra << "\n";
	cout << decimal << "\n";
	cout << verificacao << "\n";
	cout << texto << "\n";
		
	return numero;
}
