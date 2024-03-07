 
// #include <iostream> 
// using namespace std; 

// /***************************** dynamic_cast ********************************/
// class Animal { 
// public: 
//     virtual void speak() const
//     { 
//         cout << "Animal speaks." << endl; 
//     } 
// }; 
  
// // Derived Class 
// class Dog : public Animal { 
// public: 
//     void speak() const override 
//     { 
//         cout << "Dog barks." << endl; 
//     } 
// }; 
  
// // Derived Class 
// class Cat : public Animal { 
// public: 
//     void speak() const override 
//     { 
//         cout << "Cat meows." << endl; 
//     } 
// }; 
  
// int main() 
// { 
// 	/*********************** par pointer *************/
//     Animal* animalPtr = new Dog(); 
//     Dog* dogPtr = dynamic_cast<Dog*>(animalPtr); 
//     if (dogPtr) { 
//         dogPtr->speak(); 
//     } 
//     else { 
//         cout << "Failed to cast to Dog." << endl; 
//     } 
//     Cat* catPtr = dynamic_cast<Cat*>(animalPtr); 
//     if (catPtr) { 
//         catPtr->speak(); 
//     } 
//     else { 
//         cout << "Failed to cast to Cat." << endl; 
//     }
// 	std:: cout <<"** cas de cast Cat methode correcte **" << std::endl;
// 	Animal* animalPt = new Cat();
	
//     Cat* catPtr = dynamic_cast<Cat*>(animalPt); 
//     if (catPtr) { 
//         catPtr->speak(); 
//     } 
//     else { 
//         cout << "Failed to cast to Cat." << endl; 
//     } 
	/**********************par reference*************************/
	// Animal *nm = new Cat();
	// Cat &a = dynamic_cast<Cat&>(*nm);
	// a.speak();
  
    // delete animalPtr; 
    // return 0; 
// }

// /*****************************************const_cast*************************/

// #include <iostream>

// int main() {
//     const int nombreConstant = 42;

//     // Utilisation de const_cast avec un pointeur non constant
//     int* ptrNonConstant = const_cast<int*>(&nombreConstant);
	
//     // Utilisation sûre : vérification que le pointeur n'est pas nullptr avant la modification
//     std::cout << "Nombre constant d'origine : " << nombreConstant << std::endl;
//     if (ptrNonConstant) {
//         std::cout << "avant change la valeur " << *ptrNonConstant <<std::endl;
// 		*ptrNonConstant = 55;
// 		std::cout << "apres  change la valeur " << *ptrNonConstant << std::endl;
//     }
	
// 	std::cout << "************************** autre exemple *********************************"<< std::endl;


//     const int number = 80; 
//     // Pointer to a const int 
//     const int* ptr = &number;
// 	std::cout << "ptr = " << *ptr << std::endl;
//     // int* nonConstPtr = ptr; if we use this 
//     // instead of without using const_cast 
//     // we will get error of invalid conversion 
//     int* nonConstPtr = const_cast<int*>(ptr); 
//     *nonConstPtr = 10; 
  
//     cout << "Modified number: " << *nonConstPtr;
//     return 0;
// }

/*************************************************Reinterpreter_cast*************************/
// #include <iostream>
// #include <cstring> // Inclure la bibliothèque pour strcpy

// using namespace std;

// int main() {
//     char number = 'a';

//     char* numberPointer = &number;
// 	std::cout << *numberPointer << std::endl;
//     // Réinterpréter le pointeur comme un pointeur de caractère
//     int* charPointer = reinterpret_cast<int*>(numberPointer);

//     // Utiliser strcpy pour copier la chaîne de caractères dans la mémoire pointée par charPointer
//     // strcpy(charPointer, "manar");

//     // Afficher les adresses mémoire et les valeurs
//     cout << "Adresse de l'entier : " << numberPointer << endl;
//     cout << "Adresse du caractère : " << reinterpret_cast<void*>(charPointer) << endl;
//     cout << "Contenu du caractère : " << *charPointer << endl;
//     cout << "Contenu de l'entier : " << *numberPointer << endl;

//     return 0;
// }



// g++ -std=c++11 test.cpp -o test -lstdc++