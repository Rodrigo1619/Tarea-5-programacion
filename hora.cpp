/*Construya un programa que lea la hora, hh, mm y ss, en el modo de 24
horas. Luego calcule y despliegue cuál es la hora un segundo después.
*/
#include "iostream"

using namespace std;

int main()
{
    int horas, minutos, segundos;
    char p;
    cout<<"Ingrese una hora, poniendo (:) por h, m y s: "<<endl;
    cin>>horas>>p>>minutos>>p>>segundos;

    //Sumando 1 a los segundos, minutos y horas
    segundos = segundos + 1;
    if (segundos >= 60)
    {
        segundos = 0;
        minutos = minutos + 1;
        
        if (minutos >= 60)
        {
            minutos = 0;
            horas = horas + 1;

            if (horas >= 24)
            {
                horas = 0;
            }
        }
    }
    //Escribiendo para el doble 0
    if (horas < 10) cout<<0; 
    cout<<horas<<":";
    if (minutos < 10) cout<<0;
    cout<<minutos<<":";
    if (segundos < 10) cout<<0;
    cout<<segundos<<endl;
}