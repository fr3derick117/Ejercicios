/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   3 num.cpp
 * Author: Frederick
 *
 * Created on 9 de marzo de 2021, 09:13 PM
 */
 float menor(float, float, float);
float mayor(float, float, float);
#include<iostream>
#include <cstdlib>
#include<math.h>


using namespace std;

/*
 * 
 */
class Numeros{
private:
    float num1,num2,num3;
    public:
        float Suma();
        float Promedio();
        void AdquirirNum1(float num1);
        void AdquirirNum2(float num2);
        void AdquirirNum3(float num3);
   
};
float Numeros::Suma(){
    return num1+num2+num3;
}
float Numeros::Promedio(){
    return (num1+num2+num3)/3;
    
}
void Numeros::AdquirirNum1(float numerouno){
    num1=numerouno;
}
void Numeros::AdquirirNum2(float numerodos){
    num2=numerodos;
}
void Numeros::AdquirirNum3(float numerotres){
    num3=numerotres;
}

int main(int argc, char** argv) {
    Numeros N8;
    float uno,dos,tres;
    float m,n;
    float Sumadera;
    float Promediototal;
    cout<<"Dame 3 numeros"<<endl;
    cin>>uno;
    cin>>dos;
    cin>>tres;
    m=menor(uno,dos,tres);
    n=mayor(uno,dos,tres);
    N8.AdquirirNum1(uno);
    N8.AdquirirNum2(dos);
    N8.AdquirirNum3(tres);
    Sumadera=N8.Suma();
    Promediototal=N8.Promedio();
    cout<<"La suma es "<<N8.Suma()<<endl;
    cout<<"El promedio de los tres numeros es "<<N8.Promedio()<<endl;
    cout<<"el menor es: "<<m<<endl;
    cout<<"el mayor es: "<<n<<endl;
    cin.ignore();return 0;
}
float menor(float a,float b,float c)
{
    float m;
    if(a<b)
        if(a<c)
            m=a;
        else
            m=c;
    else
        if(b<c)
            m=b;
        else
            m=c;
return m;
}
float mayor(float a,float b,float c)
{
    float n;
    if(a>b)
        if(a>c)
            n=a;
        else
            n=c;
    else
        if(b>c)
            n=b;
        else
            n=c;
return n;
}
