#include <iostream>

using namespace std;

class Numero
{
public:
  int valor;
  Numero(int valor)
  {
    this->valor = valor;
  }

  Numero operator+(Numero n2)
  {
    return Numero(this->valor + n2.valor);
  }
};

int main()
{
  Numero n1(10);
  Numero n2(20);
  Numero n3(30);
  Numero n4(40);
  Numero n5(50);
  cout<< (n1 + n2 + n3 + n4 + n5).valor <<endl;
}