//exercise1.cpp
#include <iostream>
#include <cstring>
using namespace std;


int menu();
void var1();
void var2_3();
int solve_var(int a, int b);
int solve_var(char ch, int n);


int main(){
	switch (menu()){
		case 1: 
			var1(); 
			break;
		case 2: 
			cout << "Введите имя, число вариантов: ";
			var2_3();
			break;
		case 3: 
			cout << "Введите фамилию, число вариантов: ";
			var2_3();
			break;
		default: 
			cout << "Error" << endl;
	}
	return 0;
}


int menu(){
	int n;
	cout << "Выберите способ вычисления варианта (число от 1-3): ";
	cin >> n;
 	return n;
};

void var1(){
	int list, number;
	cout << "Введите номер по списку, число вариантов: ";
	cin >> list >> number;
	cout << "Ваш вариант: " << solve_var(list, number) << endl; // 
}

void var2_3(){
	string name;
	int number;
	cin >> name >> number;
	cout << "Ваш вариант: " << solve_var(name[0], number) << endl;
}

int solve_var(int l, int n){
	if  (l < n) return (l % n);
		else if (l == n) return (n);
				else return (l % n);

}

int solve_var(char ch, int n){
	return (ch - 'A') % n + 1;
}