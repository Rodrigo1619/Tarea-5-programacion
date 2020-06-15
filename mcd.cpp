/*Elabore una función que retorne el mcd de dos números que se le/proporcionen como argumento. 
Utilice el método de Euclides, que ya se
presentó en un ejemplo del documento donde se explican las instrucciones
iterativas. Su función deberá retornar el mcd de los dos enteros recibidos y
deberá ser desplegado en pantalla.
*/

#include "iostream"
#include "conio.h"

using namespace std;

int mcd(int mayor, int menor, int residuo);  //nombrando la funcion

int main()
{
    int mayor, menor, residuo,resultado;
    cout<<endl;
    cout<<"MCD de dos numeros por el metodo de Euclides"<<endl<<endl;
    cout<<"Digite el numero mayor: "<<endl;
    cin>>mayor;
    cout<<"Digite el numero menor: "<<endl;
    cin>>menor;

    resultado = mcd(mayor,menor,residuo);

}
int mcd(int mayor, int menor, int residuo)  //definiendo la funcion para conseguir el MCD
{
    do 
{
residuo=mayor%menor;
 if(residuo!=0)
{ 
     mayor=menor;
     menor=residuo; 
}
} while(residuo!=0); 
cout<<"El MCD es: "<<menor<<endl;
}