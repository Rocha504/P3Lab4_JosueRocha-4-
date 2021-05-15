#ifndef PIEZA_H
#define PIEZA_H
#include<string>

class Pieza
{
	private:
		
		string rep;
		bool bando;
		bool isReina;
	 
	public:
		Pieza();
		~Pieza();
		
		void setBando(char);
		void setisReina(char);
		void setrep(char);
		char getrep();
 		
		
};

#endif