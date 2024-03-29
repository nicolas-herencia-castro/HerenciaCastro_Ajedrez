#include "chess.h"
#include "figures.h"

void display(){
	char** casillero1=superImpose(rotateL(flipV(rook)),reverse(whiteSquare));
	char** casillero2=superImpose(rotateR(flipV(knight)),whiteSquare);
	char** casillero3=superImpose(rotateR(flipV(bishop)),reverse(whiteSquare));
	char** casillero4=superImpose(rotateR(flipV(queen)),whiteSquare);
	char** casillero5=superImpose(rotateR(flipV(king)),reverse(whiteSquare));
	char** casillero6=superImpose(rotateR(flipV(bishop)),whiteSquare);
	char** casillero7=superImpose(rotateR(flipV(knight)),reverse(whiteSquare));
	char** casillero8=superImpose(rotateR(flipV(rook)),whiteSquare);
	char** casillero1n=superImpose(rotateL(flipV(reverse(rook))),whiteSquare);
	char** casillero2n=superImpose(rotateL(flipV(reverse(knight))),reverse(whiteSquare));
	char** casillero3n=superImpose(rotateL(flipV(reverse(bishop))),whiteSquare);
	char** casillero4n=superImpose(rotateL(flipV(reverse(queen))),reverse(whiteSquare));
	char** casillero5n=superImpose(rotateL(flipV(reverse(king))),whiteSquare);
	char** casillero6n=superImpose(rotateL(flipV(reverse(bishop))),reverse(whiteSquare));
	char** casillero7n=superImpose(rotateL(flipV(reverse(knight))),whiteSquare);
	char** casillero8n=superImpose(rotateL(flipV(reverse(rook))),reverse(whiteSquare));
	char** primermitad=join(join(casillero1,casillero2),join(casillero3,casillero4));
	char** segundamitad=join(join(casillero5,casillero6),join(casillero7,casillero8));
	char** primermitadn=join(join(casillero1n,casillero2n),join(casillero3n,casillero4n));
	char** segundamitadn=join(join(casillero5n,casillero6n),join(casillero7n,casillero8n));
	char** casillero1peonblanco=superImpose(pawn,whiteSquare);
	char** casillero2peonblanco=superImpose(pawn,reverse(whiteSquare));
	char** casillero1peonnegro=superImpose(rotateL(flipV(reverse(pawn))),reverse(whiteSquare));
	char** casillero2peonnegro=superImpose(rotateL(flipV(reverse(pawn))),whiteSquare);
	char** primerafila=join(primermitad,segundamitad);
	char** segundafila=repeatH(join(casillero1peonblanco,casillero2peonblanco),4);
	char** tercerafila=repeatH(join(reverse(whiteSquare),whiteSquare),4);
	char** cuartafila=repeatH(join(whiteSquare,reverse(whiteSquare)),4);
	char** septimafila=repeatH(join(casillero1peonnegro,casillero2peonnegro),4);
	char** octavafila=join(primermitadn,segundamitadn);
	char** columna12=up(primerafila,segundafila);
	char** filasespacioblanco=repeatV(up(tercerafila,cuartafila),2);
	char** columna16=up(columna12,filasespacioblanco);
	char** columna17=up(columna16,septimafila);
	char** columna18=up(columna17,octavafila);
	char** rl=rotateL(columna18);
	char** fv=flipV(rl);
	interpreter(fv);
}
