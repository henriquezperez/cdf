#include <iostream>
#include "Operaciones.h"
#include "TablasDeMultiplicar.h"

using namespace std;

int main(int argc, char** argv) {
	Operaciones op;
	int res = op.Multilicacion(5,4);
	cout<<"La multiplicacion es: "<<res;
	system("pause");
	cout<<"Programa terminado!";
	return 0;
}


