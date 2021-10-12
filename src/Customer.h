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
	string _fName;
	string _lName;
	string _userName;
	string _password;
	string _passReset;
	int _credits;

public:
	Customer(string first, string last, string user, string password, string passReset);
	void setFName();
	string getFName();
	void setLName();
	string getLName();
	void setUserName();
	string getUserName();
	void setPassword();
	void setPassReset();
};

#endif /* CUSTOMER_H_ */
