// Esse aqui completa o Basic, mas dessa vez, apenas String e nao template
// Como eu nao sei juntar const char* com const char* , eu decidir usar uma biblioteca string
// Criei funções basicas, basiconas MESMO
// Auto: Isllan
// Quanto mais adicionar, melhor, apenas nao complique o codigo

#ifndef basic_string_hpp
#define basic_string_hpp
#include <string>

namespace stp {
	class b_string {
	private:
		std::string _valorEm_texto;

	public:

		b_string() {
			_valorEm_texto = "";
		}

		b_string& operator=(const std::string& texto) {
			_valorEm_texto = texto;
			return *this;
		}

		b_string& operator+(const std::string& txto_Junta) {
			// AQUI NAO PODEMOS DEVOLVER O OBJETO ATUAL
			b_string valor_retornar;
			valor_retornar = _valorEm_texto + txto_Junta;
			return valor_retornar;
		}

		std::string print() const {
			return _valorEm_texto;
		}
	};
}

#endif