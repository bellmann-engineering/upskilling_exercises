#include <iostream>
#include <vector>

// ISP Violation
class DataProcessor {
public:
    virtual void process(const std::vector<std::string>& data) = 0;
    virtual void log(const std::string& message) = 0;
	virtual ~DataProcessor() {}
};


class CSVProcessor : DataProcessor {
public:
    void process(const std::vector<std::string>& data) {
        std::cout << "Processing CSV data:" << std::endl;
        for (const std::string& entry : data) {
            std::cout << "Record: " << entry << std::endl;
        }
    }

    void log(const std::string& message) {
        std::cout << "Logging: " << message << std::endl;
    }
};

class JSONProcessor : DataProcessor {
public:
    void process(const std::vector<std::string>& data) {
        std::cout << "Processing JSON data:" << std::endl;
        for (const std::string& entry : data) {
            std::cout << "Record: " << entry << std::endl;
        }
    }

    void log(const std::string& message) {
        // 
    }
};

// DIP Violation
class DataManager {
private:
    CSVProcessor* csvProcessor;
    JSONProcessor* jsonProcessor;

public:
    DataManager(CSVProcessor* csvProcessor, JSONProcessor* jsonProcessor)
        : csvProcessor(csvProcessor), jsonProcessor(jsonProcessor) {}

    void manageCSVData(const std::vector<std::string>& csvData) {
        std::cout << "Managing CSV data:" << std::endl;
        csvProcessor->process(csvData);
        csvProcessor->log("CSV Data processing complete.");
    }

    void manageJSONData(const std::vector<std::string>& jsonData) {
        std::cout << "Managing JSON data:" << std::endl;
        jsonProcessor->process(jsonData);
        jsonProcessor->log("JSON Data processing complete.");
    }
};

int main() {
    CSVProcessor csvProcessor;
    JSONProcessor jsonProcessor;

    DataManager dataManager(&csvProcessor, &jsonProcessor);

    std::vector<std::string> csvData = {"1,John,Doe", "2,Jane,Smith", "3,Bob,Johnson"};
    std::vector<std::string> jsonData = {
        R"({"id": 1, "first_name": "John", "last_name": "Doe"})",
        R"({"id": 2, "first_name": "Jane", "last_name": "Smith"})",
        R"({"id": 3, "first_name": "Bob", "last_name": "Johnson"})"};

    dataManager.manageCSVData(csvData);
    dataManager.manageJSONData(jsonData);

    return 0;
}
