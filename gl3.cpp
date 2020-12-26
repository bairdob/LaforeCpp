//gl3.cpp
#include <iostream>
using namespace std;
void fahr(int n);
void celc(int n);
int main(){
	// int a = 7;
	// int i, j;
	// for (j = 0; j < 3; j++){
	// 	for (i = 1; i <= 10 ; i++) cout << (i + j * 10) * a<< " ";
	// 	cout << endl;
	// 	}

	// int choice;
	// //cin >> choice;
	// choice = 2;
	// int gr = 300;
	// switch(choice){
	// 	case 1 : fahr(gr); break;
	// 	case 2 : celc(gr);	break;
	// 	default : cout << "error";
	// }

	// char ch;
	// while ((ch = cin.get()) != '\n'){
	// 	int total = 0;
	// 	total = total *10 + (ch - '0');
	// 	cout << total;

	// }
	// cout << endl;

	// int a, b;
	// char op;
	// cin >> a >> op >> b;
	// switch (op){
	// 	case '/': cout << (static_cast<double>(a)/b); break;
	// 	case '+': cout << a + b; break;
	// 	case '-': cout << a - b; break;
	// 	case '*': cout << a - b; break;
	// 	default: cout << "Error";

 	// int a = 3;
 	// int i;
 	// for (i = 0; i < 3; i++){
 	// 	for (int j = a; j > 0; j--){
 	// 		cout << 'x';
 	// 	}
 	// 	cout << endl;
 	// }


	// long long a;
	// long long total = 1;
	// cin >> a;
	// while (a != 0){
	// 	for (int j = 1; j <= a; j++) total*=j;
	// 	cout << total << endl;
	// 	total = 1;
	// 	cin >> a;
	// }

	// double a, b, c;
	// cin >> a >> b >> c;
	// double total = a;
	// for (int i = 0; i < b; i++){
	// 	total+=(total*(c/100));
	// }
	// cout << total << endl;

	// upr8
	// int a, b, c, d, e, f;
	// a = 5; b = 10; c = 6;
	// d = 3; e = 2; f = 6;
	// // cin >> a >> b >> c;
	// // cin >> d >> e >> f;
	// e = b + e + (c + f) / 12;
	// f = (c + f) % 12;
	// d = d + a + e / 20;
	// e%=20;
	// cout << d << " " << e << " " << f;

	// //upr10
	// double a, b, c;
	// int cnt = 0;
	// a = 3000; b = 5.5; c = 5120;
	// do{
	// 	cnt++;
	// 	a+=(a*(b/100));
	// }while (a < c);
	// cout << cnt;

	return 0;
}
void fahr (int n){
	cout << static_cast<double>(n*9.0/5+32);
}
void celc(int n){
	cout << static_cast<double>((n-32)*5/9.0);
}