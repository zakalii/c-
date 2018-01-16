/* -------------------------------------------
Name: 
Student number: 
Email:
Section: 
Date: 
----------------------------------------------
Assignment: 1
Milestone:  2
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// This source file needs to "know about" the structures you declared
// in the header file before referring to those new types:
// HINT: put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
// #include your contacts header file on the next line:

#include "contacts.h"

int main(void)
{
	// Declare variables here:
	struct Name usrName;// = { '\0', '\0', '\0' };
	struct Address usrAddress;// = { 0, '\0', 0, '\0', '\0' };
	struct Numbers usrNumber;// = { '\0', '\0', '\0' };

	char prompt[2] = { 0 };

	// Display the title
	printf("Contact Management System\n");
	printf("-------------------------\n");



	// Contact Name Input:
	// First Name
	printf("Please enter the contact's first name: ");
	scanf("%30s", usrName.firstName);

	// Middle Initial - Optional
	prompt[0] = 1;
	do {// this version includes error checking as a bonus

		// optional input prompt
		printf("Do you want to enter a middle initial(s)? (y or n): ");
		scanf("%1s", prompt);
		// user agrees
		if (prompt[0] == 'y' || prompt[0] == 'Y') {
			printf("Please enter the contact's middle initial(s): ");
			scanf("%6s", usrName.middleInitial);
			prompt[0] = 0;
		}
		// user skips
		else if (prompt[0] == 'n' || prompt[0] == 'N') {
			prompt[0] = 0;
		}
		// wrong option
		else {
			prompt[0] = 1;
		}
	} while (prompt[0]);	// the value at index[0] should result in either 1 or 0

	// Last Name
	printf("Please enter the contact's last name: ");
	scanf("%35s", usrName.lastName);


	// Contact Address Input:
	// Street Number
	printf("Please enter the contact's street number: ");
	scanf("%d", &usrAddress.streetNumber);

	// Street Name
	printf("Please enter the contact's street name: ");
	scanf("%40s", usrAddress.street);

	// Apartment Number - Optional
	prompt[0] = 1;
	do {
		printf("Do you want to enter an appartment number? (y or n): ");
		scanf("%1s", prompt);

		if (prompt[0] == 'y' || prompt[0] == 'Y') {
			printf("Please enter the contact's appartment number: ");
			scanf("%d", &usrAddress.apartmentNumber);
			prompt[0] = 0;
		} else if (prompt[0] == 'n' || prompt[0] == 'N') {
			prompt[0] = 0;
		} else {
			prompt[0] = 1;
		}
	} while (prompt[0]);

	// Postal Code
	printf("Please enter the contact's postal code: ");
	scanf(" %7[^\n]", usrAddress.postalCode);

	// City
	printf("Please enter the contact's city: ");
	scanf("%40s", usrAddress.city);


	// Contact Numbers Input:
	// Cell number - Optional
	prompt[0] = 1;
	do {
		printf("Do you want to enter a cell phone number? (y or n): ");
		scanf("%1s", prompt);

		if (prompt[0] == 'y' || prompt[0] == 'Y') {
			printf("Please enter the contact's cell phone number: ");
			scanf("%20s", usrNumber.cell);
			prompt[0] = 0;
		} else if (prompt[0] == 'n' || prompt[0] == 'N') {
			prompt[0] = 0;
		} else {
			prompt[0] = 1;
		}
	} while (prompt[0]);

	// Home number - Optional
	prompt[0] = 1;
	do {
		printf("Do you want to enter a home phone number? (y or n): ");
		scanf("%1s", prompt);

		if (prompt[0] == 'y' || prompt[0] == 'Y') {
			printf("Please enter the contact's home phone number: ");
			scanf("%20s", usrNumber.home);
			prompt[0] = 0;
		} else if (prompt[0] == 'n' || prompt[0] == 'N') {
			prompt[0] = 0;
		} else {
			prompt[0] = 1;
		}
	} while (prompt[0]);


	// Business number - Optional
	prompt[0] = 1;
	do {
		printf("Do you want to enter a business phone number? (y or n): ");
		scanf("%1s", prompt);

		if (prompt[0] == 'y' || prompt[0] == 'Y') {
			printf("Please enter the contact's business phone number: ");
			scanf("%20s", usrNumber.business);
			prompt[0] = 0;
		} else if (prompt[0] == 'n' || prompt[0] == 'N') {
			prompt[0] = 0;
		} else {
			prompt[0] = 1;
		}
	} while (prompt[0]);


	// Display Contact Summary Details
	printf("\nContact Details");
	printf("\n---------------");
	
	printf("\nName Details");
	printf("\nFirst name: %s", usrName.firstName);
	printf("\nMiddle initial(s): %s", usrName.middleInitial);
	printf("\nLast name: %s", usrName.lastName);

	printf("\n\nAddress Details");
	printf("\nStreet number: %d", usrAddress.streetNumber);
	printf("\nStreet name: %s", usrAddress.street);
	printf("\nApartment: %d", usrAddress.apartmentNumber);
	printf("\nPostal code: %s", usrAddress.postalCode);
	printf("\nCity: %s", usrAddress.city);

	printf("\n\nPhone Numbers:");
	printf("\nCell phone number: %s", usrNumber.cell);
	printf("\nHome phone number: %s", usrNumber.home);
	printf("\nBusiness phone number: %s", usrNumber.business);

	// Display Completion Message
	printf("\n\nStructure test for Name, Address, and Numbers Done!\n");

	return 0;
}

/*  SAMPLE OUTPUT:
Contact Management System
-------------------------
Please enter the contact's first name: Tom
Do you want to enter a middle initial(s)? (y or n): y
Please enter the contact's middle initial(s): Wong
Please enter the contact's last name: Song
Please enter the contact's street number: 20
Please enter the contact's street name: Keele
Do you want to enter an appartment number? (y or n): y
Please enter the contact's appartment number: 40
Please enter the contact's postal code: A8A 4J4
Please enter the contact's city: Toronto
Do you want to enter a cell phone number? (y or n): Y
Please enter the contact's cell phone number: 905-111-6666
Do you want to enter a home phone number? (y or n): Y
Please enter the contact's home phone number: 705-222-7777
Do you want to enter a business phone number? (y or n): Y
Please enter the contact's business phone number: 416-333-8888
Contact Details
---------------
Name Details
First name: Tom
Middle initial(s): Wong
Last name: Song
Address Details
Street number: 20
Street name: Keele
Apartment: 40
Postal code: A8A 4J4
City: Toronto
Phone Numbers:
Cell phone number: 905-111-6666
Home phone number: 705-222-7777
Business phone number: 416-333-8888
Structure test for Name, Address, and Numbers Done!
*/
