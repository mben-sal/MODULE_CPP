#include <iostream> 
#include <vector> 
#include <deque>
  
// using namespace std; 
  
// int main() 
// { 
//     vector<int> g1; 
  
//     for (int i = 1; i <= 5; i++)
// 	{
//         g1.push_back(i); 
// 		cout << g1[i] << i << "\n" << endl;
// 	}
  
//     cout << "Output of begin and end: "; 
//     for (auto i = g1.begin(); i != g1.end(); ++i) 
//         cout << *i << " "; 
  
//     cout << "\nOutput of cbegin and cend: "; 
//     for (auto i = g1.cbegin(); i != g1.cend(); ++i) 
//         cout << *i << " "; 
  
//     cout << "\nOutput of rbegin and rend: "; 
//     for (auto ir = g1.rbegin(); ir != g1.rend(); ++ir) 
//         cout << *ir << " "; 
  
//     cout << "\nOutput of crbegin and crend : "; 
//     for (auto ir = g1.crbegin(); ir != g1.crend(); ++ir) 
//         cout << *ir << " "; 

// 	for ( int i  = 0 ; i < 5; i++)	{
// 		std::cout << "++++ " << g1[i];
// 	}
	
  
//     return 0; 
// } 

int main() {
    std::deque<int> d;

    d.push_back(1);    // Ajoute 1 à la fin
    d.push_front(2);   // Ajoute 2 au début
    d.push_back(3);    // Ajoute 3 à la fin

    // Affiche tous les éléments de la deque
    for(int i = 0; i < d.size(); i++)
        std::cout << d[i] << ' ';

    return 0;
}


// std::vector<obj> v;
// v.push_back(obj(1));