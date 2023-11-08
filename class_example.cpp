#include <iostream>

class Rectangle 
{
private:
    double width;
    double height;
public:
    Rectangle(double w, double h) {
        width = w;
        height = h;
    }
    Rectangle() {
        width = 0.0;
        height = 0.0;
    }
    void setDimensions(double w, double h) {
        width = w;
        height = h;
    }
    double calculateArea() {
        return width * height;
    }
    void printDimensions() {
        std::cout << "Width: " << width << ", Height: " << height << std::endl;
    }
};

int main() 
{
    Rectangle rectangle1;
    rectangle1.setDimensions(4.5, 3.2);
    double area = rectangle1.calculateArea();
    
    std::cout << "Rectangle Area: " << area << std::endl;
    
    rectangle1.printDimensions();
 
    return 0;
}
