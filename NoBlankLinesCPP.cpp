//////////////////////////////////////////////written by mht83/////////////////////////////////////////
#include <iostream>
#include <fstream>
#include <string>

void DeleteEmptyLines(const std::string& filePath) {
    std::string modifiedContent = "";

    std::ifstream inputFile(filePath);
    if (!inputFile.is_open()) {
        std::cerr << "Error opening input file: " << filePath << std::endl;
        exit(1);
    }
    std::ofstream outputFile("output.txt");
    if (!outputFile.is_open()) {
        std::cerr << "Error opening output file: output.txt" << std::endl;
        exit(1);
    }
    int counter = 0;
    std::string currentLine;
    while (getline(inputFile, currentLine)) {
        if (!currentLine.empty()) {
            modifiedContent += currentLine + "\n";
            ++counter;
        }
        if (counter == 10) {
            counter = 0;
            outputFile << modifiedContent;
            modifiedContent = "";
        }
    }

    outputFile << modifiedContent;
    inputFile.close();
    outputFile.close();

    std::cout << "Task completed. Modified content saved in output.txt ." << std::endl;
}

int main() {
    DeleteEmptyLines("data.txt");
    return 0;
}
