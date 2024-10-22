#include <string>
#include "./validateNumber.hpp"

using namespace std;

namespace validate {
	bool validateNumber(string customerNumber) { // ensures that the number provided is in the correct format
		if (customerNumber.length() != 6) {
			return false;
		}
		for (int i = 0; i < customerNumber.length(); i++) {
			if (i < 2) {
				if (!isalpha(customerNumber[i])) {
					return false;
				}

			}
			else {
				if (!isdigit(customerNumber[i])) {
					return false;
				}
			}
		}
		return true;
	}
}