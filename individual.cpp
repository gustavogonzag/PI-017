#include <iostream>
#include <cmath> // Para a função sqrt
using namespace std;

class Ponto {
private:
    double x;
    double y;

public:
    // Construtor padrão
    Ponto() : x(0.0), y(0.0) {}

    // Construtor com parâmetros para definir as coordenadas
    Ponto(double xCoord, double yCoord) : x(xCoord), y(yCoord) {}

    // Métodos para definir as coordenadas
    void setCoordenadas(double xCoord, double yCoord) {
        x = xCoord;
        y = yCoord;
    }

    // Métodos para obter as coordenadas
    double getX() const {
        return x;
    }

    double getY() const {
        return y;
    }

    // Método para calcular a distância até a origem (0,0)
    double calcularDistanciaOrigem() const {
        return sqrt(x * x + y * y);
    }
};

int main() {
    // Criando objetos da classe Ponto
    Ponto ponto1; // Ponto padrão (0,0)
    Ponto ponto2(3.0, 4.0); // Ponto com coordenadas (3,4)

    // Obtendo e exibindo as coordenadas dos pontos
    cout << "Coordenadas do ponto1: (" << ponto1.getX() << ", " << ponto1.getY() << ")" << endl;
    cout << "Coordenadas do ponto2: (" << ponto2.getX() << ", " << ponto2.getY() << ")" << endl;

    // Calculando e exibindo a distância até a origem
    cout << "Distância até a origem para ponto1: " << ponto1.calcularDistanciaOrigem() << endl;
    cout << "Distância até a origem para ponto2: " << ponto2.calcularDistanciaOrigem() << endl;

    return 0;
}
