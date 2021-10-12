/*
 * Customer.cpp
 *
 *  Created on: Oct 6, 2021
 *      Author: djhar
 */

#include "Customer.h"

Customer::Customer(string name, string user, string password, string passReset) {
	_name = name;
	_userName = user;
	_password = password;
	_passReset = passReset;
	_credits = 100;
}

void Customer::setName(string first) {
	_name = first;
}

string Customer::getName() {
	return _name;
}

void Customer::setUserName(string user) {
	_userName = user;
}

string Customer::getUserName() {
	return _userName;
}

void Customer::setPassword(string password) {
	_password = password;
}

string Customer::getPassword() {
	return _password;
}

void Customer::setPassReset(string passReset) {
	_passReset = passReset;
}

string Customer::getPassReset() {
	return _passReset;
}

void Customer::setCredits(int credits) {
	_credits = credits;
}

int Customer::getCredits() {
	return _credits;
}
