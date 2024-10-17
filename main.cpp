#include <iostream>
#include "Sequence.h"

int main() {
    for(int i=3;i>0;i--) {
        std::cout << "Time to work with some sequences! " << i << std::endl;
    }
    Sequence Genome;
    std::string GenomeFilePath = "C:\\Users\\Lenovo\\CLionProjects\\cpp_object\\Genome.fasta";  // Replace with your FASTA file path
    // Read sequence from FASTA file
    Genome.readFasta(GenomeFilePath);

    // Print the sequence data
    std::cout << "Genome sequence: " << Genome.getSequence() << std::endl;

    Sequence Motif;
    std::string MotifFilePath = "C:\\Users\\Lenovo\\CLionProjects\\cpp_object\\motif.fasta";  // Replace with your FASTA file path
    // Read sequence from FASTA file
    Motif.readFasta(MotifFilePath);

    // Print the sequence data
    std::cout << "Motif sequence: " << Motif.getSequence() << std::endl;

    return 0;
}

