/*
 * Customer.h
 *
 *  Created on: Oct 6, 2021
 *      Author: djhar
 */

#ifndef CUSTOMER_H_
#define CUSTOMER_H_

#include <string>
using namespace std;

class Customer {
private:
	string _name;
	string _userName;
	string _password;
	string _passReset;
	int _credits;

public:
	Customer(string first, string user, string password, string passReset);
	void setName(string name);
	string getName();
	void setUserName(string user);
	string getUserName();
	void setPassword(string password);
	string getPassword();
	void setPassReset(string passReset);
	string getPassReset();
	void setCredits(int credits);
	int getCredits();
};

#endif /* CUSTOMER_H_ */
