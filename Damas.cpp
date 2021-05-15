#include "Damas.h"
#include <iostream>

using std::cout;
using std::endl;

void Damas::printtablero(casilla*** c){
	for(int i=0;i<8;i++){
		cout<<" "<<i;
	}
	cout<<endl;
	for(int y=0;y<8;y++){
		cout<<y<<" ";
		for(int z=0;z<8;z++){
			cout<<" "<<casilla[y][z];
		}
		cout<<endl;
	}
}


Damas::Damas()
{
}

Damas::~Damas()
{
}