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

**********************************************MODULE_04**************************************************

Quels sont les types de polymorphisme ?
On distingue généralement trois types de polymorphisme :
Le polymorphisme ad hoc (également surcharge ou en anglais overloading)
Le polymorphisme paramétrique (également généricité ou en anglais template)
Le polymorphisme d'héritage (également redéfinition, spécialisation ou en anglais overriding)


Polymorphisme par sous-typage (héritage)

L'idée est de partir d'un type et de le modifier. Par exemple, on peut créer une classe de base, puis faire des classes dérivées. Ce concept est associé à l'approche orientée objet.


# Classe abstraite en C++

https://waytolearnx.com/2019/09/classe-abstraite-en-c.html

# compilation par pointeur ;
Animal *C1 = new Dog();
	Animal *C2 = new Cat();

	std::cout << "je suis la " << C1->get_type() << std::endl;
	std::cout << "je suis la " << C2->get_type() << std::endl;
	C1->makeSound();
	C2->makeSound();

	delete C1;
	delete C2;
# autre methode compilation 

Animal *meta;

	Cat C1;
	Dog C2;
	meta = &C1;
	meta  = &C2;

	std::cout << "je suis la " << C1.get_type() << std::endl;
	std::cout << "je suis la " << C2.get_type() << std::endl;
	C1.makeSound();
	meta->makeSound();


# Une fonction virtuelle:
est une fonction membre de la classe de base que vous comptez redéfinir dans des classes dérivées.

en cas base classe  en declare la fonction virtuelle comme suite petite exemple :

#include <iostream>
using namespace std;
class base 
{

    public :
        virtual void print(void) 
        {
            cout<< "class base virtual" << endl;
        }
};

class dirive : public base
{
    public :
        void print(void)
        {
            cout << "class dirive " << endl;
        }
};

int main() {

    base *m = new dirive();
    m->print();
    return 0;
}

# Une fonction virtuelle pure (ou fonction abstraite)

est une fonction virtuelle pour laquelle nous n’avons pas d’implémentation, nous avons juste la déclaration. Une fonction virtuelle pure est déclarée en affectant 0 à la déclaration.

exemple :

#include <iostream>
using namespace std;
class base 
{

    public :
        virtual void print(void) = 0;
};

class dirive : public base
{
    public :
        void print(void)
        {
            cout << "class dirive " << endl;
        }
};

int main() {

    base *m = new dirive();
    m->print();
    return 0;
}

*****************************************************MODULE_05***********************************************************************

# les exception :

 les exceptions sont utilisées pour gérer des erreurs et des situations exceptionnelles pendant l'exécution d'un programme
source : https://cpp.developpez.com/faq/cpp/?page=Utilisation-des-exceptions#Comment-lever-une-exception 
 exemple :

```
#include <iostream>

  void diviser(int a, int b) {
    if (b == 0) {
        throw std::runtime_error("Division par zéro !");
    }

    std::cout << "Résultat de la division : " << a / b << std::endl;
}
```
```
int main() {
    try {
        diviser(10, 2);
        diviser(8, 0); // Cela lancera une exception
    } catch (const std::exception& e) {
        std::cerr << "Erreur : " << e.what() << std::endl;
    }

    return 0;
}
```

explication de 
class test : public std::exception
{
    const char *what() const throw();
};

Cette classe hérite de la classe std::exception et ne semble définir qu'une seule méthode, what(). La méthode what() est généralement utilisée pour obtenir une description de l'exception. Dans ce cas, elle retourne un pointeur vers une chaîne de caractères (const char*). Cela signifie que lorsqu'une instance de test est attrapée, vous pouvez utiliser la méthode what() pour obtenir des informations sur l'exception.

*****************************************************MODULE_06*******************************************

= >  Casting operators are used for type casting in C++. They are used to convert one data type to another. C++ supports four types of casts:

# Casting explicite (cast statique) :

	1- static_cast
	2- dynamique_cast
	3- const_cast
	4- réinterpréter_cast

exemple :

```
int main ()
{
	int m =  4;
	int n = 8;

	float x = m/n == > (input = 0 );

	float x = m / static_cast<float> (n) == > (input = 0.5) 
}
```

# dynamic_cast :

L' opérateur Dynamic_cast est principalement utilisé pour effectuer un downcasting (conversion d'un pointeur/référence d'une classe de base en une classe dérivée). Il garantit la sécurité du type en effectuant une vérification d'exécution pour vérifier la validité de la conversion.

