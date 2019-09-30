//
// Created by rudri on 9/30/2019.
//

#include "funciones_vectores.h"

void ejemplo1() {
    range nrow = 0;
    range ncol = 0;
    cout << "\nIngrese filas: ";
    cin >> nrow;
    cout << "\nIngrese columnas: ";
    cin >> ncol;
    matriz m = generar_matriz(nrow, ncol);
    actualizar_aleatorio(m);
    cout << "\nMatriz Original" << endl;
    imprimir_matriz(m);
    auto res1 = multiplicar_escalar(m, 2);
    cout << "Matriz Multiplicada por escalar 2" << endl;
    imprimir_matriz(res1);
    auto res2 = generar_transpuesta(res1);
    cout << "Matriz Transpuesta" << endl;
    imprimir_matriz(res2);
}

void ejercicios() {
    range nrow = 0;
    range ncol = 0;
    cout << "\nIngrese filas: ";
    cin >> nrow;
    cout << "\nIngrese columnas: ";
    cin >> ncol;
    matriz m1 = generar_matriz(nrow, ncol);
    actualizar_aleatorio(m1);
    cout << "\nMatriz Original" << endl;
    imprimir_matriz(m1);
    auto m2 = m1;
    cout << "\nm1\n";
    imprimir_matriz(m1);
    cout << "m2\n";
    imprimir_matriz(m2);
    cout << "Verificar si son iguales: " << boolalpha << son_matrices_iguales(m1, m2) << endl << endl;
    actualizar_aleatorio(m2);
    cout << "m1\n";
    imprimir_matriz(m1);
    cout << "m2\n";
    imprimir_matriz(m2);
    cout << "Verificar si son iguales: " << boolalpha << son_matrices_iguales(m1, m2) << endl;
    cout << "\nm1 es identidad: " << boolalpha << es_identidad(m1) << endl << endl;
    actualizar_identidad(m1);
    cout << "m1 identidad\n";
    imprimir_matriz(m1);
    cout << "m1 es identidad: " << boolalpha << es_identidad(m1) << endl;
    matriz m3;
    sumar_matrices(m1, m2, m3);
    cout << "\nm3 = m1 + m2\n";
    imprimir_matriz(m3);
    auto v1 = sumar_filas(m3);
    auto v2 = sumar_columnas(m3);
    cout << endl;
    cout << "m3 suma de filas:\n";
    for (const auto& item: v1)
        cout << item << " ";
    cout << endl << endl;
    cout << "m3 suma de columnas:\n";
    for (const auto& item: v2)
        cout << item << " ";
    cout << endl;
}
int main() {
    ejercicios();
    return 0;
}
