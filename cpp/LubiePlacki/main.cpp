#include <iostream>

using namespace std;

int main(){
	cout<<"podaj x" <<endl;
	int x;
	cin >> x;
	cout<<"podano " << x << endl;
	if (x>0) {
		cout<<"wieksze od 0 \n";
	} else {
		cout<<"mniejsze lub rowne 0 \n";
	}

	return 0;
}
