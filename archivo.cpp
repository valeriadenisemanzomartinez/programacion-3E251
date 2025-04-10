#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{
    ofstream archivo("archivo.txt");
    if(!archivo.is_open()){
        cerr << "Error al abrir el archivo para escritura" << endl;
        return 1;
    }

    cout << "Escribiendo en el archivo..." << endl;
    archivo << "hola mundo" << endl;
    archivo << "Linea 2" << endl;
    archivo << "Linea 3" << endl;
    archivo << "Linea 4" << endl;
    archivo << "Linea 5" << endl;
    archivo << "Linea 6" << endl;

    archivo.close();

    ifstream archivolectura("archivo.txt");
    if(!archivolectura.is_open()){
        cerr << "Error al abrir el archivo para escritura" << endl;
        return 1;
    }
    cout << "Leyendo del archivo..." << endl;
    string linea;
    while(getline(archivolectura, linea)){
        cout << linea << endl;
    }
    archivolectura.close();
    return 0;
}