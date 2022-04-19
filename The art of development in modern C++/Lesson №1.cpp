//#include <iostream>
//#include <string>
//#include <vector>
//#include <map> // - библиотека структуры данных "Словарь"
//
//using namespace std;
//
//// Объявление пользовательского типа (т.е. struct)
//struct Person
//{
//	string name;
//
//	string surname;
//
//	int age;
//};
//
//
//int main()
//{
//	std::string hw = "Hello, world";
//
//	// Значение в <> означает тип данных, который будет хранить вектор
//	std::vector<int> nums = { 1, 2, 3, 4 };
//	
//
//	// Работа со словарем map
//	//--------------------------------------------------------------
//	std::map<string, int> name_to_value;
//
//	name_to_value["one"] = 1;
//
//	name_to_value["two"] = 2;
//
//	cout << "two is " << name_to_value["two"] << endl;
//	//--------------------------------------------------------------
//
//
//	// Как пользоваться такими типами данных
//	//--------------------------------------------------------------
//	vector<Person> staff;
//
//	staff.push_back({ "Ivan", "Ivanov", 25 });
//
//	staff.push_back({ "Petr", "Petrov", 32 });
//
//	cout << staff[0].name << endl;
//	//--------------------------------------------------------------
//
//	
//
//	return 0;
//}