#include <iostream>
#include "Worker.h"

int main()
{
	Worker* first_worker = new Worker();

	std::string worker_name;
	std::cin >> worker_name;

	int worker_age;
	std::cin >> worker_age;

	first_worker->name = worker_name;
	first_worker->age = worker_age;

	std::cout << first_worker->worker_to_string() << std::endl;

	first_worker->eat(15);

	std::cout << first_worker->worker_to_string() << std::endl;

	for (size_t i = 0; i < 2; ++i) 
		first_worker->walk();

	std::cout << first_worker->worker_to_string() << std::endl;

	for (size_t i = 0; i < 3; ++i) 
		first_worker->dance();

	std::cout << first_worker->worker_to_string() << std::endl;

	for (size_t i = 0; i < 9; ++i)
		first_worker->work();

	std::cout << first_worker->worker_to_string() << std::endl;
}

