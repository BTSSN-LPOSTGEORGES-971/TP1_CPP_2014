/*
 * Etudiant.h
 *
 *  Created on: 5 oct. 2014
 *      Author: mperouma
 */

#ifndef ETUDIANT_H_
#define ETUDIANT_H_
#include<iostream>
class Etudiant {
public:
	Etudiant();
	virtual ~Etudiant();

	/** Accesseurs */
	int getNote(){return note;};
	void setNote(int newNote){note = newNote;};

	int getGroupNumber(){return group_number;};
	void setGroupNumber(int newGN){group_number = newGN;};

	char* getNom(){return nom;}
	void setNom(char* newName){sprintf(nom,"%s",newName);}

	/** Display */
	char* display();

private:
	int note;
	int group_number;
	char nom[255];

	//Display
	char retS[500];

};

#endif /* ETUDIANT_H_ */
