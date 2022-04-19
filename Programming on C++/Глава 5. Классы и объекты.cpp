//----------------------------------------------------------
//			    ПРИНЦИПЫ ПЕРЕГРУЗКИ ОПЕРАТОРОВ
//----------------------------------------------------------
//#include <iostream>
//#include <cstdlib>
//#include <string>
//using namespace std;
//// Описание класса:
//class MyMoney 
//{
//public:
//    string name;
//    double money;
//    double rate;
//    int time;
//    // Конструктор без аргументов:
//    MyMoney() {
//        name = "";
//        money = 0;
//        rate = 0;
//        time = 0;
//    }
//    // Конструктор с четырьмя аргументами:
//    MyMoney(string n, double m, double r, int t) {
//        setAll(n, m, r, t);
//    }
//    // Методы класса:
//    double getMoney() {
//        double s = money;
//        for (int k = 1; k <= time; k++) {
//            s *= (1 + rate / 100);
//        }
//        return s;
//    }
//    void showAll() {
//        cout << "Имя: " << name << endl;
//        cout << "Вклад: " << money << endl;
//        cout << "Ставка (%): " << rate << endl;
//        cout << "Период (лет): " << time << endl;
//        cout << "Итоговая сумма: " << getMoney() << endl;
//        for (int k = 1; k <= 35; k++) {
//            cout << "-";
//        }
//        cout << endl;
//    }
//    void setAll(string n, double m, double r, int t) {
//        name = n;
//        money = m;
//        rate = r;
//        time = t;
//    }
//    // Префиксная форма оператора инкремента:
//    MyMoney operator++() {
//        money = money + 1000;
//        return *this;
//    }
//    // Постфиксная форма оператора инкремента:
//    MyMoney operator++(int) {
//        time++;
//        return *this;
//    }
//    // Операторный метод для сложения двух объектов:
//    MyMoney operator+(MyMoney obj) {
//        MyMoney tmp;
//        tmp.name = "Почтальон Печкин";
//        tmp.money = money + obj.money;
//        tmp.rate = (rate > obj.rate) ? rate : obj.rate;
//        tmp.time = (time + obj.time) / 2;
//        return tmp;
//    }
//};
//// Операторная функция для вычитания объектов:
//double operator-(MyMoney objX, MyMoney objY) {
//    return objX.getMoney() - objY.getMoney();
//}
//// Префиксная форма оператора декремента:
//MyMoney operator--(MyMoney& obj) {
//    if (obj.money > 1000) {
//        obj.money -= 1000;
//    }
//    else {
//        obj.money = 0;
//    }
//    return obj;
//}
//// Постфиксная форма оператора декремента:
//MyMoney operator--(MyMoney& obj, int) {
//    if (obj.time > 0) {
//        obj.time--;
//    }
//    else {
//        obj.time = 0;
//    }
//    return obj;
//}
//// Главная функция программы:
//int main() {
//    // Изменение кодировки консоли:
//    system("chcp 1251>nul");
//    // Создание объекта:
//    MyMoney objA("Кот Матроскин", 1200, 7, 1);
//    objA.showAll();
//    // Уменьшение значения поля time:
//    objA--;
//    objA.showAll();
//    // Уменьшение значения поля time:
//    objA--;
//    objA.showAll();
//    // Увеличение значения поля time:
//    objA++;
//    objA.showAll();
//    // Уменьшение значения поля money:
//    --objA;
//    objA.showAll();
//    // Уменьшение значения поля money:
//    --objA;
//    objA.showAll();
//    // Увеличение значения поля money:
//    ++objA;
//    objA.showAll();
//    // Создание объекта:
//    MyMoney objB("Пес Шарик", 1100, 8, 5);
//    objB.showAll();
//    // Создание объекта:
//    MyMoney objC;
//    // Вычисление суммы объектов:
//    objC = objA + objB;
//    objC.showAll();
//    // Вычисление разности объектов:
//    cout << "Разница в доходах: " << objC - objB << endl;
//    // Задержка консольного окна:
//    system("pause>nul");
//    return 0;
//}
//----------------------------------------------------------
//			      ЗНАКОМСТВО С НАСЛЕДОВАНИЕМ
//----------------------------------------------------------
//#include <iostream>
//#include <cstdlib>
//#include <string>
//using namespace std;
//// Описание базового класса:
//class MyMoney {
//public:
//    // Поля базового класса:
//    string name;
//    double money;
//    double rate;
//    int time;
//    // Методы базового класса:
//    double getMoney() {
//        double s = money;
//        for (int k = 1; k <= time; k++) {
//            s *= (1 + rate / 100);
//        }
//        return s;
//    }
//    void showAll() {
//        cout << "Имя: " << name << endl;
//        cout << "Вклад: " << money << endl;
//        cout << "Ставка (%): " << rate << endl;
//        cout << "Период (лет): " << time << endl;
//        cout << "Итоговая сумма: " << getMoney() << endl;
//    }
//    void setAll(string n, double m, double r, int t) {
//        name = n;
//        money = m;
//        rate = r;
//        time = t;
//    }
//    // Конструктор базового класса (четыре аргумента):
//    MyMoney(string n, double m, double r, int t) {
//        setAll(n, m, r, t);
//    }
//    // Конструктор базового класса (без аргументов):
//    MyMoney() {
//        setAll("", 0, 0, 0);
//    }
//};
//// Производный класс:
//class BigMoney : public MyMoney {
//public:
//    // Поля производного класса:
//    int periods;
//    // Переопределение методов:
//    double getMoney() {
//        double s = money;
//        for (int k = 1; k <= time * periods; k++) {
//            s *= (1 + rate / 100 / periods);
//        }
//        return s;
//    }
//    void showAll() {
//        cout << "Имя: " << name << endl;
//        cout << "Вклад: " << money << endl;
//        cout << "Ставка (%): " << rate << endl;
//        cout << "Период (лет): " << time << endl;
//        cout << "Начислений в год: " << periods << endl;
//        cout << "Итоговая сумма: " << getMoney() << endl;
//    }
//    void setAll(string n, double m, double r, int t, int p) {
//        MyMoney::setAll(n, m, r, t);
//        periods = p;
//    }
//    // Конструктор производного класса (пять аргументов):
//    BigMoney(string n, double m, double r, int t, int p = 1) : MyMoney(n, m, r, t) {
//        periods = p;
//    }
//    // Конструктор производного класса (без аргументов):
//    BigMoney() : MyMoney() {
//        periods = 1;
//    }
//};
//// Главная функция программы:
//int main() {
//    // Изменение кодировки консоли:
//    system("chcp 1251>nul");
//    // Создание объекта класса MyMoney:
//    MyMoney objA("Кот Матроскин", 1200, 8, 5);
//    // Создание объектов класса BigMoney:
//    BigMoney objB("Дядя Федор", 1000, 7, 6, 2);
//    BigMoney objC("Пес Шарик", 1500, 6, 8);
//    BigMoney objD;
//    objD.setAll("Почтальон Печкин", 800, 10, 3, 4);
//    // Проверка характеристик объектов:
//    objA.showAll();
//    cout << endl;
//    objB.showAll();
//    cout << endl;
//    objC.showAll();
//    cout << endl;
//    objD.showAll();
//    // Задержка консольного окна:
//    system("pause>nul");
//    return 0;
//}