#include <iostream>
#include <fstream>
#include <string>

class FileWriter {
public:
    virtual void writeToFile(const std::string& filename, const std::string& content) {
        std::ofstream file(filename);
        if (file.is_open()) {
            file << content;
            file.close();
        } else {
            std::cerr << "Unable to open file: " << filename << std::endl;
        }
    }

    virtual ~FileWriter() = default;
};

class FileReader {
public:
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

class FileAppender : public FileWriter {
public:
    void appendToFile(const std::string& filename, const std::string& content) override {
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
    FileWriter fileWriter;
    fileWriter.writeToFile("example.txt", "Hello, ");

    FileAppender fileAppender;
    fileAppender.appendToFile("example.txt", "world!");

    FileReader fileReader;
    std::string content;
    fileReader.readFromFile("example.txt", content);

    std::cout << "File content: " << content << std::endl;

    return 0;
}
