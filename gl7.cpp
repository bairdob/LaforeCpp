//gl7.cpp
#include <iostream>
using namespace std;
class employee{
private:
	string name;
	long number;
public:
	employee(string str = 0, long n = 0) : name(str),number(n){};
	~employee();
	
};
void reversit(char str[]);
int main(){
	// char str[] = "asdasd123";
	// cout << str << endl;
	// reversit(str);
	// cout << str << endl;

	
	
	return 0;

}
void reversit(char str[]){
	for (int i = 0; i < (strlen(str)/2); i++){
		char temp = str[i];
		str[i] = str[strlen(str)-i-1];
		str[strlen(str)-i-1] = temp;
	}
}