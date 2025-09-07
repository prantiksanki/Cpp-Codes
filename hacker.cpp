#include <iostream>
#include <cstdlib>
#include <ctime>
#include <unistd.h> // for usleep

using namespace std;

int main() {
    srand(time(0)); // Seed random

    const char charset[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789@#$%&*";
    int rows = 25;   // number of lines
    int cols = 80;   // number of characters per line

    while (true) {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                char c = charset[rand() % (sizeof(charset) - 1)];
                cout << "\033[32m" << c << "\033[0m"; // green text
            }
            cout << endl;
        }
        usleep(50000);   // delay for scrolling effect
        cout << "\033[2J\033[1;1H"; // clear screen and reset cursor
    }

    return 0;
}
