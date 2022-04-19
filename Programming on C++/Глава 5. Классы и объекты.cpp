//----------------------------------------------------------
//			    �������� ���������� ����������
//----------------------------------------------------------
//#include <iostream>
//#include <cstdlib>
//#include <string>
//using namespace std;
//// �������� ������:
//class MyMoney 
//{
//public:
//    string name;
//    double money;
//    double rate;
//    int time;
//    // ����������� ��� ����������:
//    MyMoney() {
//        name = "";
//        money = 0;
//        rate = 0;
//        time = 0;
//    }
//    // ����������� � �������� �����������:
//    MyMoney(string n, double m, double r, int t) {
//        setAll(n, m, r, t);
//    }
//    // ������ ������:
//    double getMoney() {
//        double s = money;
//        for (int k = 1; k <= time; k++) {
//            s *= (1 + rate / 100);
//        }
//        return s;
//    }
//    void showAll() {
//        cout << "���: " << name << endl;
//        cout << "�����: " << money << endl;
//        cout << "������ (%): " << rate << endl;
//        cout << "������ (���): " << time << endl;
//        cout << "�������� �����: " << getMoney() << endl;
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
//    // ���������� ����� ��������� ����������:
//    MyMoney operator++() {
//        money = money + 1000;
//        return *this;
//    }
//    // ����������� ����� ��������� ����������:
//    MyMoney operator++(int) {
//        time++;
//        return *this;
//    }
//    // ����������� ����� ��� �������� ���� ��������:
//    MyMoney operator+(MyMoney obj) {
//        MyMoney tmp;
//        tmp.name = "��������� ������";
//        tmp.money = money + obj.money;
//        tmp.rate = (rate > obj.rate) ? rate : obj.rate;
//        tmp.time = (time + obj.time) / 2;
//        return tmp;
//    }
//};
//// ����������� ������� ��� ��������� ��������:
//double operator-(MyMoney objX, MyMoney objY) {
//    return objX.getMoney() - objY.getMoney();
//}
//// ���������� ����� ��������� ����������:
//MyMoney operator--(MyMoney& obj) {
//    if (obj.money > 1000) {
//        obj.money -= 1000;
//    }
//    else {
//        obj.money = 0;
//    }
//    return obj;
//}
//// ����������� ����� ��������� ����������:
//MyMoney operator--(MyMoney& obj, int) {
//    if (obj.time > 0) {
//        obj.time--;
//    }
//    else {
//        obj.time = 0;
//    }
//    return obj;
//}
//// ������� ������� ���������:
//int main() {
//    // ��������� ��������� �������:
//    system("chcp 1251>nul");
//    // �������� �������:
//    MyMoney objA("��� ���������", 1200, 7, 1);
//    objA.showAll();
//    // ���������� �������� ���� time:
//    objA--;
//    objA.showAll();
//    // ���������� �������� ���� time:
//    objA--;
//    objA.showAll();
//    // ���������� �������� ���� time:
//    objA++;
//    objA.showAll();
//    // ���������� �������� ���� money:
//    --objA;
//    objA.showAll();
//    // ���������� �������� ���� money:
//    --objA;
//    objA.showAll();
//    // ���������� �������� ���� money:
//    ++objA;
//    objA.showAll();
//    // �������� �������:
//    MyMoney objB("��� �����", 1100, 8, 5);
//    objB.showAll();
//    // �������� �������:
//    MyMoney objC;
//    // ���������� ����� ��������:
//    objC = objA + objB;
//    objC.showAll();
//    // ���������� �������� ��������:
//    cout << "������� � �������: " << objC - objB << endl;
//    // �������� ����������� ����:
//    system("pause>nul");
//    return 0;
//}
//----------------------------------------------------------
//			      ���������� � �������������
//----------------------------------------------------------
//#include <iostream>
//#include <cstdlib>
//#include <string>
//using namespace std;
//// �������� �������� ������:
//class MyMoney {
//public:
//    // ���� �������� ������:
//    string name;
//    double money;
//    double rate;
//    int time;
//    // ������ �������� ������:
//    double getMoney() {
//        double s = money;
//        for (int k = 1; k <= time; k++) {
//            s *= (1 + rate / 100);
//        }
//        return s;
//    }
//    void showAll() {
//        cout << "���: " << name << endl;
//        cout << "�����: " << money << endl;
//        cout << "������ (%): " << rate << endl;
//        cout << "������ (���): " << time << endl;
//        cout << "�������� �����: " << getMoney() << endl;
//    }
//    void setAll(string n, double m, double r, int t) {
//        name = n;
//        money = m;
//        rate = r;
//        time = t;
//    }
//    // ����������� �������� ������ (������ ���������):
//    MyMoney(string n, double m, double r, int t) {
//        setAll(n, m, r, t);
//    }
//    // ����������� �������� ������ (��� ����������):
//    MyMoney() {
//        setAll("", 0, 0, 0);
//    }
//};
//// ����������� �����:
//class BigMoney : public MyMoney {
//public:
//    // ���� ������������ ������:
//    int periods;
//    // ��������������� �������:
//    double getMoney() {
//        double s = money;
//        for (int k = 1; k <= time * periods; k++) {
//            s *= (1 + rate / 100 / periods);
//        }
//        return s;
//    }
//    void showAll() {
//        cout << "���: " << name << endl;
//        cout << "�����: " << money << endl;
//        cout << "������ (%): " << rate << endl;
//        cout << "������ (���): " << time << endl;
//        cout << "���������� � ���: " << periods << endl;
//        cout << "�������� �����: " << getMoney() << endl;
//    }
//    void setAll(string n, double m, double r, int t, int p) {
//        MyMoney::setAll(n, m, r, t);
//        periods = p;
//    }
//    // ����������� ������������ ������ (���� ����������):
//    BigMoney(string n, double m, double r, int t, int p = 1) : MyMoney(n, m, r, t) {
//        periods = p;
//    }
//    // ����������� ������������ ������ (��� ����������):
//    BigMoney() : MyMoney() {
//        periods = 1;
//    }
//};
//// ������� ������� ���������:
//int main() {
//    // ��������� ��������� �������:
//    system("chcp 1251>nul");
//    // �������� ������� ������ MyMoney:
//    MyMoney objA("��� ���������", 1200, 8, 5);
//    // �������� �������� ������ BigMoney:
//    BigMoney objB("���� �����", 1000, 7, 6, 2);
//    BigMoney objC("��� �����", 1500, 6, 8);
//    BigMoney objD;
//    objD.setAll("��������� ������", 800, 10, 3, 4);
//    // �������� ������������� ��������:
//    objA.showAll();
//    cout << endl;
//    objB.showAll();
//    cout << endl;
//    objC.showAll();
//    cout << endl;
//    objD.showAll();
//    // �������� ����������� ����:
//    system("pause>nul");
//    return 0;
//}