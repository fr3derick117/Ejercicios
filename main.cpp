/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: PC AXEL
 *
 * Created on 2 de marzo de 2021, 01:11 PM
 */

#include <cstdlib>
#include<iostream>
#include<string.h>
using namespace std;
class Persona
{
private:
    char Nombre [40];
public:
    void adquirir_Nombre(char[40]);
    void Hablar();
    void Dormuir();
    void Contar();
}; 
void Persona::adquirir_Nombre(char N[40])
{
    strcpy(Nombre,N);
}
void Persona::Hablar()
{
    cout<<"Hola mi nombre es "<<Nombre<<endl;
}
void Persona::Dormuir()
{
    cout<<"Zzzzzzz..."<< endl;
    
}
void Persona::Contar()
{
    cout<<"Uno, Dos, Tres, Cuatro,..."<<endl;
}
/*
 * 
 */
int main(int argc, char** argv) {
    int x;
    char nombre[10];
    Persona Per1;
    Persona Per2;
    Per1.adquirir_Nombre("Frederick");
    Per1.Contar();
    Per1.Dormuir();
    Per1.Hablar();
   
    Per2.adquirir_Nombre("Axel");
    Per2.Contar();
    Per2.Dormuir();
    Per2.Hablar();
    

    return 0;
}

