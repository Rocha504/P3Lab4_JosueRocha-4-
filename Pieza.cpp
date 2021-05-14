#include "Pieza.h"
#include <iostream>

using std::cout;
using std::endl;

	void Pieza::setrep(char a){
		this->rep=a;
	}

	void Pieza::setisReina(char q){
		q=getrep();
		
		if(q=='R'){
			
			this->isReina=true;
			this->bando=true;
		}
		else
		if(q=='r'){
			this->isReina=true;
			this->bando=false;
		}
		else{
			this->isReina=false;
		}
	}
	
	char Pieza :: getrep(){
		return this -> rep;
	}
	
	void Pieza::setBando(char x){
		
		
		bool bando;
		x=getrep();
		
		if(x=='0'){
			bando=true;
		}
		else
		if(x=='X'){
			bando=false;
		}
		this->bando=bando;	
	}

		

Pieza::Pieza()
{
	
 
	
}

Pieza::~Pieza()
{
}