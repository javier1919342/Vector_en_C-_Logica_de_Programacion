#include <iostream>
#include <vector>
using namespace std;

struct Producto {
    string nombre;
    float precio;
};

int main() {
    // Vector de objetos Producto, inicializado con push_back()
    vector<Producto> inventario;

    Producto p1; p1.nombre = "Cuaderno"; p1.precio = 45.50;
    Producto p2; p2.nombre = "Lapiz";    p2.precio = 12.00;
    Producto p3; p3.nombre = "Mochila";  p3.precio = 90.00;
    Producto p4; p4.nombre = "Borrador"; p4.precio = 8.75;

    inventario.push_back(p1);
    inventario.push_back(p2);
    inventario.push_back(p3);
    inventario.push_back(p4);

    // Recorrer e imprimir cada producto con su precio
    cout << "--- Inventario ---" << endl;
    for (Producto p : inventario) {
        cout << p.nombre << ": " << p.precio << endl;
    }

    // Modificar el precio de un producto accediendo por indice
    inventario[1].precio = 15.00; // Se sube el precio del Lapiz
    cout << "\nPrecio actualizado de " << inventario[1].nombre
        << ": " << inventario[1].precio << endl;

    // Calcular el precio promedio del inventario
    float suma = 0;
    for (Producto p : inventario) {
        suma += p.precio;
    }
    float promedio = suma / inventario.size();
    cout << "\nPrecio promedio: " << promedio << endl;

    // Uso de at() para acceso seguro por posicion
    try {
        int posicion = 2;
        cout << "\nProducto en posicion " << posicion << " (con at()): "
            << inventario.at(posicion).nombre << " - "
            << inventario.at(posicion).precio << endl;

        // Ejemplo de acceso invalido para mostrar la validacion de at()
        cout << inventario.at(10).nombre;
    }
    catch (out_of_range& e) {
        cout << "\nError: posicion invalida en el inventario." << endl;
    }

    return 0;
}
