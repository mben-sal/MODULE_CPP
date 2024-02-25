#ifndef TEST
#define TEST
#include<iostream>


class test
{
private:
	int id;
	std::string name;
	std::string prenom;
public:
	test(int i, std::string n, std::string p);
	void afficher();
	test(/* args */);
	~test();
};

class tabtest 
{
	private : 
		int size;
		int crtsize;
	public :
		test *n;
		tabtest();
		tabtest(int);
		void add(test);
		void tailactuel();

};
class expt{
	std::string msg;
	
	public:
		expt(std::string);
		std::string getMess();
};
#endif