using namespace std;

class Contador
{
    private:
    int valor;
    int valorInicial;

    public:
    Contador(int valor);
    Contador() =  default;
    int Incrementar(int valor);
    int Decrementar(int valor);
    int getValor();
};