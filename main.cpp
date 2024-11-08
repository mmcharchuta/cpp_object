#include <iostream>
#include <vector>  // Include for std::vector
#include "Sequence.h"
#include "MDNA.h"

namespace MC {
    using namespace std;

    int main() {
        int k = 2;
        MDNA Pair;

        string MotifFilePath = "C:\\Users\\Lenovo\\CLionProjects\\cpp_object\\motif.fasta";  // Replace with your FASTA file path
        Pair.getMotif().readFasta(MotifFilePath);

        string GenomeFilePath = "C:\\Users\\Lenovo\\CLionProjects\\cpp_object\\Genome.fasta";  // Replace with your FASTA file path
        Pair.getGenome().readFasta(GenomeFilePath);

        cout << "Motif sequence: " << Pair.getMotif().getSequence() << endl;
        cout << "Genome sequence: " << Pair.getGenome().getSequence() << endl;

        vector<string> substrings = Pair.getSubstrings(k);
        cout << "Print out all " << substrings.size() << " substrings:" << endl;
        for (const auto& substring : substrings) {
            cout << substring << endl;
        }

        return 0;
    }
}