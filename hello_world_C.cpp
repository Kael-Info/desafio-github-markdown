#include <stdio.h>
#include <locale.h>
#include <iostream>
using namespace std;
int main() {
	char idioma;
	setlocale(LC_ALL,"Portuguese");
	setlocale(LC_ALL,"Spanish");
	printf("Inglês/English/Inglés(I), Português/Portuguese/Portugués(P) ou Espanhol/Spanish/Español(E)? ");
	scanf("%c",&idioma);
	if (idioma == 'I' || idioma == 'i') {
		// em C
		printf("(In C)\n");
	    printf("Hello, World!\n");
	    // em C++
	   cout << endl << "(In C++)" << endl;
	   cout << "Hello, World!" << endl; 
	} else if (idioma == 'P' || idioma == 'p') {
		// em C
		printf("(Em C)\n");
		printf("Olá, Mundo!\n");
		// em C++
	    cout << endl << "(Em C++)" << endl;
	    cout << "Olá, Mundo!";
	} else if(idioma == 'E' || idioma == 'e') {
		//em C
		printf("(Em C)\n");
		printf("¡Hola, Mundo!\n");
		// em C++
		cout << "Em C++" << endl;
		cout << "¡Hola, Mundo!";
