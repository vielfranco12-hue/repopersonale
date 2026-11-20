#include <iostream>
using namespace std;
int main () {

int giorno;
cout << "------------ Regali E Misteri -------" << endl;
cout << "------------ Sei Uno Dei Invitati Ad Una Festa Di compleanno a casa di qualcuno -------" << endl;
cout << "------------ Pero Ci Sono Anomalie Ma ogni decisione deve essere saggia-------" << endl;
cout << "Scegli Delle Opzioni Tra 1 Ad 8" << endl;
cout << "Opzione 1 :(hai gia trovato anomalie nel cibo) lasci la festa" << endl;
cout << " Opzione 2 : Partecipi Alla Festa con cautela  " << endl;
cout << "Opzione 3 Coltello" << endl;
cout << "Opizione 4 Giochi a tris e mangi solo snack Ma ti regalano indietro 5 euro,accetti?" << endl;
cout << " Opzioni 5 ti scateni troppo(hai trovato anomalie nelle stanze ed oggetti)" << endl;
cout << "opzione 6 meme" << endl;
cout << "opzione 7 prendi tutto" << endl;
cout << "opzione 8 fai niente anche se ci sono anomalie che sembrano pericolose" << endl;
cout << " Se Scegli Delle Opzioni 8 o un opzione invalida ti portera allo stesso finale" << endl;
cin >> giorno;
switch(giorno) {

case 1:
cout << "Finale Neutrale(non Partecipi)" << endl;
break;

case 2:
cout << "Finale Buono(hai trovato una torta normale,giocato a battaglia navale e sei al sicuro)" << endl;
break;

case 3:
cout << "Finale Peggiore:in verita erano amichevoli ma perche li hai eliminati" << endl;
break;

case 4:
cout << "Finale Migliore :Almeno 5 euro potevi permetterti qualcosa e li hai ringraziati anche se erano anomalie" << endl;
break;

case 5:
cout << "Finale Cattivo:Hai Fatto Del Male A qualcuno Non Partecipi Piu " <<endl;
break;

case 6:
cout << "Finale 6 Meme :hahaha :) divertente " << endl;
break;

case 7:
cout << "Finale avido:sei avido perche hai preso tutto" << endl;
break;

default:
cout << "finale neutro 2 :fai NIente quindi ovviamente non è successo niente" <<endl;
break;
































}






















        return 0;
}
