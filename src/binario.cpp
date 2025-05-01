#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct Persona{
    char nombre[50];
    int edad;
};

int main(int argc, char const *argv[]){

    ofstream archivo("binario.bin", ios::binary);
    if(!archivo.is_open()){
        cerr << "Error al abrir el archivo para escritura" << endl;
        return 1;
    }


    cout<< "Escribiendo en el archivo..."<<endl;
    Persona p1 = {"Juan", 30};
    Persona p2 = {"Maria", 25};
    Persona p3 = {"Pedro", 40};

    archivo.write(reinterpret_cast<char*>(&p1),sizeof(Persona));
    archivo.write(reinterpret_cast<char*>(&p2),sizeof(Persona));
    archivo.write(reinterpret_cast<char*>(&p3),sizeof(Persona));

    archivo.close();

    ifstream archivolectura("binario.bin", ios::binary);
    if(!archivo.is_open()){
        cerr << "Error al abrir el archivo para lectura" << endl;
        return 1;
    }
    cout << "Leyendo el archivo..." << endl;
    Persona p;

    while(archivolectura.read(reinterpret_cast<char*>(&p),sizeof(Persona)))
    {
        cout << "Nombre:"  << p.nombre << ", Edad:" << p.edad << endl;
    }  

    archivolectura.close();

    return 0;

}