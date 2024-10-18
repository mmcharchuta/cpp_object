#include "MDNA.h"
#include <vector>
#include <string>
using namespace std;

// Constructor definition
MDNA::MDNA() {
    // Initialize any members if necessary, or leave it empty
}

Sequence& MDNA::getMotif() {
    return Motif;
}

Sequence& MDNA::getGenome() {
    return Genome;
}

vector<string> MDNA::getSubstrings(int k, MDNA Pair) {
    vector<string> substrings;
    string motifSeq = Pair.getMotif().getSequence();
    string genomeSeq = Pair.getGenome().getSequence();

    int motifLength = motifSeq.length();
    int minLength = motifLength - k;
    int genomeLength = genomeSeq.length();

    // Ensure minLength is not less than 1
    if (minLength < 1) {
        minLength = 1;
    }

    // Iterate over the genome to extract substrings of the valid lengths
    for (int length = minLength; length <= motifLength; ++length) {
        for (int i = 0; i <= genomeLength - length; ++i) {
            substrings.push_back(genomeSeq.substr(i, length));
        }
    }

    return substrings;
}
