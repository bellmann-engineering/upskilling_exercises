#ifndef MYCUSTEX_
#define MYCUSTEX_

#include <exception>

class MyCustomException : public std::exception {
public:
    MyCustomException(const char* message) : message_(message) {}

    // Override the what() function to provide a description of the exception
    const char* what() const noexcept override {
        return message_.c_str();
    }

private:
    std::string message_;
};

#endif // MYCUSTEX_
