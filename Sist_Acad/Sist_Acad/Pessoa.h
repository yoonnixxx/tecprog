#pragma once
#include "stdafx.h"

class Pessoa
{
private:
	int dia, mes, ano, idade;
	char nome[50];
public:
	Pessoa(int diaNa, int mesNa, int anoNa, const char* nomeP);
	Pessoa();
	~Pessoa();
	void Inicializa(int diaNa, int mesNa, int anoNa, const char* nomeP);
	void CalculaIdade(int diaAt, int mesAt, int anoAt);
	void Imprime();
	void CalculaId_imprime(int diaAt, int mesAt, int anoAt);
};