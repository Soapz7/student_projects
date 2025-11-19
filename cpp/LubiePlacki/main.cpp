#include <iostream>
#include <string>

using namespace std;

int main(){
	cout << "podaj x" <<endl;
	int x;
	cin >> x;
	if (x < 2) {
		cout << "x nie jest liczba pierwsza" << endl;
	}

	return 0;
}
