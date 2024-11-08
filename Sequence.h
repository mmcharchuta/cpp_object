#ifndef SEQUENCE_H
#define SEQUENCE_H

#include <string>

class Sequence {
private:
    std::string sequence;

public:
    // Constructor
    Sequence();

    // Method to read FASTA file
    bool readFasta(const std::string& filePath);

    // Getter for sequence
    std::string getSequence() const;
};

#endif // SEQUENCE_H
