//gl5.cpp
#include <iostream>
using namespace std;

float circarea(float radius);
double power(float, int n = 2);
void zerosmaller(int &, int &);
struct Distance{
	int feet;
	float inches;
};
Distance max(Distance a, Distance b);
long hms_to_secs(int hours, int minutes, int seconds);
struct time{
	int hours;
	int minutes;
	int seconds;
};
long time_to_secs(struct time &t);
struct time secs_to_time(int a);
void swap(int &, int &);
int cnt = 0;
void stat();
int main(){
	//cout << circarea(3);

	//cout << power(5);

	// int a = 5, b = 4;
	// cout << a << b;
	// zerosmaller(a,b);
	// cout << a << b;

	// Distance a = {5, 3.5}, b = {6, 4};
	// cout << max(a, b).feet;

	// cout << hms_to_secs(1, 1, 1);
	// struct time t = {1, 1, 1};
	// cout << time_to_secs(t) << endl;
	// cout << secs_to_time(3661).seconds;

	// int a = 5, b = 4;
	// cout << a << b;
	// swap(a,b);
	// cout << a << b;
	
	// cout <<cnt << endl;
	// stat();stat();stat();
	// cout <<cnt << endl;

	return 0;
}
struct time secs_to_time(int a){
	struct time b;
	b.hours = a / 3600;
	b.minutes =  (a % 3600) / 60;
	b.seconds = a % 60;
	return b;
}
long time_to_secs(struct time &t){
	return (t.hours * 3600 + t.minutes * 60 + t.seconds);
}
long hms_to_secs(int hours, int minutes, int seconds){
	return (hours * 3600 + minutes * 60 + seconds);
}
float circarea(float radius){
	return 3.14 * radius * radius;
}
double power(float a, int n){
	for (int i = 1; i < n; i++) a*=a;
	return a;
}
void zerosmaller(int &a, int &b){
	if (a > b) b = 0;
		else a = 0;
}

Distance max(Distance a, Distance b){
	if ((a.feet * 12 + a.inches) > (b.feet * 12 + b.inches)) return a;
		else return b;
}
void swap(int &a,int &b){
	int temp = a;
	a = b; 
	b = temp;
}
void stat(){
	cnt++;
	static int cnt1 = 0;
	cnt1++;
	if (cnt == 3) cout <<cnt1;
}