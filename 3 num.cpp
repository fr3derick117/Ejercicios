/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   3 num.cpp
 * Author: PC AXEL
 *
 * Created on 9 de marzo de 2021, 09:13 PM
 */
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
        float AdquirirNum1();
        float AdquirirNum2();
        float AdquirirNum3();
};
float Numeros::Suma(){
    return num1+num2+num3;
}
float Numeros::Promedio(){
    return(num1+num2+num3)/3;
    
}
float Numeros::AdquirirNum1(){
    return num1;
}
float Numeros::AdquirirNum2(){
    return num2;
}
float Numeros::AdquirirNum3(){
    return num3;
}

int main(int argc, char** argv) {
    Numeros N8;
    float uno,dos,tres;
    float sumadera;
    cout<<"Dame 3 numeros"<<endl;
    cin>>uno;
    cin>>dos;
    cin>>tres;
    N8.AdquirirNum1(uno);
    N8.AdquirirNum2(dos);
    N8.AdquirirNum3(tres);
    Sumadera=N8.Suma();
    cout<<"La suma es"<<N8.Suma();
    return 0;
}

