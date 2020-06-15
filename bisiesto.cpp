/*Elabore una función que retorne un valor booleano, true o false, que indique
si un año es bisiesto o no
se sabe que los años bisiestos son los que son divisibles entre 400 
por ejemplo 2000 si es bisiesto pero 1800 no lo es
*/
#include "iostream"
#include "cstdlib"
#include "stdio.h"

using namespace std;

char total(int fecha)
{
    if (fecha%4 !=0 || (fecha % 100 == 0 && fecha % 400 != 0))
    {
        cout<<"El anho no es bisiesto"<<endl;
    }
    else
    {
        cout<<"El anho es bisiesto"<<endl;
    }
    return 0;
}
int main()
{
    int fecha;
    cout<<"Anhos bisiestos"<<endl;
    cout<<"Ingrese un anho: "<<endl;
    cin>>fecha;
    cout<<total(fecha);
  
}