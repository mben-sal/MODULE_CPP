#include <iostream>
#include <sstream>
#include <string>
// g++ -std=c++11 test.cpp -o test -lstdc++

/******************************* exemple en std::istringstream **************************/
int main() {
    std::string str = "42 3.14 Hello";
    std::istringstream iss(str);

    int a;
    double b;
    std::string c;

    iss >> a >> b >> c;

    std::cout << "a: " << a << ", b: " << b << ", c: " << c << std::endl;

    return 0;
}
/************************************ generateJacobsthalNumbers ***********/
// #include <vector>

// std::vector<int> generateJacobsthalNumbers(int n) {
//     std::vector<int> jacobsthal(n);
//     jacobsthal[0] = 0;
//     jacobsthal[1] = 1;

//     for(int i = 2; i < n; i++) {
//         jacobsthal[i] = jacobsthal[i-1] + (2 * jacobsthal[i-2]);
//     }
// 	for (int j = 0 ; jacobsthal.size() > j; j++)
// 	{
// 		std::cout << jacobsthal[j] << std::endl;
// 	}
//     return jacobsthal;
// } 
// int main() {
// 	std::vector<int> i = generateJacobsthalNumbers(10);
//     return 0;
// }
