#include <iostream>
#include "Sequence.h"
#include "MDNA.h"
using namespace std;

int main() {
    int k = 2;
    MDNA Pair;
    string MotifFilePath = "C:\\Users\\Lenovo\\CLionProjects\\cpp_object\\motif.fasta";  // Replace with your FASTA file path
    Pair.getMotif().readFasta(MotifFilePath);
    string GenomeFilePath = "C:\\Users\\Lenovo\\CLionProjects\\cpp_object\\Genome.fasta";  // Replace with your FASTA file path
    Pair.getGenome().readFasta(GenomeFilePath);

    cout << Pair.getMotif().getSequence() << endl;
    cout << Pair.getGenome().getSequence() << endl;



    return 0;
}