```
	exemple:

#include <iostream> 
using namespace std; 
  
// Base Class 
class Animal { 
public: 
    virtual void speak() const
    { 
        cout << "Animal speaks." << endl; 
    } 
}; 
  
// Derived Class 
class Dog : public Animal { 
public: 
    void speak() const override 
    { 
        cout << "Dog barks." << endl; 
    } 
}; 
  
// Derived Class 
class Cat : public Animal { 
public: 
    void speak() const override 
    { 
        cout << "Cat meows." << endl; 
    } 
}; 
  
int main() 
{ 
    // base class pointer to derived class object 
    Animal* animalPtr = new Dog(); 
  
    // downcasting 
    Dog* dogPtr = dynamic_cast<Dog*>(animalPtr); 
  
    // checking if the typecasting is successfull 
    if (dogPtr) { 
        dogPtr->speak(); 
    } 
    else { 
        cout << "Failed to cast to Dog." << endl; 
    } 
	 // typecasting to other dervied class 
    Cat* catPtr = dynamic_cast<Cat*>(animalPtr); 
    if (catPtr) { 
        catPtr->speak(); 
    } 
    else { 
        cout << "Failed to cast to Cat." << endl; 
    } 
	std:: cout <<"** cas de cast Cat methode correcte **" << std::endl;
	Animal* animalPt = new Cat();
	
    Cat* catPtr = dynamic_cast<Cat*>(animalPt); 
    if (catPtr) { 
        catPtr->speak(); 
    } 
    else { 
        cout << "Failed to cast to Cat." << endl; 
    } 
  
  
    delete animalPtr; 
    return 0; 
}
```
 La première ligne de sortie est imprimée car le 'animalPtr' du type 'Animal' est correctement converti en type 'Dog' et la fonction speak() de la classe Dog est invoquée mais la conversion du type 'Animal' en Le type 'Cat' échoue car 'animalPtr' pointe vers un objet 'Dog' . Ainsi, la conversion dynamique échoue car la conversion n'est pas sûre.


* En résumé, dynamic_cast est un outil puissant lors de l'utilisation de l'héritage polymorphe en C++, permettant des conversions sûres entre types de base et dérivés au moment de l'exécution.

# const_cast

L' opérateur const_cast est utilisé pour modifier le qualificatif const ou volatile d'une variable.

```
exemple :

int main() {
    const int nombreConstant = 42;

    // Utilisation de const_cast avec un pointeur non constant
    int* ptrNonConstant = const_cast<int*>(&nombreConstant);
	
    // Utilisation sûre : vérification que le pointeur n'est pas nullptr avant la modification
    std::cout << "Nombre constant d'origine : " << nombreConstant << std::endl;
    if (ptrNonConstant) {
        std::cout << "avant change la valeur " << *ptrNonConstant <<std::endl;
		*ptrNonConstant = 55;
		std::cout << "apres  change la valeur " << *ptrNonConstant << std::endl;
    }
	
	std::cout << "**************************************************************"<< std::endl;


    const int number = 80; 
    // Pointer to a const int 
    const int* ptr = &number;
	std::cout << "ptr = " << *ptr << std::endl;
    // int* nonConstPtr = ptr; if we use this 
    // instead of without using const_cast 
    // we will get error of invalid conversion 
    int* nonConstPtr = const_cast<int*>(ptr); 
    *nonConstPtr = 10; 
  
    cout << "Modified number: " << *nonConstPtr;
    return 0;
}

```
# réinterpréter_cast :

L' opérateur reinterpret_cast est utilisé pour convertir le pointeur en tout autre type de pointeur. Il n'effectue aucune vérification si le pointeur converti est du même type ou non.

```
	exemple :
int main() {
    int number = 10;
    // Stocker l'adresse de number dans numberPointer
    int* numberPointer = &number;

    // Réinterpréter le pointeur comme un pointeur de caractère
    char* charPointer = reinterpret_cast<char*>(numberPointer);

    // Utiliser strcpy pour copier la chaîne de caractères dans la mémoire pointée par charPointer
    strcpy(charPointer, "manar");

    // Afficher les adresses mémoire et les valeurs
    cout << "Adresse de l'entier : " << numberPointer << endl;
    cout << "Adresse du caractère : " << reinterpret_cast<void*>(charPointer) << endl;
    cout << "Contenu du caractère : " << charPointer << endl;
    cout << "Contenu de l'entier : " << *numberPointer << endl;

    return 0;
}
```
*****************************************************MODULE_07*******************************************

