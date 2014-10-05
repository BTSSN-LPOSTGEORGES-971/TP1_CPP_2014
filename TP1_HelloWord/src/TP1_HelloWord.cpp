//============================================================================
// Name        : TP1_HelloWord.cpp
// Author      : MP
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Etudiant.h"
using namespace std;

int main() {

	Etudiant *stud = new Etudiant();

	stud->setGroupNumber(1);
	stud->setNote(20);
	stud->setNom("NOM DE L'ETUDIANT");

	cout << stud->display() <<endl;
	return 0;
}
