# MODULE_CPP

Module_02

oprators:
unary operator : ++ ,  -- besion un seule operateur 

binary operator : + , - , / ..., arithmetic , logical , (= , += , -= sont des assignement operator )

ternery operator : (?:  besion 3 operateur)

# Polymorphisme :

https://www.geeksforgeeks.org/cpp-polymorphism/

polymorphism = nous pouvons définir le polymorphisme comme la capacité d’un message à s’afficher sous plusieurs formes. 
=>  deux type de Polymorphisme 
* compile time  = @function overloading et @operator overloading 

&en cas de function overloading =
	Si plusieurs fonctions ayant le même nom mais que les paramètres des fonctions doivent être différents, on parle de surcharge de fonctions.

&en cas de operator overloading = 
C++ a la capacité de fournir aux opérateurs une signification particulière pour un type de données, cette capacité est connue sous le nom de surcharge d'opérateurs. Par exemple, nous pouvons utiliser l’opérateur d’addition (+) pour la classe de chaînes pour concaténer deux chaînes

exemple 
https://www.youtube.com/watch?v=Gd1KamgzKwE&list=RDCMUCWX_0VvMxl0_XosvYOZ7O0g&index=1 pour exemple unary operator 
using namespace std;

class W
{
    private :
        int r;
        int i;
    public:
        W(int x = 0 , int y = 0)
        {
            r = x;
            i = y;
        }
        W operator+(manar const &obj1)
        {
            W obj;
            obj.r = r + obj1.r;
            obj.i = i + obj1.i;
            return(obj);
        }
        void get()
        {
            cout << "r" << r << "i " << i << endl;
        }
};

int main()
{
   W  A1(5,6);
   W A2(2,2);
   W A3;
    A3 = A1 + A2;
    A3.get();
}
unrey operateur 
exemple :: 

#include <iostream>
using namespace std;

class Count {
   private:
    int value;

   public:

    // Constructor to initialize count to 5
    Count() : value(5) {}


    // Overload ++ when used as prefix
    void operator ++ () {
        ++value;
    }


    // Overload ++ when used as postfix
    void operator ++ (int) {
        value++;
    }

    void display() {
        cout << "Count: " << value << endl;
    }
};

int main() {
    Count count1;

    // Call the "void operator ++ (int)" function
    count1++;
    count1.display();

    // Call the "void operator ++ ()" function
    ++count1;

    count1.display();
    return 0;
}

FIXED POINTER :

En C++, les types de données à virgule flottante sont utilisés pour représenter des nombres réels (ceux qui ont une partie fractionnaire). Deux des types de données à virgule flottante les plus couramment utilisés sont float et double.

float :

Il s'agit d'un type de données à virgule flottante simple précision.
Il occupe généralement 4 octets en mémoire.
Il offre une précision d'environ 7 chiffres décimaux.
Exemple de déclaration d'une variable de type float :
	float myFloat = 3.14f;

double :

Il s'agit d'un type de données à virgule flottante double précision.
Il occupe généralement 8 octets en mémoire.
Il offre une précision plus élevée par rapport à float, avec environ 15 chiffres décimaux.
Exemple de déclaration d'une variable de type double :
	double myDouble = 3.141592653589793;

En résumé, float et double sont des types de données à virgule flottante en C++, et leur choix dépend des besoins spécifiques en termes de précision et d'utilisation de la mémoire.

* static const int r; déclare une variable entière constante qui appartient à la portée de fichier et dont la valeur ne peut pas être modifiée après son initialisation. 

# Préfixe (++i, --i) :

L'opération d'incrémentation ou de décrémentation est effectuée avant l'évaluation de l'expression qui contient la variable.
La variable est incrémentée ou décrémentée, puis la nouvelle valeur est utilisée dans l'expression.

int a = 5;
int b = ++a;  // b prend la valeur de a après son incrémentation
// Maintenant, a et b sont tous deux égaux à 6

# Postfix (i++, i--) :

L'opération d'incrémentation ou de décrémentation est effectuée après l'évaluation de l'expression qui contient la variable.
La variable est utilisée dans l'expression telle quelle, puis elle est incrémentée ou décrémentée.

int a = 5;
int b = a++;  // b prend la valeur actuelle de a, puis a est incrémenté
// Maintenant, a est égal à 6 et b est égal à 5

*****************************************************MODULE_03***********************************************************************

# inheritance :

is the process of creating the new classes , called derived classe , from existing or base classes

**La syntaxe de base pour définir une classe dérivée en C++ est la suivante**
class ClasseDeBase {
    // membres et fonctions de la classe de base
};

class ClasseDerivee : public ClasseDeBase {
    // membres et fonctions de la classe dérivée
};

en cas de public signifie que tous les membres de la classe Base passe public et protected et private ;
en cas de protected signifie que tous les membres de la classe Base passe protecred et protected et private;
an cas de private signifie que tous les membres de la classe Base passe private et private et private;

