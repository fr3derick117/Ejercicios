/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include<iostream>
using namespace std;
class SueldoNeto
{
    private:
        float SueldoMensual;
        float Ventas;
        public:
        float Calcular4porc();
        void adquirirSueldo(float Sueldo);
        void adquirirSueldo(float VentaMes);
        float devolverSueldo();
        float devolverVenta();
        float RestarIva();
        SueldoNeto();
        ~SueldoNeto();
};
SueldoNeto::SueldoNeto()
{
    cout<<"Hola"<<endl;
}
void SueldoNeto::adquirirSueldo(float Sueldo)
{
    SueldoMensual=Sueldo;
    
}
void SueldoNeto::devolverVenta(float Ventas)
{
    this->Ventas=Ventas;
}
float SueldoNeto::devolverSueldo(){
    return SueldoMensual;
}
float SueldoNeto::devolverVenta()
{
    return Ventas;
}
float SueldoNeto::Calcular4porc(){
    float Com;
    Com=Ventas*0.4;
    return Com;
    //return Ventas*0.04;
}
float SueldoNeto::RestarIva(){
    return Calcular4porc-(Calcular4porc*0.16)
}
SueldoNeto:: ~SueldoNeto()
{
    cout<<"Adios"<<endl;
}
int main()
{
    SueldoNeto Obj1;
    Obj1.adquirirSueldo(10000);
    Obj1.adquirirVenta(5000);
    Obj1.("")
    return 0;
}