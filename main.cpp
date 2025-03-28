#include "Serie.hpp"
#include <ftxui/screen/screen.hpp>
#include <ftxui/dom/elements.hpp>
using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{

    auto pantalla = Screen::Create(
        Dimension::Full(),
        Dimension::Full()
    );

    auto documento = vbox(
        spinner(21,1)
    );

    Render(pantalla,documento);
    pantalla.Print();


    //Serie serieNavidenia;

    //serieNavidenia.EncenderTodo();
    //serieNavidenia.Imprimir();
    //serieNavidenia.ApagarCantidad(5);
    //serieNavidenia.Imprimir();
    //serieNavidenia.ApagarTodo();
    //serieNavidenia.Imprimir();
    return 0;
};

