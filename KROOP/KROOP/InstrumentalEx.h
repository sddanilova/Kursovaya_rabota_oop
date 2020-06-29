#pragma once
#include <string>
using namespace std;
class InstrumentalEx {
public:
	class BelowZero {
	public: BelowZero(string val) {
		error = val;
	}
			string GetError() {
				return this->error;
			}
	private: string error;
	};
};