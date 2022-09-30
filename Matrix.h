#pragma once
#include <iostream>
#include <math.h>
#define PI 3.141592654

using namespace std;

class mates {
private:
    int k, m, n;
    float x, seno, coseno, tangente, gra;
public:
    void intro();
    void trigo();
    void trigo2();
};

void mates::intro() {

    int A[20][20], B[20][20], C[20][20];
    cout << "Primera matriz \n";
    cout << "Digite el numero de filas: "; cin >> k;
    cout << "\nDigite el numero de columnas: "; cin >> m;
    cout << "\n";
    for (int i = 0; i < k; ++i)
        for (int j = 0; j < m; ++j)
        {
            cout << "Digite un numero: [" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    cout << "\n";
    cout << "segunda matriz \n";
    cout << "Filas ya definidas";
    cout << "\nDigite el numero de columnas: "; cin >> n;
    cout << "\n";
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
        {
            cout << "Digite un numero: [" << i << "][" << j << "]: ";
            cin >> B[i][j];
        }

    //inicializamos la matriz c
    for (int i = 0; i < k; ++i)
        for (int j = 0; j < n; ++j)
            C[i][j] = 0;
    cout << "\n";

    //generamos la matriz c
    cout << "\n";
    for (int i = 0; i < k; i++)
        for (int j = 0; j < n; j++)
            for (int z = 0; z < m; z++)
                C[i][j] += A[i][z] * B[z][j];

    //mostrar los datos
    cout << "Matriz A: ";
    cout << "\n";
    for (int i = 0; i < k; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cout << A[i][j] << " ";
        }
        cout << "\n";

    }
    cout << "Matriz B: ";
    cout << "\n";
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << B[i][j] << " ";
        }
        cout << "\n";

    }
    cout << "Matriz C: ";
    cout << "\n";
    for (int i = 0; i < k; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << C[i][j] << " ";
        }
        cout << "\n";

    }
}

void mates::trigo() {
    cout << "ingresa un numero: \n";
    cin >> x;
    gra = x*PI/180;
    seno = sin(gra);
    coseno = cos(gra);
    tangente = tan(gra);
    cout << "El seno es: " << seno << "\n";
    cout << "El coseno es: " << coseno << "\n";
    cout << "El tangente es: " << tangente << "\n";
}

void mates::trigo2() {
    cout << "ingresa un numero: \n";
    cin >> x;
    seno = sin(x);
    coseno = cos(x);
    tangente = tan(x);
    cout << "El seno es: " << seno << "\n";
    cout << "El coseno es: " << coseno << "\n";
    cout << "El tangente es: " << tangente << "\n";
}