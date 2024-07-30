#include "Pessoa.h"


Pessoa::Pessoa(int diaNa, int mesNa, int anoNa, const char* nomeP) {
	Inicializa(diaNa, mesNa, anoNa, nomeP);
}
Pessoa::Pessoa() { Inicializa(0, 0, 0, ""); }

Pessoa::~Pessoa(){}

void Pessoa::Inicializa(int diaNa, int mesNa, int anoNa, const char* nomeP)
{
	dia = diaNa;
	mes = mesNa;
	ano = anoNa;
	strcpy_s(nome, nomeP);
	idade = -1;
}


void Pessoa::CalculaIdade(int diaAt, int mesAt, int anoAt)
{
	idade = anoAt - ano;

	if ((mesAt < mes) || (mes == mesAt && dia > diaAt)) {idade -= 1;}
}

void Pessoa::Imprime() {cout << "A idade de " << nome << " seria " << idade << endl;}

void Pessoa::CalculaId_imprime(int diaAt, int mesAt, int anoAt)
{
	CalculaIdade(diaAt, mesAt, anoAt);
	Imprime();
}

