//
// Created by rudri on 9/30/2019.
//
#include "funciones_vectores.h"

device dev;
number randint(number first, number last) {
    distribution dis(first, last);
    return dis(dev);
}

matriz generar_matriz(range nrow, range ncol) {
    return matriz(nrow, vector<number>(ncol));
}

void actualizar_aleatorio(matriz& m) {
    for (auto& row: m)
        for (auto& item: row)
            item = randint(20, 40);
}

matriz multiplicar_escalar(matriz m, number scalar) {
    for (auto& row: m)
        for (auto& item: row)
            item *= scalar;
    return m;
}

matriz generar_transpuesta(matriz& m) {
    matriz trans(m[0].size(), vector<number>(m.size()));
    for(range i = 0; i < m.size(); ++i)
        for (range j = 0; j < m[i].size(); ++j)
            trans[j][i] = m[i][j];
    return trans;
}

void imprimir_matriz(const matriz& m) {
    for (auto& row: m) {
        for (auto& item: row)
            cout << setw(4) << item;
        cout << endl;
    }
}

bool son_matrices_iguales(const matriz &m1, const matriz &m2) {
    if (m1.size() != m2.size() || (m1.empty() && !m2.empty()) || m1[0].size() != m2[0].size()) return false;
    for(range i = 0; i < m1.size(); ++i)
        for (range j = 0; j < m1[i].size(); ++j)
            if (m1[i][j] != m2[i][j]) return false;
    return true;
}

bool es_identidad(const matriz &m) {
    for(range i = 0; i < m.size(); ++i)
        for (range j = 0; j < m[i].size(); ++j)
            if ((i != j && m[i][j] != 0) || (i == j && m[i][j] != 1))
                return false;
    return true;
}

bool sumar_matrices(const matriz &m1, const matriz &m2, matriz &ms) {
    if (m1.size() != m2.size() || (m1.empty() && !m2.empty()) || m1[0].size() != m2[0].size()) return false;
    ms = m1;
    for(range i = 0; i < m2.size(); ++i)
        for (range j = 0; j < m2[i].size(); ++j)
            ms[i][j] += m2[i][j];
    return true;
}

vector<number> sumar_filas(const matriz &m) {
    vector<number> result(m.size(),0);
    for(range i = 0; i < m.size(); ++i)
        for (range j = 0; j < m[i].size(); ++j)
            result[i] += m[i][j];
    return result;
}

vector<number> sumar_columnas(const matriz &m) {
    vector<number> result(m[0].size(),0);
    for(range i = 0; i < m.size(); ++i)
        for (range j = 0; j < m[i].size(); ++j)
            result[j] += m[i][j];
    return result;
}

void actualizar_identidad(matriz& m) {
    for(range i = 0; i < m.size(); ++i)
        for (range j = 0; j < m[i].size(); ++j)
                m[i][j] = (i == j);
}
