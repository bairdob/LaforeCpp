//gl6.cpp
#include <iostream>
using namespace std;
class Int{
private:
	int data;
public:
	Int() : data(0){};
	Int(int n) : data(n){};
	Int add(Int n){return data+=n.data;}; 
	void show(){cout << data << endl;};
};
class tollBooth{
private:
	unsigned int total;
	double money;
public:
	tollBooth() : total(0), money(0) {};
	void payingCar(){total++; money += 0.5;};
	void nopayCar(){total++;};
	void display()const{cout << total << " " << money << endl;};

};
class time{
private:
	int hours;
	int minutes;
	int seconds;
public:
	time() : hours(0), minutes(0), seconds(0){};
	time(int h, int m, int s) : hours(h), minutes(m), seconds(s){};
	void show(){cout << hours << ":" << minutes << ":" << seconds << endl;};
	void add(const class time &t1, const class time &t2){
		if (t1.seconds + t2.seconds > 59) {minutes++; seconds +=  (t1.seconds + t2.seconds) % 60;}
			else  seconds += t1.seconds + t2.seconds;
		if (t1.minutes + t2.minutes > 59) {hours++; minutes  +=  (t1.minutes + t2.minutes) % 60;}
			else  minutes += t1.minutes + t2.minutes;
		hours += t1.hours + t2.hours;
	}
};

class employee{
private:
	int number;
	float budget;
public:
	//employee() : number(0), budget(0){};
	employee(int n = 0, float b = 0) : number(n), budget(b){};
	void show(){cout << number << " " << budget << endl;}
	void set(){
		int n;
		float b;
		cin >> n >> b;
		number = n;
		budget = b;
	}
};
class date{
private:
	int month;
	int day;
	int year;
public:
	date(int m = 0, int d = 0, int y = 0) : month(m), day(d), year(y){};
	void set(){
		int m, d, y;
		char ch;
		cin >> m >> ch >> d >> ch >> y;
		month = m; day = d; year = y; 
	};
	void show(){cout << month << "/" << day << "/" << year << endl;};
};
class angle{
private:
	int grad;
	float minutes;
	char direction;
public:
	angle(int g = 0, float m = 0, char d = 'N') : grad(g), minutes(m), direction(d){};
	void set(){
		int g; float m; char d,ch;
		cin >> g >> ch >> m >> ch >> d;
		grad = g; minutes = m; direction = d;
	};
	void show(){cout << grad << "°" << minutes << "` "<< direction << endl;};
};
class test_static{
private:
	int data;
	static int cnt;
public:
	test_static(){cnt++; data = cnt;};
	void show(){cout << data << " " << cnt;};
	
};
int test_static :: cnt = 0; // Статические поля нельзя инициализировать в теле класса, а также в методах. Статические поля должны инициализироваться аналогично глобальным переменным в области видимости файла
int main(){
	// Int i1;
	// Int i2(3);
	// Int i3(4);
	// i3.add(i2);
	// i1.show();
	// i2.show();
	// i3.show();

	// tollBooth tb1;
	// tb1.display();
	// tb1.payingCar();tb1.payingCar();
	// tb1.nopayCar();
	// tb1.display();

	// class time t1(1,32,30);
	// class time t2(1,32,34);
	// class time t3;
	// t3.add(t1,t2);
	// t3.show();

	// employee e1;
	// e1.set();
	// e1.show();

	// date d1;
	// d1.show();
	// d1.set();
	// d1.show();

	// angle a1;
	// a1.show();
	// a1.set();
	// a1.show();
	test_static t1,t2,t3;
	t2.show();
	return 0;
}
