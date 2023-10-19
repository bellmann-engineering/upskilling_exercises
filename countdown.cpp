#include <iostream>

int main() 
{
    int startNumber;
    std::cout << "Enter a positive integer to start the countdown: ";
    std::cin >> startNumber;

    if (startNumber > 0) {
        std::cout << "Countdown: ";
        for (int i = startNumber; i >= 1; i--) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "Please enter a positive integer to start the countdown." << std::endl;
    }

    return 0;
}

---

#include <iostream>

void countdown(int n) ;

int main() 
{
    int startNumber;
    std::cout << "Enter a positive integer to start the countdown: ";
    std::cin >> startNumber;

    if (startNumber > 0) {
        std::cout << "Countdown: ";
        countdown(startNumber);
        std::cout << std::endl;
    } else {
        std::cout << "Please enter a positive integer to start the countdown." << std::endl;
    }

    return 0;
}

void countdown(int n) 
{
    if (n >= 1) {
        std::cout << n << " ";
        countdown(n - 1);
    }
}
