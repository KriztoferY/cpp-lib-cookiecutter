#include <cstdlib>    // EXIT_*
#include <iostream>   // cout
#include <string>     // stoull()

#include "ProjectConfig.h"

using namespace std;

// clang-format off
void print_usage(const string& executable) {
    std::cout << executable << " Version " 
              << {{cookiecutter.project_name.capitalize().replace(' ', '').replace('-', '_')}}_VERSION_MAJOR << "."
              << {{cookiecutter.project_name.capitalize().replace(' ', '').replace('-', '_')}}_VERSION_MINOR << "." 
              << {{cookiecutter.project_name.capitalize().replace(' ', '').replace('-', '_')}}_VERSION_PATCH
              << std::endl;
    std::cout << "USAGE: " << executable << " <arg1>" << std::endl;
    exit(EXIT_FAILURE);
}
// clang-format on

int main(int argc, char** argv) {
    if (argc != 2) print_usage(argv[0]);

    try {
        auto arg1 = std::stoull(argv[1]);
        cout << "arg1 = " << arg1 << '\n';
        return EXIT_SUCCESS;
    }
    catch (const std::exception& e) {
        cerr << "Uncaught exception: " << e.what() << '\n';
    }

    return EXIT_FAILURE;
}

// -----------------------------------------------------------------------------

/* === COMPILE & RUN ===
g++ demo.cpp -o demo -std=c++20 -g -Og -Wall -pedantic -march=native && ./demo
42 g++ demo.cpp -o demo -std=c++20 -O3 -march=native -DNDEBUG && ./demo 42
*/

/* === SAMPLE OUTPUT ===
arg1 = 42
*/