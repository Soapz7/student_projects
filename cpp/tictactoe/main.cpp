#include <iostream>

using namespace std;

int main(){
	char tab[3][3]={
		{'-','-','-'},
		{'-','-','-'},
		{'-','-','-'}
	};

	int wiersze = 3;
	int kolumny = 3;



	for(int o = 0; o < 9; o++){
		int a1;
		int a2;
		cout<<"gdzie wprowadzic kolo? podaj wiersz a potem kolumne (0-2)"<<endl;
		cin>>a1;
		cin>>a2;
		if(tab[a1][a2] != 'O' && tab[a1][a2]!= 'X'){
		tab[a1][a2] = 'O';
		}else{
		cout<<"To miejsce jest zajete"<<endl;
		}
		cout<<"gdzie wprowadzic x (0-2)"<<endl;
		cin>>a1;
		cin>>a2;
		if(tab[a1][a2] != 'O' && tab[a1][a2]!= 'X'){
		tab[a1][a2] = 'X';
		}

		for(int i = 0; i < wiersze; i++){
			for(int j = 0; j < kolumny; j++){
				cout<<tab[i][j];
				cout<<" ";
			}
			cout<<endl;
		}

	if(a1 == 'K'){
	return 0;
	}
	}
	return 0;
}
