//gl4.cpp
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

struct phone{
	int city;
	int station;
	int number;
};
struct point{
	int x;
	int y;
};
struct Distance{
	int feet;
	float inches;
};
struct volume{
	Distance width;
	Distance height;
	Distance length;
};
struct employee{
	int number;
	float budget;
};
struct date{
	int month;
	int day;
	int year;
};
enum etype {laborer, secretary, manager, accountant, executive, researcher};
struct employee2{
	int number;
	float budget;
	//etype type;
	int type;
	date days;
};
struct time{
	int hours;
	int minutes;
	int seconds;
};
int main(){
	// phone p1 = {415,555,1212};
	// cout <<"("<< p1.city <<") "<< p1.station <<"-"<< p1.number << endl;
	// phone p2;
	// cin >> p2.city >> p2.station >> p2.number;
	// cout <<"("<< p2.city <<") "<< p2.station <<"-"<< p2.number << endl;
	
	// point p1,p2;
	// cin >> p1.x >> p1.y >> p2.x >> p2.y;
	// point p3 = {p1.x + p2.x, p1.y + p2.y};
	// cout << p3.x << " " << p3.y << endl;

	// volume v1 ={{1,1},{1,1},{1,1}};
	// double s1, s2, s3;
	// s1 = v1.width.inches*0.08+v1.width.feet;
	// s2 = v1.height.inches*0.08+v1.height.feet;
	// s3 = v1.length.inches*0.08+v1.length.feet;
	// cout << s1*s2*s3;

	// employee e1,e2,e3;
	// cin >> e1.number >> e1.budget;
	// cout << e1.number << " " << e1.budget << endl;

	// date d1;
	// char ch;
	// cin >> d1.month >>ch >> d1.day >> ch >> d1.year;
	// cout << d1.month << "/" << d1.day << "/" << d1.year << endl;

	// enum etype {laborer, secretary, manager, accountant, executive, researcher};
	// char ch = 'a';
	// etype e1;
	// switch (ch){
	// 	case 'l': e1 = laborer; break;
	// 	case 's': e1 = secretary; break;
	// 	case 'm': e1 = manager; break;
	// 	case 'a': e1 = accountant; break;
	// 	case 'e': e1 = executive; break;
	// 	case 'r': e1 = researcher; break;
	// 	default: cout << "Error";
	// }
	// switch (e1){
	// 	case 0: cout << "laborer" << endl; break;
	// 	case 1: cout << "secretary" << endl; break;
	// 	case 2: cout << "manager" << endl; break;
	// 	case 3: cout << "accountant" << endl; break;
	// 	case 4: cout << "executive" << endl; break;
	// 	case 5: cout << "researcher" << endl; break;
	// 	default: cout << "Error";
	// }

	// employee2 e2;
	// char ch;
	// cin >> e2.number >> e2.budget >> e2.type >> e2.days.month >> ch >> e2.days.day >> ch >> e2.days.year;
	// cout  << e2.number << e2.budget << e2.type << e2.days.month << e2.days.day << e2.days.year << endl;

	// struct time t1;
	// cin >> t1.hours >> t1.minutes >> t1.seconds;
	// long totalseсs = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
	// cout << totalseсs;

	return 0;
}