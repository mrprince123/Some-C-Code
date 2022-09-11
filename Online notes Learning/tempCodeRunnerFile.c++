#include <iostream>
#include <fstream>

using namespace std;

int main(){
    // Create and open a text file
    ofstream MyFile("filename.txt");

    // Write to the file
    MyFile << "I am Contnet of this file";

    // Close the file
    MyFile.close();
}