#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    string nombreCliente;
    double precioProducto;
    int cantidad;
    double subtotal, iva, total;

    cout << "Ingrese el nombre completo del cliente: ";
    getline(cin, nombreCliente);

    cout << "Ingrese el precio del producto: ";
    cin >> precioProducto;

    cout << "Ingrese la cantidad comprada: ";
    cin >> cantidad;

    subtotal = precioProducto * cantidad;
    iva = subtotal * 0.12;
    total = subtotal + iva;

    cout << fixed << setprecision(2);

    cout << "\nCliente: " << nombreCliente << endl;
    cout << "Subtotal: Q" << subtotal << endl;
    cout << "IVA: Q" << iva << endl;
    cout << "Total a pagar: Q" << total << endl;

    cout << "\nDesarrollado por: Rodrigo Adrian Barrios Monterroso" << endl;

    return 0;
}