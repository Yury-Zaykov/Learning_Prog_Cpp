//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <map>
//
//using namespace std;
//
//void PrintMap(const map<int, string>& m)
//{
//
//	for (auto item : m)
//	{
//		cout << item.first << ": " << item.second << endl;
//	}
//}
//
//int main()
//{
//	// создаем словарь 
//	map<int, string> events;
//
//	// записываем 
//	events[1950] = "Bjarne Str birth";
//	events[1941] = "Dennis Ritchie`s birth";
//	
//	// При вызове фунции принт, все значения отсортировываются по ключу (первому значению)
//	PrintMap(events);
//
//	// С помощью метожа erase можно тереть ключ - значение
//	vector<string> words = { "one", "two", "three" };
//
//	map<char, vector<string>> grouped_words;
//
//	for (const string& word : words)
//	{
//		// берем первую букву слова (word[0]) и обращаемся к словарю с этой буквой
//		grouped_words[word[0]].push_back(word);
//	}
//
//
//	// выводим параметры словаря
//	for (const auto& item : grouped_words)
//	{
//		cout << item.first << endl;
//		for (const string& word : item.second)
//		{
//			cout << word << " ";
//		}
//		cout << endl;
//	}
//
//	return 0;
//}






