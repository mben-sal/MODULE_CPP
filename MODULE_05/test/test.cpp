#include "test.hpp"
test::test(int i, std::string n, std::string p): name(n), prenom(p)
{
	this->id = i;
}
void test::afficher()
{
	std::cout<< id << " - " << name << " - " << prenom <<std::endl;
}
test::test()
{
}

test::~test()
{

}
tabtest::tabtest()
{

}

tabtest::tabtest(int n)
{
	this->size = n;
	this->crtsize = 0;
	this->n = new test[n];
}

void tabtest::add(test e)
{
	if(crtsize < size)
	{
		n[crtsize] = e;
		crtsize ++;
	}else{
		// throw "Tableau est sature !";
		throw new expt("Tableau est sature !");
	}
}

void tabtest::tailactuel()
{
	std::cout << "tailactuell"<< crtsize << std::endl;
}

expt::expt(std::string s): msg(s){
	
}
std::string expt::getMess(){
	return msg;
}