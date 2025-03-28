#include "Serie.hpp"

int main(int argc, char const *argv[])
{
    Serie serieNavidenia;

    serieNavidenia.EncenderTodo();
    serieNavidenia.Imprimir();
    serieNavidenia.ApagarCantidad(5);
    serieNavidenia.Imprimir();
    serieNavidenia.ApagarTodo();
    serieNavidenia.Imprimir();
    return 0;
};

