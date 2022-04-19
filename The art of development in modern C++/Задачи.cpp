//-------------------------------
//Задача №1
//-------------------------------
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int X[9];
//	
//	for (auto t : X)
//	{
//		t = -1;
//	}
//
//	for (auto t : X)
//	{
//		cout << t << " ";
//	}
//	return 0;
//}
//-------------------------------
//Задача №2
//-------------------------------
//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//
//	std::vector<string> input(3, "");
//
//	string temp;
//
//	for (int i = 0; i < 3; ++i)
//	{
//		cin >> temp;
//
//		input[i] = temp;
//
//	}
//
//	if (input[0] <= input[1] && input[0] <= input[2])
//	{
//		cout << input[0];
//	}
//	else if (input[1] <= input[0] && input[1] <= input[2])
//	{
//		cout << input[1];
//	}
//	else
//	{
//		cout << input[2];
//	}
//
//
//	return 0;
//}
//-------------------------------
//Задача №3 
//-------------------------------
//#include <iostream>
//#include <string>
//#include <vector>
//#include <cmath>
//
//using namespace std;
//
//int main()
//{
//	float a, b, c;
//
//	std::cin >> a >> b >> c;
//
//	float D = (b * b - 4 * a * c);
//
//	if (a == 0 && b == 0)
//	{
//		std::cout << " ";
//	}
//	else if (a == 0)
//	{
//		float x = - c / b;
//
//		std::cout << x;
//	}
//	else if (D == 0)
//	{
//		float x = (- b + sqrt(D)) / (2 * a);
//
//		std::cout << x;
//	}
//	else if (D < 0)
//	{
//		cout << " ";
//	}
//	else
//	{
//		float x1 = (- b + sqrt(D)) / (2 * a);
//
//		float x2 = (- b - sqrt(D)) / (2 * a);
//
//		std::cout << x1 << " " << x2;
//	
//	}
//
//	return 0;
//}
//-------------------------------
//Задача / Алгоритм Евклида для нахождения наибольшего общего делителя
//-------------------------------
//#include <iostream>
//#include <string>
//#include <vector>
//#include <cmath>
//
//using namespace std;
//
//int main()
//{
//	int a, b;
//
//	cin >> a >> b;
//
//	while (a > 0 && b > 0)
//	{
//		if (a > b)
//		{
//			a %= b;
//		}
//		else
//		{
//			b %= a;
//		}
//	}
//
//	cout << a + b;
//	
//	return 0;
//}
//-------------------------------
//Задача / Перевод из 10 СС в 2 СС
//-------------------------------

//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	int n;
//
//	cin >> n;
//
//	std::vector<int> binary_number;
//
//	int l = n;
//
//	while (l > 0)
//	{
//		binary_number.insert(binary_number.begin(), l % 2);
//
//		l = l / 2;
//	}
//
//	for (auto a : binary_number)
//	{
//		cout << a;
//	}
//
//	return 0;
//}

//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	const int n = 10;
//
//	int X[n];
//
//	int p = 0;
//
//	for (int i = 0; i < n; i++)
//	{
//		p += 1;
//		X[i] = 0;
//		cout << X[i] << " | ";
//	}
//
//	cout << p;
//	cout << endl << endl;
//
//
//
//	for (int i = 0; i < n; ++i)
//	{
//		X[i] = i + 1;
//	}
//
//	int k = 0;
//
//	for (auto x : X)
//	{
//		cout << x << " | ";
//		k += 1;
//
//	}
//
//	cout << endl << endl;
//
//	cout << k << endl;
//
//
//	return 0;
//}

//----------------------------------
//Задача / Расчет факториала
//----------------------------------

//#include <iostream>
//
//using namespace std;
//
//int Factorial(int n)
//{
//	if (n <= 0) return 1;
//
//	int sum = 1;
//
//	for (int i = n; i > 0; i--)
//	{
//		sum *= i;
//	}
//	return sum;
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	cout << Factorial(n);
//	return 0;
//}

//----------------------------------
//Задача / Полиндром
//----------------------------------

//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;

//bool IsPalindrome(string s)
//{
//    // Замечание: более правильным было бы использовать здесь тип size_t вместо int
//    // О причинах Вы узнаете на Жёлтом поясе
//    for (int i = 0; i < s.size() / 2; ++i) 
//    {
//        if (s[i] != s[s.size() - i - 1]) 
//        {
//            return false;
//        }
//    }
//    return true;
//}


//int main()
//{
//    string word;
//
//    cin >> word;
//
//    cout << IsPalindrome(word);
//
//	return 0;
//}

