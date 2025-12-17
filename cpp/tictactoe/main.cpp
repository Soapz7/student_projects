#include <iostream>
#include <ctime>

using namespace std;

void wypiszTab(char tab[3][3]){
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
		cout<<tab[i][j]<<" ";
		}
	cout<<endl;
	}
}

int main(){
	char tab[3][3]={
		{'-','-','-'},
		{'-','-','-'},
		{'-','-','-'}
	};

	int wiersze = 3;
	int kolumny = 3;

	wypiszTab(tab);

	for(int o = 0; o < 9; o++){
		int a1;
		int a2;

		ruch1:

		cout<<"gdzie wprowadzic kolo? podaj wiersz a potem kolumne (0-2)"<<endl;
		cin>>a1;
		cin>>a2;
		if(tab[a1][a2] != 'O' && tab[a1][a2]!= 'X'){
		tab[a1][a2] = 'O';

		wypiszTab(tab);

		}else{
		cout<<"To miejsce jest zajete"<<endl;
		o--;
		goto ruch1;
		}

		ruch2:

		cout<<"gdzie wprowadzic x (0-2)"<<endl;
		cin>>a1;
		cin>>a2;
		if(tab[a1][a2] != 'O' && tab[a1][a2]!= 'X'){
		tab[a1][a2] = 'X';

		wypiszTab(tab);

		}else{
		cout<<"to miejsce jest zajete"<<endl;
		o--;
		goto ruch2;

		if(tab[0][0]=='O' && tab[0][1]=='O' && tab[0][2]=='O'){
			cout<<"Wygrywa O !"<<endl;
		}else if(tab[1][0]=='O' && tab[1][1]=='O' && tab[1][2]=='O'){
			cout<<"Wygrywa O !"<<endl;
		}else if(tab[2][0]=='O' && tab[2][1]=='O' && tab[2][2]=='O'){
			cout<<"Wrgrywa O !"<<endl;
		}




		}

	}
	return 0;
}
