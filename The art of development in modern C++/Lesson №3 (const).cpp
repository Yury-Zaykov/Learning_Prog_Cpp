//#include <iostream>
//#include <vector>
//#include <string>
//#include <map>
//#include <chrono>
//
//using namespace std;
//using namespace std::chrono;
//
//struct Person
//{
//	string name;
//	string surname;
//	int age;
//};
//
//vector<Person> GetMoscowPopulathion()
//{
//	vector<Person> s;
//
//
//	for (int i = 0; i < 1500000; i++)
//	{
//		s.push_back({ "dffd", "dfdfdf", 22 });
//	}
//	
//
//	return s;
//}
//
//
//// Передача в функцию данных по ссылке, дает возможность не копировать данные в функцию, а работать с оригиналом
//// Ссылка типа const, позволяет избежать случайного изменения объекта
//void PrintPopulationSize(vector<Person>& p)
//{
//	cout << "There are " << p.size() << " people in Moscow" << endl;
//}
//
//int main()
//{
//	auto start = steady_clock::now();
//	vector<Person> people = GetMoscowPopulathion();
//	auto finish = steady_clock::now();
//
//	cout << "GetMoscowPopulathion " << duration_cast<milliseconds> (finish - start).count() << " ms" << endl;
//
//	start = steady_clock::now();
//	PrintPopulationSize(people);
//	finish = steady_clock::now();
//
//	cout << "PrintPopulationSize " << duration_cast<milliseconds> (finish - start).count() << " ms" << endl;
//
//	return 0;
//}