#ifndef PIEZA_H
#define PIEZA_H

class Pieza
{
	private:
		
		char rep;
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