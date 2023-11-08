#include <iostream>

class Person {
  private:
	std::string firstname;
	std::string lastname;
  
  public:
	Person(std::string first, std::string last) {
		firstname = first;
		lastname = last;
	}

	// Alternative:
	// Person(std::string first, std::string last) : firstname(first), lastname(last) {	
	// }

	virtual void print() {
		std::cout << lastname << ", " << firstname << "\n";
	}
};

class Mitarbeiter : Person {
  private:
    std::string personalnummer;	
  public:
	Mitarbeiter(std::string first, std::string last, std::string nr) : Person(first, last) {
		personalnummer = nr;
	}

	void print() override {
		Person::print();
		std::cout << personalnummer << "\n";
	}
};

int main() {
	Mitarbeiter ma("Hans", "Müller", "123");
	ma.print();

	return 0;
}
