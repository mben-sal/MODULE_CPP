#include <iostream>
#include"test.hpp"

float division(int a, int b){
	if(b == 0)
		throw "Division par zero !!";
	return a/b;
}
void mmm(char s)
{
	if(s == 97)
		throw "errrreur";
	std::cout << "manar" << std::endl;
	

}
int main(){
	// int a,b;
	
	// std::cout<<"Donnez a: ";
	// std::cin>>a;
	// std::cout<<"Donnez b: ";
	// std::cin>>b;
	
	try{
		throw 1;
		// std::cout<<division(a,b);
	}catch(char *s){
		std::cerr << "test" << std::endl;
		// std::cerr<<msg; //character error
	}
	// try
	// {
	// 	mmm('w');
	// }
	// catch(const char *msg)
	// {
	// 		std::cerr<< msg;
	// }
	
	// std::cout<<"end";
	// return 0;
}

//g++ -std=c++11 test.cpp -o test -lstdc++

// int main()
// {
// 	test e(2, "manar", "bensalah");

// 	// e.afficher();

// 	test e1(1, "Azdad", "Anas");
// 	test e2(2, "Dabaghi", "Hamza");
// 	test e3(3, "Alami", "Hicham");
	
// 	//e1.afficher();
	
// 	tabtest T(1);
	
// 	try{
// 		T.add(e1);
// 		T.tailactuel();
		
// 		T.add(e2);
// 		T.tailactuel();
		
// 		T.add(e3);
// 		T.tailactuel();
// 	}
// 		catch(expt* ex){
// 		std::cout<<ex->getMess()<<std::endl;
// 	}
	
	
// 	std::cout<<"end";
// 	return 0;
// }