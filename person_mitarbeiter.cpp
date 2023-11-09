#include <iostream>

class Person {
 private:
    std::string firstname_;
    std::string lastname_;

 public:
    // Alternative:
    // Person(std::string first, std::string last) {
    //     firstname_ = first;
    //     lastname_ = last;
    // }

    Person(std::string first, std::string last) 
       : firstname_(first), 
         lastname_(last) {
    }

    virtual void print() {
        std::cout << lastname_ << std::endl; 
    }
};

class Mitarbeiter : Person {
  private:
    std::string personalnummer_;

  public:
    Mitarbeiter(std::string first, std::string last, std::string nr) : Person(first,  last), personalnummer_(nr)  {
        //alternative: personalnummer_ = nr;
    }

    void print() override {
        Person::print();
        std::cout << personalnummer_ << std::endl;
    }
};

int main() {
    Mitarbeiter ma("Hans", "Meier", "123");
    ma.print();
}

