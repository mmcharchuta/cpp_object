#include <iostream>
#include "Sequence.h"

int main() {
    Sequence seq;
    std::string filePath = "example.fasta";  // Replace with your FASTA file path

    // Read sequence from FASTA file
    seq.readFasta(filePath);

    // Print the sequence data
    std::cout << "Sequence: " << seq.getSequence() << std::endl;

    return 0;
}

