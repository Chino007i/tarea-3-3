#include "Evaluador.h"
#include <iostream>
using namespace std;

//Desrefencia ptr (dado) y devuelve su valor
int obtenerValor(int *ptr)
{
    return *ptr;//retorna el puntero desreferenciado
}

//Desreferencia a (dado) y b (dado) y devuelve la suma de ambos
int sumar(int* a, int* b)
{
    return *a+*b;//retorna los punteros desreferenciados en una suma
}

//Devuelve true si a (dado) y b (dado) apuntan al mismo espacio de memoria
bool compararApuntadores(string *a, string *b)
{
int x=10;//se inicializa la variable a apuntar
 if(true){//evalua verdadero
 *a=x;//si *a apunta a x
 }//fin de la evaluacion
 if(true){//evalua verdadero
 *b=10;//si *b apunta a, a*=10
 }//fin de la evaluacion
else//de lo contrario
    return false;//retorna a falso
    }
//Desrefencia a (dado) y b (dado), devuelve true si ambos valores son iguales de lo contrario devuelve false
bool comparar(string *a, string *b)
{
int x=12;//inicializamos una variable
if(true)//evalua si es verdadero
*a=x;//*a esta apuntado a x ....... x equivale a 12
if(true)//evalua si es verdadero
*b=*a;//si *b es igual a........... *a .... si *b es igual a *a  ambos valores son iguales
else//si no de lo contrario
    return false;//retorna a falso
}

//Desreferencia a (dado) y devuelve su primera letra
char getPrimeraLetra(string *a)
{

    string primeral =*a;//se asigna una variable string para igualar una cadena de caracteres asignada a un puntero

    return primeral [0];//retorna la primera linea de la cadena de caracteres que es simbolizada en la pocicion 0



}
//Desreferencia a (dado) y devuelve true si es palindroma de lo contrario devuelve false
//Definicion de palindromo: http://es.wikipedia.org/wiki/Pal%C3%ADndromo
//Ejemplos de palindromos: Ana, arenera, arepera, anilina, ananá, Malayalam, Neuquén, Oruro, oso, radar, reconocer, rotor, salas, seres, somos, sometemos
bool esPalindromo(string* a)
{
string palindromo = *a;// apunta a un palindromo

if(palindromo==string//comprobamos  que el palindromo esta formada por una cadena de caracteres
(palindromo.rbegin(),palindromo.rend()))//De esta pagina se estudiaron los valores rbegin y rend http://www.cplusplus.com/reference/vector/vector/rend/  rbeging evalua la linea de caracteres (vuelve para evaluar)
    {
    return true;//retorna verdadero
    }
    else{//de lo contrario
            return false;//retorna a falso
            }
}

//Desreferencia base (dado) y exponente (dado) y devuelve la base elevado al exponente

#include <math.h>//importal la libreria para poder realizar ecuaciones matematicas
int getExponente(int* base, int* exponnte)
{
int b=*base;//inicializa la varaiable b en la que se le asigna un puntero
int e=*exponnte;//inicializa la variable e que se le asigna otro puntero
int respuesta = pow(b,e);//ddecimos que la respuesta va a ser la base usamos pow para elevarla al exponente la variable pow eleva la potencia

for(int i=0;i<(*exponnte);i++)//evalua en un recorrido si i es menor que el valor que apunta el exponente

    return respuesta;//retorna la variable asignada respuesta
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
