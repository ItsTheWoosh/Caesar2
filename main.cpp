#include <iostream>
#include <fstream>

using namespace std;

    bool isLetter(char s) {
        if ((s >= 65 && s <= 90) || (s >= 97 && s <= 122)) {
            return true;
        } else return false;
    }

    bool isABC (char s) {
        if ((s >= 97 && s <= 99) || (s >= 65 && s <= 67)) {
            return true;
        } else return false;
    }

int main(){
    ofstream outFile("Caesar2.txt");
    ifstream inFile("Caesar2.in");

    char plain;
    char cypher;
    bool letter;

    if (inFile.fail()) {
        cout << "Sorry, could not open file" << endl;
    }

    while (inFile.get(plain)) {
        letter = isLetter(plain);
        if (letter == true) {
            if (isABC(plain) == true) cypher = plain + 23;
            else                      cypher = plain - 3;
        } else cypher = plain;
        outFile << cypher;
    }
    return 0;
}
