#include <iostream>

using namespace std;

int main(){
	cout <<"podaj x" <<endl;
	int x;
	cin >> x;
	if(x % 2 == 0 && x & (x / x) == 0){
		cout << "x jest liczba pierwsza" << endl;
	} else {
		cout << "x nie jest liczba pierwsza" << endl;
	}

	return 0;
}
