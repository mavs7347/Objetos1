#include <iostream>
using namespace std;

class Persona {
    private:
        string nombre;
        string apellido;
        string celular;

    public:
        Persona(string, string, string);
        void datosPersona();
};

Persona::Persona(string _nombre, string _apellido, string _celular) {
    nombre = _nombre;
    apellido = _apellido;
    celular = _celular;
}
void Persona::datosPersona() {
    cout << "Nombre: " << nombre << endl;
    cout << "Apellido: " << apellido << endl;
    cout << "Celular: " << celular << endl;
}


class Smartphone {
    private:
        string marca;
        string color;
        float precio;
    public:
        Smartphone(string, string, float);
        void datosSmart();
};

Smartphone::Smartphone(string _marca, string _color, float _precio) {
    marca = _marca;
    color = _color;
    precio = _precio;
}
void Smartphone::datosSmart() {
    cout << "Marca: " << marca << endl;
    cout << "Color: " << color << endl;
    cout << "Precio: " << precio << endl;
}


class Refresco
{
    private:
        string marca;
        string sabor;
        float precio;
    public:
        Refresco(string, string, float);
        void datosRefresco();
};

Refresco::Refresco(string _marca, string _sabor, float _precio) {
    marca = _marca;
    sabor = _sabor;
    precio = _precio;
}
void Refresco::datosRefresco() {
    cout << "Marca: " << marca << endl;
    cout << "Sabor: " << sabor << endl;
    cout << "Precio: " << precio << endl;
}


class Pan
{
    private:
        string nombre;
        string tipo;
        float precio;
    public:
        Pan(string, string, float);
        void datosPan();
};

Pan::Pan(string _tipo, string _nombre, float _precio) {
    tipo = _tipo;
    nombre = _nombre;
    precio = _precio;
}
void Pan::datosPan() {
    cout << "Tipo: " << tipo << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Precio: " << precio << endl;
}


class Consola
{
    private:
        string marca;
        string color;
        float precio;
    public:
        Consola(string, string, float);
        void datosConsola();
};

Consola::Consola(string _marca, string _color, float _precio) {
    marca = _marca;
    color = _color;
    precio = _precio;
}
void Consola::datosConsola() {
    cout << "Marca: " << marca << endl;
    cout << "Color: " << color << endl;
    cout << "Precio: " << precio << endl;
}



int main()
{
    cout << "\n\nObjeto Persona" << endl;
    Persona persona = Persona("Miguel", "Ventura", "3332232333");
    persona.datosPersona();

    cout << "\n\nObjeto Smartphone" << endl;
    Smartphone smart = Smartphone("Samsung", "Negro", 3593.00);
    smart.datosSmart();

    cout << "\n\nObjeto Refresco" << endl;
    Refresco chesco = Refresco("Coca Cola", "Negro", 28.50);
    chesco.datosRefresco();

    cout << "\n\nObjeto Pan" << endl;
    Pan pan = Pan("Dulce", "Concha", 8.00);
    pan.datosPan();

    cout << "\n\nObjeto Consola" << endl;
    Consola consola = Consola("Sony", "Negro", 7930.00);
    consola.datosConsola();

    cout << "\n" << endl;
    

    
    

    return 0;
}
