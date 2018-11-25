#pragma once

#include <iostream>

class Person {
private:
	static constexpr int LIMIT = 25;
	std::string mLastName; // Person's last name
	char mFirstName[LIMIT]; // Person's first name
public:
	Person() {
		mLastName = ""; 
		mFirstName[0] = '\0'; 
	} // #1

	Person(const std::string & ln, const char * fn = "Heyyou") : mLastName(ln) {
		strncpy(mFirstName, fn, LIMIT);
	}// #2

	// the following methods display mLastName and mFirstName
	void Show() const {
		std::cout << "Firstname: " << mFirstName << std::endl;
		std::cout << "Lastname: " << mLastName << std::endl;
	}// firstname lastname format

	void FormalShow() const {
		std::cout << "Lastname: " << mLastName << std::endl;
		std::cout << "Firstname: " << mFirstName << std::endl;
	} // lastname, firstname format
};
