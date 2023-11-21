#include <iostream>
#include <fstream>
#include <string>
#include <vector>

class FileManager {
public:
    void writeToFile(const std::string& filename, const std::string& content) {
        std::ofstream file(filename);
        if (file.is_open()) {
            file << content;
            file.close();
        } else {
            std::cerr << "Unable to open file: " << filename << std::endl;
        }
    }

    void readFromFile(const std::string& filename, std::string& content) {
        std::ifstream file(filename);
        if (file.is_open()) {
            std::getline(file, content);
            file.close();
        } else {
            std::cerr << "Unable to open file: " << filename << std::endl;
        }
    }
};

class ExtendedFileManager : public FileManager {
public:
    // Violates Liskov Substitution Principle
    void appendToFile(const std::string& filename, const std::string& content) {
        std::ofstream file(filename, std::ios::app);
        if (file.is_open()) {
            file << content;
            file.close();
        } else {
            std::cerr << "Unable to open file: " << filename << std::endl;
        }
    }
};

int main() {
    FileManager fileManager;
    fileManager.writeToFile("example.txt", "Hello, ");

    // Violates Open/Closed Principle
    ExtendedFileManager extendedFileManager;
    extendedFileManager.appendToFile("example.txt", "world!");

    std::string content;
    fileManager.readFromFile("example.txt", content);

    std::cout << "File content: " << content << std::endl;

    return 0;
}
