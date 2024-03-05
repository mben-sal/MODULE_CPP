/***********************Function Templates*************************/
// #include <iostream>

// template <typename T>
// void swapValues(T &a, T &b) {
//     T temp = a;
//     a = b;
//     b = temp;
// }

// int main() {
//     int x = 5, y = 10;
//     std::cout << "Avant l'échange : x = " << x << ", y = " << y << std::endl;

//     // Appel du modèle de fonction pour échanger les valeurs
//     swapValues(x, y);
// 	char m = 'M';
// 	char n = 'n';
// 	swapValues(m , n);
//     std::cout << "Après l'échange : x = " << m << ", y = " << n << std::endl;

//     return 0;
// }

/*****************************Class Templates***************************/

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

