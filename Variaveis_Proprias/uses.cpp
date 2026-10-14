#include <iostream>
#include "basic.hpp"
#include "basic_string.hpp"

int main() {
	// Usa a class vulue:
	stp::vulue<int> numero; // viu? conseguios criar vazio

	numero = 10; // definimos um numero
	std::cout << numero.print() << "\n"; // printamos o numero

	numero = 10 + 10;
	std::cout << numero.print() << "\n";

	numero = 10 - 10;
	std::cout << numero.print() << "\n";

	numero = 10 * 10;
	std::cout << numero.print() << "\n";

	numero = 10 / 2;
	std::cout << numero.print() << "\n";

	// USando a class b_string
	stp::b_string valor_em_TEXTO;
	std::string a = "Bem";

	valor_em_TEXTO = "Ola meu nome eh isllan e voces?";
	std::cout << valor_em_TEXTO.print() << "\n";

	valor_em_TEXTO = "Ola, voces estao " + a;
	std::cout << valor_em_TEXTO.print() << "?" << "\n";
	return 0;
}