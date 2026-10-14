// Ola, novamente
// Essa aqui é a base da bibioteca, onde se pode ajustar tais modos(nao sei como fala
// Com certeza esse codigo podera haver erros classicos e eu vou consultar a IA umas 100 vezes
// Afinal, sou pessimo de memoria e por favor, nao complique o codigo mais complicado
// Auto: Isllan Farinha

#ifndef basic_hpp
#define basic_hpp

namespace stp {
	// Aqui criaremos a primeira Biblioteca principal, que é de templates
	template <typename Tv>
	// Essa aqui se baseia em valores e nao textos
	// Recomendado para numeros e etc e nao tem suporte a textos
	class vulue {
	private:
		Tv _valor; // Criamos uma variavel template que é valor, essa variavei sera substiuida pelo valor real que o usuario colocar
		
	public:

		vulue() {
			_valor = Tv(); // Isso aqui usamos para que a variavel possa ser criada vazia
		}

		vulue& operator=(const Tv& new_valor) { // Aqui novamente o Tv sera substituido pelo valor real atribuido
			_valor = new_valor;
			return *this; // Demos retornar o objeto atual(que é a variavel)
		}

		vulue& operator+(const Tv& valor_add) {
			vulue r; // devemos criar um nova variavel TEMP para que nosso objeto atual nao seja alterado
			r._valor = _valor + valor_add;
			return r; // retornar o objeto TEMP
		}

		vulue& operator-(const Tv& valor_sub) {
			vulue r;
			r._valor = _valor - valor_sub;
			return r;
		}

		vulue& operator*(const Tv& valor_multi) {
			vulue r;
			r._valor = _valor * valor_multi;
			return r;
		}

		vulue& operator/(const Tv& valor_div) {
			vulue r;
			r._valor = _valor / valor_div;
			return r;
		}


		Tv print() const { // aqui criaos uma função que vai retornar o _valor de acordo com o que ele é
			return _valor;
		}

		// FEITO
		// se puderem adicionar mais coisas
		// ACEITO 100%
		// so nao complique o codigo, pela mor de Deus
		// nem eu entendo o que eu escrevo, parece grego
		// normal?
	};
}

#endif