#ifndef SEQUENCE_H
#define SEQUENCE_H

#include <string>

class Fasta_reader {
private:
    std::string sequenceData;
public:
    // Constructor
    Fasta_reader();

    // Method to read a sequence from a FASTA file
    void readFasta(const std::string &filePath);

    // Getter for sequence data
    std::string getSequence() const;
};

#endif

