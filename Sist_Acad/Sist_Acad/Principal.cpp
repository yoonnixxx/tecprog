#include "Principal.h"

Principal::Principal()
{
	Nicole.Inicializa(27, 07, 2004, "Nicole");

	executar();
}

Principal::~Principal(){}

void Principal::executar()
{ 
	cout << "digite o dia, mes e ano" << endl;
	cin >> diaAT >> mesAT >> anoAT;

	Nicole.CalculaId_imprime(diaAT, mesAT, anoAT);
}
