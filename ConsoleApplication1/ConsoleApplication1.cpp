// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h" //"headers que permiten proveer informaci�n que ser� usada en multiples archivos como funciones, clases, etc.
#include <iostream> //Cabecera o librer�a precompilada �til para c++

using namespace std; // Le dice al compilador que utilice el namespace std, As� evitamos poner por ej: std::cout << x 

int main() //funci�n principal de un proyecto en C++
{
    cout << "Hola mundo!\n"; 

	/*cout*/
	
	//Inicializa la variable X
	int x{ 10 }; // define como entero
	std::cout << x; // imprime el valor de x

	//Podemos concatenar la salida u outpu concatenando varios operadores de inserci�n << 
	cout << "UPC" << " Ingenier�a!";
	
	//Imprimir un texto y una variable
	int y{ 5 };
	cout << "Y es igual a: " <<y;
	
	//Si necesitamos un salto de linea usamos endl o \n
	cout << "Hola!" <<endl; 
	cout << "Esta es la clase de Programaci�n I." << endl;
	cout << "x es igual a: " << x << '\n';


	/*cin*/
	
	//usa el operador de extracci�n >>
	cout << "Enter a number: "; 
	int z; 
	cin >> z; // recibe el n�mero por el teclado
	cout << "Ingresaste " << z << '\n';

	cin.get();
	return 0;
}

/*Palabras reservadas en C++*/
/*
alignas (C++11)
alignof (C++11)
and
and_eq
asm
auto
bitand
bitor
bool
break
case
catch
char
char16_t (C++11)
char32_t (C++11)
class
compl
const
constexpr (C++11)
const_cast
continue
decltype (C++11)
default
delete
do
double
dynamic_cast
else
enum
explicit
export
extern
false
float
for
friend
goto
if
inline
int
long
mutable
namespace
new
noexcept (C++11)
not
not_eq
nullptr (C++11)
operator
or
or_eq
private
protected
public
register
reinterpret_cast
return
short
signed
sizeof
static
static_assert (C++11)
static_cast
struct
switch
template
this
thread_local (C++11)
throw
true
try
typedef
typeid
typename
union
unsigned
using
virtual
void
volatile
wchar_t
while
xor
xor_eq
*/