# templates

* Function Templates:

Un modèle de fonction permet de définir une fonction dont les types de paramètres sont génériques

```
	- exemple:
#include <iostream>

template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;
    swapValues(x, y);
    std::cout << "Avant l'échange : x = " << x << ", y = " << y << std::endl;

    // Appel du modèle de fonction pour échanger les valeurs
	char m = 'M';
	char n = 'n';
	swapValues(m , n);
    std::cout << "Après l'échange : x = " << m << ", y = " << n << std::endl;

    return 0;
}
```
 * Class Templates :

 Les modèles de classe permettent de définir des classes dont les membres ou les méthodes peuvent avoir des types génériques

 ```
	#include <iostream>

template <typename T1, typename T2>
class Pair {
public:
    T1 first;
    T2 second;

    Pair(const T1& f, const T2& s) : first(f), second(s) {}
};

int main() {
    // Utilisation du modèle de classe pour créer une paire d'entier et de double
    Pair<int, double> myPair(10, 3.14);

    // Accès aux membres de la paire
    std::cout << "First: " << myPair.first << std::endl;
    std::cout << "Second: " << myPair.second << std::endl;
	Pair<std::string , int> change("manar", 1337);
	 std::cout << "change: " << change.first << change.second<< std::endl;
    // Création d'une paire de chaînes de caractères
    Pair<std::string, std::string> stringPair("Hello", "World");

    // Affichage de la paire de chaînes
    std::cout << "First: " << stringPair.first << std::endl;
    std::cout << "Second: " << stringPair.second << std::endl;

    return 0;
}
```

source : https://openclassrooms.com/fr/courses/7137751-programmez-en-oriente-objet-avec-c/7533236-creez-des-templates


**********************************MODULE_08************************************

# Containers 

	* vector , stack :
	Les vecteurs sont identiques aux tableaux dynamiques avec la possibilité de se redimensionner automatiquement lorsqu'un élément est inséré ou supprimé, leur stockage étant géré automatiquement par le conteneur

// typename T::const_iterator it = std::find(container.begin(), container.end(), value);
// int i = find(0, n, 5)

```
vec =  [10, 20, 30, 40, 50]

vec.begin() = 10
vec.end() = 50

vec.size() = 5

vec[0] = 10
vec[1] = 20
vec[2] = 30
vec[3] = 40
vec[4] = 50
vec.capacity() = 5
vec = [10, 20, 30, 40, 50, 60, 70]
vec.begin() = 10
vec.end() = 70
vec.size() = 7
vec.capacity() = 10

vec = [10, 20, 30, 40, 50, 60, 70, 80]
vec.begin() = 10
vec.end() = 80
vec.size() = 8
vec.capacity() = 10

vec = [10, 20, 30, 40, 50, 60, 70, 80, 90]
vec.begin() = 10
vec.end() = 90
vec.size() = 9
vec.capacity() = 10

vec = [10, 20, 30, 40, 50, 60, 70, 80, 90, 100]
vec.begin() = 10
vec.end() = 100
vec.size() = 10
vec.capacity() = 10

vec = [10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110]
vec.begin() = 10
vec.end() = 110
vec.size() = 11
vec.capacity() = 20

vec = [10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200]
vec.begin() = 10
vec.end() = 200
vec.size() = 20
vec.capacity() = 20

vec = [10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200, 210, 220, 230, 240, 250, 260, 270, 280, 290, 300]
vec.begin() = 10
vec.end() = 300
vec.size() = 30
vec.capacity() = 40
```
auter exemple :
```
// vector<int> v;

// v.push_back(5);
// v.push_back(17);
// v.push_back(3);

// output: 5 17 3

// v.pop_back();

// output: 5 17
```
	* deque :
	ce qui signifie que vous pouvez ajouter et supprimer des éléments à la fois en début et en fin de la séquence de manière efficace. C'est la principale différence par rapport à std::vector.

exemple :
```
#include <deque>
#include <iostream>

int main() {
    std::deque<int> myDeque;

    myDeque.push_back(1);
    myDeque.push_front(2);
    myDeque.push_back(3);

    for (auto it = myDeque.begin(); it != myDeque.end(); ++it) {
        std::cout << *it << " ";
    }

    return 0;
}
```
	
- red black tree:
	- binary search in map and set