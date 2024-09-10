#include "AllUsingLibraries.h"

int main()
{
	Worker* first_worker = new Worker(); // выделяем память для объекта

	std::string worker_name;
	std::cin >> worker_name; // ввод worker_name

	int worker_age;
	std::cin >> worker_age; // ввод worker_age

	first_worker->name = worker_name;
	first_worker->age = worker_age;

	std::cout << first_worker->worker_to_string() << std::endl;

	first_worker->eat(15); // съел 15кг
	 
	std::cout << first_worker->worker_to_string() << std::endl;

	for (size_t i = 0; i < 2; ++i) first_worker->walk(); // погулял 2 раза

	std::cout << first_worker->worker_to_string() << std::endl;

	for (size_t i = 0; i < 3; ++i) first_worker->dance(); // потанцевал 3 раза

	std::cout << first_worker->worker_to_string() << std::endl;

	for (size_t i = 0; i < 9; ++i) first_worker->work(); // поработал 9 раз

	std::cout << first_worker->worker_to_string() << std::endl;
}

