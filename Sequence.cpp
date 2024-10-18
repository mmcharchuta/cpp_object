#include "Sequence.h"
#include <fstream>
#include <iostream>
using namespace std;

// Constructor
Sequence::Sequence() : sequenceData("") {}

// Method to read a sequence from a FASTA file
void Sequence::readFasta(const std::string &filePath) {
    std::ifstream file(filePath);
    std::string line;
    while (getline(file, line)) {
        if (line[0] != '>') {  // Ignore header lines starting with '>'
            sequenceData += line;
        }
    }

    file.close();
}

string Sequence::getSequence() {
    return sequenceData;
}
