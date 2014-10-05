/*
 * Etudiant.cpp
 *
 *  Created on: 5 oct. 2014
 *      Author: mperouma
 */

#include "Etudiant.h"


/** Constructor */
Etudiant::Etudiant() {
	// TODO Auto-generated constructor stub

}

Etudiant::~Etudiant() {
	// TODO Auto-generated destructor stub
}
/** Display */

char* Etudiant::display()
{
	sprintf(retS,"L'Etudiant %s du groupe %02d a la note %02d",getNom(),getGroupNumber(),getNote());
	return retS;
}