//----------------------------------
//Задача / Полиндром фильтр
//----------------------------------

//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//bool IsPalindrome(string s)
//{
//    // Замечание: более правильным было бы использовать здесь тип size_t вместо int
//    // О причинах Вы узнаете на Жёлтом поясе
//    for (int i = 0; i < s.size() / 2; ++i) 
//    {
//        if (s[i] != s[s.size() - i - 1]) 
//        {
//            return false;
//        }
//    }
//    return true;
//}
//
//vector<string> PalindromeFilter(vector<string> words, int minLength)
//{
//    string word;
//
//    vector<string> words2;
//
//    for (int i = words.size() - 1; i >= 0; i--)
//    {
//        word = words[i];
//
//        if (word.size() < minLength)
//        {
//            words.erase(words.begin() + i);
//        }
//        else if (IsPalindrome(word) == false)
//        {
//            words.erase(words.begin() + i);
//        }
//
//    }
//
//    return words;
//
//};
//
//int main()
//{
//    vector<string> words;
//    string word;
//    
//    int minLength;
//    cin >> minLength;
//
//    do
//    {
//        cin >> word;
//        words.push_back(word);
//    } while (word != "0");
// 
//    words.pop_back();
//
//    words = PalindromeFilter(words, minLength);
//
//
//    return 0;
//}
//----------------------------------
//Задача / Максимизатор
//----------------------------------
//
//void UpdateIfGreater(int a, int& b)
//{
//    if (a > b) b = a;
//}
//----------------------------------
//Задача / Перемещение строк
//----------------------------------
//
//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;

//void MoveStrings(vector<string>& a, vector<string>& b)
//{
//	for (auto s : a)
//	{
//		b.push_back(s);
//	}
//
//	a.clear();
//}
//----------------------------------
//Задача / Перемещение строк 1.0
//----------------------------------
//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;

//void Reverse(vector<int>& v)
//{
//	reverse(v.begin(), v.end());
//}

