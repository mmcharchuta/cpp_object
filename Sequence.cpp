#include "Sequence.h"
#include <fstream>
#include <iostream>

// Constructor
Sequence::Sequence() : sequenceData("") {}

// Method to read a sequence from a FASTA file
void Sequence::readFasta(const std::string &filePath) {
    std::ifstream file(filePath);
    if (!file.is_open()) {
        std::cerr << "Error opening file!" << std::endl;
        return;
    }

    std::string line;
    while (getline(file, line)) {
        if (line[0] != '>') {  // Ignore header lines starting with '>'
            sequenceData += line;
        }
    }

    file.close();
}

// Getter for sequence data
std::string Sequence::getSequence() const {
    return sequenceData;
}

