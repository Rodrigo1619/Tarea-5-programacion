/*Escriba un programa que lea tres números enteros que representan los
valores de día (dd), mes (mm) y año (aa) de una fecha cualquiera. Luego,
calcule y dé como resultado de salida los valores de día, mes y año
correspondientes al día siguiente.
*/
#include "iostream"
using namespace std;

//definiendo la funcion para los anios bisiestos
bool bisiesto(int anio)
{
    return ((anio % 4) == 0 && (anio % 100) != 0) || ((anio % 400) == 0); 
}
//definiendo la funcion para los dias que tienen solo 30 dias
int diasMes(int mes, int anio)
{
    int dias = 31;
    if (mes ==4 || mes == 6 || mes == 9 || mes == 11)
    {
        dias = 30;
    }
    else if (mes == 2)
    {
        if (bisiesto(anio))
        {
            dias = 29;
        }
        else 
        {
            dias = 28;
        }
    }
    return dias;
}
int main()
//funcion principal donde los dias, meses y anios se incrementaran depende la fecha que el usuario ponga
{
    int dia, mes, anio;
    char pleca;
    
    cout<<"Ingrese una fecha en el formato (dd)/(mm)/(aa) : "<<endl;
    cin>>dia>>pleca>>mes>>pleca>>anio;
    dia++;

    if(dia > diasMes(mes, anio))
    {
        dia = 1;
        mes++;
        if(mes > 12)
        {
            mes = 1;
            anio++;
        }
    }
    cout<<dia<<"/"<<mes<<"/"<<anio<<endl;
}