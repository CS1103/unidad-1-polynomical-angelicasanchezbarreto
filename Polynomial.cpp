//
// Created by rudri on 9/12/2019.
//

#include <stdexcept>
#include <iostream>
#include "Polynomial.h"

using namespace std;

Polynomial::Polynomial() {
}

int Polynomial::degree() {
    return size;
}

Polynomial::Polynomial(int coef, int exp) {
    this->coef;
    this->exp;
}

Polynomial::Polynomial(int *lista, int size) {
    lista = nullptr;
    lista = 0;
}

Polynomial::Polynomial(int) {
    lista = new int[size];
}

void Polynomial::add(int coef, int exp) {
    int *temp = new int[size + 1];
    for(int i = 0; i < size; ++i)
        temp[i] = lista[i];
    delete [] lista;
    lista = temp;
    lista[size] = (coef, exp);
    size++;
}

//operator + (p1 + x)
Polynomial& operator+(Polynomial const& Pol, int const& coef) {
    return Pol+coef;
}

//operador + (x + p1)
Polynomial Polynomial::operator+(int const& coef) {
    Polynomial resultado(*this);
    resultado += coef;
    return resultado;
}

//operator + (p1+p2)
Polynomial Polynomial::operator+(Polynomial const& Pol) const{
    Polynomial result (*this) ;
    result += Pol;
    return result;
}

//operator <<
ostream& operator<<(ostream& os, const Polynomial & Pol) {
    os << Pol.coef << Pol.exp;
    return os;
}

//operator =
Polynomial& Polynomial::operator=(const Polynomial & Pol) {
    if(this->size!=0){
        delete[] this->lista;
    }
    this->size = Pol.size;
    this->lista = new int[this->size];
    for(int i = 0; i < this->size; i++){
        this->lista[i] = Pol.lista[i];
    }
    return *this;
}

//operator +=
Polynomial& Polynomial::operator+=(const Polynomial&){
    Polynomial(exp) += coef;
}


//operator *
Polynomial Polynomial::operator*(const int num) {
    int *lista = new int[size+1];
    for (int i = 0; i < size+1; i++){
        lista[i] = this->coef * num;
    }

    return *lista;
}

//operator * (x*p1)
Polynomial& operator*(Polynomial Pol, Polynomial const& POL ){
    return POL*Pol;
}

Polynomial& operator*(Polynomial const& Pol) {
        Polynomial temp;
        //
        return temp;
}





Polynomial::~Polynomial() {

}








