#include <iostream>
#include <sstream>
#include <string>
// g++ -std=c++11 test.cpp -o test -lstdc++

/******************************* exemple en std::istringstream **************************/
// int main() {
//     std::string str = "42 3.14 Hello";
//     std::istringstream iss(str);

//     int a;
//     double b;
//     std::string c;

//     iss >> a >> b >> c;

//     std::cout << "a: " << a << ", b: " << b << ", c: " << c << std::endl;

//     return 0;
// }

/******************************* exemple en std::istringstream **************************/
// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <map>

// int main() {
//     std::vector<int> vec = {10, 20, 30, 40, 50};

//     // Trouver la première occurrence de 25 dans le vecteur
//     std::vector<int>::iterator it = std::lower_bound(vec.begin(), vec.end(), 20);

//     if (it != vec.end() && *it == 20) {
//         std::cout << "25 trouvé à l'indice " << std::distance(vec.begin(), it) << std::endl;
//     } else {
//         std::cout << "25 n'est pas trouvé dans le vecteur." << std::endl;
//     }

//     // Trouver la première occurrence de 35 dans le vecteur
//     it = std::lower_bound(vec.begin(), vec.end(), 35);

//     if (it != vec.end() && *it == 35) {
//         std::cout << "35 trouvé à l'indice " << std::distance(vec.begin(), it) << std::endl;
//     } else {
//         std::cout << "35 n'est pas trouvé dans le vecteur." << std::endl;
//     }
//     return 0;
// }


/************************************ generateJacobsthalNumbers ***********/
#include <vector>

std::vector<int> generateJacobsthalNumbers(int n) {
    std::vector<int> jacobsthal(n);
    jacobsthal[0] = 0;
    jacobsthal[1] = 1;

    for(int i = 2; i < n; i++) {
        jacobsthal[i] = jacobsthal[i-1] + (2 * jacobsthal[i-2]);
    }
	for (int j = 0 ; jacobsthal.size() > j; j++)
	{
		std::cout << jacobsthal[j] << std::endl;
	}
    return jacobsthal;
} 
int main() {
	std::vector<int> i = generateJacobsthalNumbers(10);
    return 0;
}

