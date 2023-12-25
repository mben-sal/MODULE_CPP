#include"Animal.hpp"
#include"Cat.hpp"
#include"Dog.hpp"
#include"WrongAnimal.hpp"
#include"WrongCat.hpp"

int main( void )
{
	int N = 10;
	const Animal *t[N];
	int i = 0;
	while (i < N)
	{
		if (i % 2 == 0)
			t[i] = new Dog();
		else
			t[i] = new Cat();
		i++;
	}
	
	i = 0;
	while (i < 2)
	{
		std::cout << t[i]->get_type() << std::endl;
		t[i]->makeSound();
    	delete t[i];
		i++;
	}
    return 0;
}