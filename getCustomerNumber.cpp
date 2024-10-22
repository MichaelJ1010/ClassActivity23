#include "./getCustomerNumber.hpp"
#include "./validateNumber.hpp"
#include <iostream>

using namespace std;

namespace customer {
	void getCustomerNumber() {
		string customerNumber;
		while(true){
			cout << "what is your customer number (should be two letters and four digits)?" << endl;
			cin >> customerNumber;
			cout << "validating number..." << endl;
			if (validate::validateNumber(customerNumber)) {
				cout << "\nvalidation completed! Your customer number is: " << customerNumber << endl;
				break;
			}
			cout << "Error: Customer number format incorrect." << "\n\n";

		}
		
	}
}