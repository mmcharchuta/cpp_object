#include "Sequence.h"
#include <fstream>
#include <sstream>
#include <iostream>

Sequence::Sequence() : sequence("") {}

// Reads a sequence from a FASTA file
bool Sequence::readFasta(const std::string& filePath) {
    std::ifstream file(filePath);
    if (!file.is_open()) {
        std::cerr << "Error: Could not open file " << filePath << std::endl;
        return false;
    }

    std::string line;
    std::ostringstream seqStream;

    while (std::getline(file, line)) {
        // Skip header line starting with '>'
        if (line[0] == '>') continue;
        // Append sequence lines
        seqStream << line;
    }

    sequence = seqStream.str();
    file.close();
    return true;
}

std::string Sequence::getSequence() const {
    return sequence;
}