//----------------------------------
//Задача / Перемещение строк 2.0
//----------------------------------
//vector<int> Reversed(const vector<int>& input)
//{
//    vector<int> result;
//    for (int i = input.size() - 1; i >= 0; --i) {
//        result.push_back(input[i]);
//    }
//    return result;
//}
//----------------------------------
//Задача / Средняя температура
//----------------------------------
//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//    int n;
//    cin >> n;
//    vector<int> temperatures(n);
//    int sum = 0;
//    for (int& temperature : temperatures) {
//        cin >> temperature;
//        sum += temperature;
//    }
//
//    int average = sum / n;
//    vector<int> result_indices;
//    for (int i = 0; i < n; ++i) {
//        if (temperatures[i] > average) {
//            result_indices.push_back(i);
//        }
//    }
//
//    cout << result_indices.size() << endl;
//    for (int result_index : result_indices) {
//        cout << result_index << " ";
//    }
//    cout << endl;
//
//    return 0;
//}
//----------------------------------
//Задача / Очередь
//----------------------------------
//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//void ComeIn(vector<bool>& queue, int person)
//{
//	if (person > 0)
//	{
//		for (int i = 0; i < person; i++) queue.push_back(false);
//		
//	}
//	else
//	{
//		person = abs(person);
//		for (int i = 0; i < person; i++) queue.pop_back();
//	}
//}
//
//void Worry(vector<bool>& queue, int number)
//{
//	queue[number] = true;
//}
//
//void Quiet(vector<bool>& queue, int number)
//{
//	queue[number] = false;
//}
//
//int WorryCount(vector<bool>& queue)
//{
//	int count = 0;
//	for (int i = 0; i < queue.size(); i++)
//	{
//		if (queue[i] == true) count += 1;
//	}
//	return count;
//}
//
//int main()
//{
//
//	string command;
//	int count, n;
//	cin >> count;
//
//	vector<bool> queue;
//
//	for (int i = 0; i < count; i++)
//	{
//		cin >> command;
//
//		if (command == "WORRY_COUNT")
//		{
//			cout << WorryCount(queue) << endl;
//		}
//		else
//		{
//			cin >> n;
//
//			if (command == "COME")
//			{
//				ComeIn(queue, n);
//			}
//
//			if (command == "WORRY")
//			{
//				Worry(queue, n);
//			}
//
//			if (command == "QUIET")
//			{
//				Quiet(queue, n);
//			}
//		}
//	}
//
//	return 0;
//}
//----------------------------------
//Задача / Ежемесячные дела
//----------------------------------
//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//#define _vector vector<vector<vector<string>>>
//
//using namespace std;
//
//void Add(_vector& journal, int month, int day, string g)
//{
//	journal[month][day].push_back(g);
//}
//
//void Dump(_vector& journal, int month, int day)
//{
//	cout << journal[month][day].size();
//	for (int i = 0; i < journal[month][day].size(); i++)
//	{
//		cout << " " << journal[month][day][i];
//	}
//	cout << endl;
//}
//
//void Next(_vector& journal, int& month)
//{
//	month += 1;
//	if (month > 11)
//	{
//		for (int i = journal[11].size() - 1; i >= 0; i--)
//		{
//			if (journal[11].size() > journal[0].size())
//			{
//				if (i >= journal[0].size() - 1)
//				{
//					for (int j = 0; j < journal[11][i].size(); j++)
//					{
//						journal[0][journal[0].size() - 1].push_back(journal[11][i][j]);
//					}
//				}
//				else
//				{
//					journal[0][i] = journal[11][i];
//				}
//			}
//			else
//			{
//				journal[0][i] = journal[11][i];
//
//			}
//		}
//
//		for (int i = 0; i < journal[11].size(); i++) journal[11][i].clear();
//
//		month = 0;
//	}
//	else
//	{
//		for (int i = journal[month - 1].size() - 1; i >= 0; i--)
//		{
//			if (journal[month - 1].size() > journal[month].size())
//			{
//				if (i >= journal[month].size() - 1)
//				{
//					for (int j = 0; j < journal[month - 1][i].size(); j++)
//					{
//						journal[month][journal[month].size() - 1].push_back(journal[month - 1][i][j]);
//					}
//				}
//				else
//				{
//					journal[month][i] = journal[month - 1][i];
//				}
//			}
//			else
//			{
//				journal[month][i] = journal[month - 1][i];
//
//			}
//		}
//		for (int i = 0; i < journal[month - 1].size(); i++) journal[month - 1][i].clear();
//	}
//}
//
//int main()
//{
//	int month = 0;
//
//	_vector journal;
//
//	vector <vector<string>> january(31);
//	vector <vector<string>> february(28);
//	vector <vector<string>> march(31);
//	vector <vector<string>> april(30);
//	vector <vector<string>> may(31);
//	vector <vector<string>> june(30);
//	vector <vector<string>> july(31);
//	vector <vector<string>> august(31);
//	vector <vector<string>> september(30);
//	vector <vector<string>> october(31);
//	vector <vector<string>> november(30);
//	vector <vector<string>> december(31);
//
//	journal.push_back(january);
//	journal.push_back(february);
//	journal.push_back(march);
//	journal.push_back(april);
//	journal.push_back(may);
//	journal.push_back(june);
//	journal.push_back(july);
//	journal.push_back(august);
//	journal.push_back(september);
//	journal.push_back(october);
//	journal.push_back(november);
//	journal.push_back(december);
//	
//
//	string command;
//	int count, n;
//	cin >> count;
//	
//	for (int i = 0; i < count; i++)
//	{
//		cin >> command;
//		if (command == "NEXT")
//		{
//			Next(journal, month);
//		}
//		else
//		{
//			cin >> n;
//
//			if (command == "ADD")
//			{
//				string s;
//				cin >> s;
//				Add(journal, month, n - 1, s);
//			}
//
//			if (command == "DUMP")
//			{
//				Dump(journal, month, n - 1);
//			}
//		}
//	}
//
//	return 0;
//}
//----------------------------------
//Задача / Анаграммы
//----------------------------------
//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <map>
//
//using namespace std;
//
//void BuildCharCounters(const string& a,const string& b)
//{
//	map <char, int> anagram_a, anagram_b;
//
//	for (int i = 0; i < a.size(); i++)
//	{
//		++anagram_a[a[i]];
//	}
//
//	for (int i = 0; i < b.size(); i++)
//	{
//		++anagram_b[b[i]];
//	}
//
//	if (anagram_a == anagram_b)
//	{
//		cout << "YES" << endl;
//	}
//	else
//	{
//		cout << "NO" << endl;
//	}
//	
//}
//
//int main()
//{
//	string word_1, word_2;
//
//	int count;
//	cin >> count;
//
//	for (int i = 0; i < count; i++)
//	{
//		cin >> word_1 >> word_2;
//		BuildCharCounters(word_1, word_2);
//	}
//
//	return 0;
//}
//----------------------------------
//Задача / Справочник столиц
//----------------------------------
//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <map>
//
//using namespace std;
//
//void CHANGE_CAPITAL(map<string, string>& c_c, string country, string capital)
//{
//
//	if (c_c.find(country) == c_c.end())
//	{
//		c_c[country] = capital;
//		cout << "Introduce new country " << country << " with capital " << capital << endl;
//	}
//	else if (capital == c_c[country])
//	{
//		cout << "Country " << country << " hasn't changed its capital" << endl;
//	}
//	else
//	{
//		cout << "Country " << country << " has changed its capital from " << c_c[country] << " to " << capital << endl;
//		c_c[country] = capital;
//	}
//}
//
//void RENAME(map<string, string>& c_c, string old_country, string new_country)
//{
//	if (old_country == new_country || c_c.find(old_country) == c_c.end() || c_c.find(new_country) != c_c.end())
//	{
//		cout << "Incorrect rename, skip" << endl;
//	}
//	else
//	{
//		cout << "Country " << old_country << " with capital " << c_c[old_country] << " has been renamed to " << new_country << endl;
//		auto temp = c_c[old_country];
//		c_c.erase(old_country);
//		c_c[new_country] = temp;
//	}
//}
//
//void ABOUT(map<string, string>& c_c, string country)
//{
//	if (c_c.find(country) == c_c.end())
//	{
//		cout << "Country " << country << " doesn't exist" << endl;
//	}
//	else
//	{
//		cout << "Country " << country << " has capital " << c_c[country] << endl;
//	}
//}
//
//void DUMP(const map<string, string>& c_c)
//{
//	if (c_c.size() < 1)
//	{
//		cout << "There are no countries in the world";
//	}
//	else
//	{
//		for (const auto& item : c_c)
//		{
//			cout << item.first << "/" << item.second << " ";
//		}
//	}
//	cout << endl;
//}
//
//int main()
//{
//	map<string, string> capitals_countrys;
//	int n;
//	cin >> n;
//	string country, capital, old_country, command;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> command;
//		if (command == "CHANGE_CAPITAL")
//		{
//			cin >> country >> capital;
//			CHANGE_CAPITAL(capitals_countrys, country, capital);
//		}
//		if (command == "RENAME")
//		{
//			cin >> old_country >> country;
//			RENAME(capitals_countrys, old_country, country);
//		}
//		if (command == "ABOUT")
//		{
//			cin >> country;
//			ABOUT(capitals_countrys, country);
//		}
//		if (command == "DUMP")
//		{
//			DUMP(capitals_countrys);
//		}
//	}
//
//	return 0;
//}
//----------------------------------
//Задача / Автобусные остановки — 1
//----------------------------------
#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

