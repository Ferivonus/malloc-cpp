#include "DatabaseManager.h"
#include "NameManager.h"
#include "malloc_math.h"

#include <iostream>
#include <stdexcept>
#include <cstdlib>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <mode> [filename.txt]\n";
        std::cerr << "Modes: math / names / db\n";
        return EXIT_FAILURE;
    }

    std::string mode = argv[1];

    try {
        if (mode == "math") {
            if (argc < 3) {
                std::cerr << "Filename required for math mode.\n";
                return EXIT_FAILURE;
            }
            std::string filename = argv[2];

            MallocMath math;
            math.loadNumbersFromFile(filename);
            math.printNumbers();
            std::cout << "Addition: " << math.performAddition() << std::endl;
            std::cout << "Subtraction: " << math.performSubtraction() << std::endl;
            std::cout << "Multiplication: " << math.performMultiplication() << std::endl;
            std::cout << "Division: " << math.performDivision() << std::endl;
            math.performAllCalculationsAndWriteToFile();
        }
        else if (mode == "names") {
            if (argc < 3) {
                std::cerr << "Filename required for names mode.\n";
                return EXIT_FAILURE;
            }
            std::string filename = argv[2];

            NameManager nameManager;
            nameManager.readNamesFromFile(filename);
            nameManager.printNames();
        }
        else if (mode == "db") {
            if (argc < 3) {
                std::cerr << "Filename required for database mode.\n";
                return EXIT_FAILURE;
            }
            std::string filename = argv[2];

            DatabaseManager dbManager("students.db");

            if (!dbManager.openDatabase()) {
                std::cerr << "Failed to open database.\n";
                return EXIT_FAILURE;
            }

            if (!dbManager.createTables()) {
                std::cerr << "Failed to create tables.\n";
                dbManager.closeDatabase();
                return EXIT_FAILURE;
            }

            if (!dbManager.insertFromTxtFile(filename)) {
                std::cerr << "Failed to insert students from file.\n";
                dbManager.closeDatabase();
                return EXIT_FAILURE;
            }

            dbManager.getAllStudents();
            dbManager.closeDatabase();
        }
        else {
            std::cerr << "Invalid mode! Use 'math', 'names', or 'db'.\n";
            return EXIT_FAILURE;
        }
    }
    catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
