//
// Created by rudri on 9/30/2019.
//

#ifndef INC_201902_VECTORES_SESION7B_FUNCIONES_VECTORES_H
#define INC_201902_VECTORES_SESION7B_FUNCIONES_VECTORES_H

#include <iostream>
#include <iomanip>
#include <vector>
#include <random>
using namespace std;
using number = int;
using range = size_t;
using matriz = vector<vector<number>>;
using device = random_device;
using distribution = uniform_int_distribution<number>;

matriz generar_matriz(range nrow, range ncol);
void actualizar_aleatorio(matriz& m);
matriz multiplicar_escalar(matriz m, number scalar);
matriz generar_transpuesta(matriz& m);
void imprimir_matriz(const matriz& m);
bool son_matrices_iguales(const matriz & m1,const matriz & m2);
bool es_identidad(const matriz & m);
bool sumar_matrices(const matriz & m1, const matriz & m2,
                    matriz & ms);
vector<number> sumar_filas(const matriz & m);
vector<number> sumar_columnas(const matriz & m);
void actualizar_identidad(matriz& m);
#endif //INC_201902_VECTORES_SESION7B_FUNCIONES_VECTORES_H
