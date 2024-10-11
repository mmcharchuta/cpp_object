#include <iostream>
#include "Fasta_reader.h"

int main() {
    Fasta_reader Genome;
    std::string GenomeFilePath = "C:\\Users\\Lenovo\\CLionProjects\\cpp_object\\Genome.fasta";  // Replace with your FASTA file path
    // Read sequence from FASTA file
    Genome.readFasta(GenomeFilePath);

    // Print the sequence data
    std::cout << "Genome sequence: " << Genome.getSequence() << std::endl;

    Fasta_reader Motif;
    std::string MotifFilePath = "C:\\Users\\Lenovo\\CLionProjects\\cpp_object\\motif.fasta";  // Replace with your FASTA file path
    // Read sequence from FASTA file
    Motif.readFasta(MotifFilePath);

    // Print the sequence data
    std::cout << "Motif sequence: " << Motif.getSequence() << std::endl;

    return 0;
}

