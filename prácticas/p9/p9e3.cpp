#include <iostream>
#include <array>

using namespace std;

// Constantes:
const int MAX = 101; // Si el grado máximo es 100 son 101 para el término independiente

typedef array<double, MAX> TPolinomio;

void inicializar(TPolinomio &p){
	for(int i = 0; i < MAX; i++)
		p[i] = 0;
}

void leer(TPolinomio &p){
	int grado;
	double coef;

	inicializar(p);
	cout << "Grado: ";
	cin >> grado;
	while(grado >= 0){
		cout << "Coef: ";
		cin >> coef;
		p[grado] += coef;
		
		cout << "Grado: ";
		cin >> grado;
	}
}

void escribir(const TPolinomio &p){
	cout << "P(x) = ";
	if(p[0] != 0) cout << p[0] << " ";

	for(int i = 1; i < MAX; i++){
		if(p[i] != 0){
			if(p[i] > 0) cout << "+ " << p[i];
			else cout << "- " << -1*p[i];
			cout << "x";
			if(i > 1) cout << "^" << i;
			cout << " ";
		}
	}			
	cout << endl;
}

double evaluar(const TPolinomio &p, double valor){
	double x = 1;
	double p_x = 0;
	for(int i = 0; i < MAX; i++){
		p_x += x*p[i];
		x *= valor;
	}
	return p_x;
}

int grado(const TPolinomio &p){
	int grado = -1;
	for(int i = 0; i < MAX; i++)
		if(p[i] != 0) grado  = i;

	return grado;
}

void derivada(const TPolinomio &p, TPolinomio &d){
	inicializar(d);
	for(int i = 0; i < MAX-1; i++)
		d[i] = p[i+1]*(i+1);
}

int main(){
	TPolinomio p, d;
	
	cout << "Indique el polinomio: ";
	leer(p);
	cout << "Polinomio leido: ";
	escribir(p);

	int x;
	cout << "Valor de x: ";
	cin >> x;
	cout << "P(" << x << ") = " << evaluar(p, x) << endl;
	cout << "EL grado del polinomio es " << grado(p) << endl;

	derivada(p, d);
	cout << "La derivada del polinomio es: P(x)' = ";
	escribir(d);

	return 0;
}
