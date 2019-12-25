#include <cmath>
namespace am {
	class Int {
		private:
			int self;
			bool isArray = false;
			int size = -1;
		public:
			Int(int sz) {
				isArray = true;
				size = sz;
				int arrayContent = new int[size];
			}
			int getself() {
				return self;
			}
			Int& operator =(int &t) {
				self = t;
			}
			Int& operator =(Int &t) {
				self = t.getself();
			}
			int& operator [](int &t) {
				if (!isArray) return self;
				if (isArray && t <= size) {
					return arrayContent[t];
				}
				if (isArray && t > size) {
					return 0;
				}
			}
			int& operator [](Int &t) {
				if (!isArray) return self;
				if (isArray && t.getself() <= size) {
					return arrayContent[t.getself()];
				}
				return 0;
			}
			int& operator **(int &t) {
				return pow(self, t);
			}
			int& operator **(Int &t) {
				return pow(self, t.getself());
			}
			Int Int:: operator++() {
				++self;
				return *this;
			}
			Int Int:: operator++(int) {
				self++;
				return *this;
			}
	};
}