void NEW_BUS(map<string, vector<string>>& busAs, string busN,const vector<string>& stop, vector<string>& buss)
{
	buss.push_back(busN);
	busAs[busN] = stop;
}

void BUSES_FOR_STOP(map<string, vector<string>>& busAs, string stop, vector<string>& buss)
{
	vector<string> p;
	for (const auto& items : busAs)
	{
		for (const auto& _stop : items.second)
		{
			if (stop == _stop)
			{
				p.push_back(items.first);
			}
		}
	}

	if (p.size() < 1)
	{
		cout << "No stop" << endl;
	}
	else
	{
		for (const auto& items : buss)
		{
			for (auto& slovo : p)
			{
				if (items == slovo)
				{
					cout << slovo << " ";
				}
			}
		}
		cout << endl;
	}
}

void STOPS_FOR_BUS(map<string, vector<string>>& busAs, string bus)
{

}

void ALL_BUSES(map<string, vector<string>>& busAs)
{

}

int main()
{
	vector<string> buss;
	map<string, vector<string>> busAndStop;
	int n, stop_cnt;
	cin >> n;
	string command, bus, stop;
	vector<string> temp;
	for (int i = 0; i < n; i++)
	{
		cin >> command;
		if (command == "NEW_BUS")
		{
			cin >> bus;
			cin >> stop_cnt;
			for (int i = 0; i < stop_cnt; i++)
			{
				cin >> stop;
				temp.push_back(stop);
			}
			NEW_BUS(busAndStop, bus, temp, buss);
		}
		if (command == "BUSES_FOR_STOP")
		{
			cin >> stop;
			BUSES_FOR_STOP(busAndStop, stop, buss);
		}
		if (command == "STOPS_FOR_BUS")
		{
			cin >> bus;
			STOPS_FOR_BUS(busAndStop, bus);
		}
		if (command == "ALL_BUSES")
		{
			ALL_BUSES(busAndStop);
		}
	}
	return 0;
}