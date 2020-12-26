//gl2.cpp
#include <iostream>
#include <iomanip> //setw()
#include <cctype>
using namespace std;
int main(){
	// const double gal = 7.481;
	// double a;
	// //cin >> a; 
	// a = 2 ;
	// cout << a *gal << endl;
	// cout << 1990 << setw(12) << "135\n"
	// 	<< 1991 << setw(12) << "7290\n"
	// 	<< 1992 << setw(12) << "11300\n"
	// 	<< 1993 << setw(12) << "16200\n";
	// const int b = 10;
	// int c = 2*b;
	// cout << b << endl;
	// cout << c << endl;
	// cout << --c << endl;
	// cout << "Hello\nworld\n";
	// char d;
	// // cin >> d;
	// d = 'A';
	// cout << islower(d) << endl;
	// const double funt = 1.487;
	// const double frank = 0.172;
	// const double mark = 0.584;
	// const double yen = 0.00955;
	// double e = 1000;
	// cout << e / funt << " " << e / frank << " " << e / mark << " " << e / yen << endl;
	// int celcium = 41;
	// cout << static_cast<double>(celcium) * 9 / 5 + 32 << endl;
	// cout << "Moscow" << setw(12) <<  setfill('.') << 8425785<< endl;

	// double  a, b, c, d;
	// char dummychar;
	// cin >> a >> dummychar >> b;
	// cin >> c >> dummychar >> d;
	// cout << (a * d + b * c) << "/" << (b * d)<< endl;

	const double funt = 20;
	const double shilling = 12;
	const double koef = 240.0;
	double a, b, c;
	double d = 7.89;
	cin >> a >> b >> c;
	cout << (a*funt*shilling + b*shilling + c) / koef << endl;

 	// cout << setiosflags(ios::right) << 
 	// 	"Фамилия" << setw(10) << "Имя" << setw(20) << "Адрес" << setw(22) << "Город" << endl;
 	// cout << setiosflags(ios::right) << 
 	// 	"Петров" << setw(19) << "Василий" << setw(25) << "Кленовая 16" << setw(35) << "Санкт-Петербург" << endl;


	return 0;
}