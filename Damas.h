#ifndef DAMAS_H
#define DAMAS_H

class Damas
{
	
	private:
		casilla*** tablero;
		
	public:
		Damas();
		~Damas();
		void printtablero(casilla***);
		void preparar(casilla***);
		bool winner(casilla***);
		bool movimiento(int,int,casilla***);
		void capturar();
		void jugar(int,int,casilla***);
		
	
};

#endif