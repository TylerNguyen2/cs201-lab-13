#include "template.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;



int main() {
    ifstream integers("integers-1.txt");
    ifstream doubles("doubles-1.txt");
    ifstream strings("strings.txt");
    ofstream output("output.txt");

    int myInts[100];
    double myDoubles[100];
    string myStrings[100];
    int position1;
    int position2;


    for (int i = 0; i < 100; i++) {
        integers >> myInts[i];
        doubles >> myDoubles[i];
        strings >> myStrings[i];
    }
    output << "Integers:" << endl;
    output << "Swapped items at positions 10 and 20" << endl;
    output << "Before: [10] " << myInts[10] << " [20] " << myInts[20] << endl;
    mySwap(myInts, 10, 20);
    output << "After: [10] " << myInts[10] << " [20] " << myInts[20] << endl;
    output << "Minimum: " << myMin(myInts) << endl;
    output << "Maximum: " << myMax(myInts) << endl;
    output << "The number 1 is at position " << mySearch(myInts, 1) << endl;
    output << "The number 5 is at position " << mySearch(myInts, 5) << endl;

    output << endl;

    output << "Doubles:" << endl;
    output << "Swapped items at positions 10 and 20" << endl;
    output << "Before: [10] " << myDoubles[10] << " [20] " << myDoubles[20] << endl;
    mySwapDouble(myDoubles, 10, 20);   // Use mySwapDoube funtion inted of mySwap funtion
    output << "After: [10] " << myDoubles[10] << " [20] " << myDoubles[20] << endl;
    output << "Minimum: " << myMinDouble(myDoubles) << endl;
    output << "Maximum: " << myMaxDouble(myDoubles) << endl;
    output << "The number 4.62557 is at position " << mySearchDouble(myDoubles, 4.62557) << endl;
    output << "The number 1.23456 is at position " << mySearchDouble(myDoubles, 1.23456) << endl;

    output << endl;

    output << "Strings:" << endl;
    output << "Swapped items at positions 10 and 20" << endl;
    output << "Before: [10] " << myStrings[10] << " [20] " << myStrings[20] << endl;
    mySwapString(myStrings, 10, 20);
    output << "After: [10] " << myStrings[10] << " [20] " << myStrings[20] << endl;
    output << "Minimum: " << myMinString(myStrings) << endl;
    output << "Maximum: " << myMaxString(myStrings) << endl;
    string compare = "Shoes";
    output << "The word Shoes is at position " << mySearchString(myStrings, compare) << endl;
    compare = "Pumpkin";
    output << "The number Pumpkin is at position " << mySearchString(myStrings, compare) << endl;

    output.close();
    system("pause");
    return 0;
}