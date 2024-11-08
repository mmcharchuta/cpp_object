#include "MDNA.h"
#include <algorithm>  // for std::min
#include <vector>
#include <string>
#include <iostream>

MDNA::MDNA() {
    // Initialize members if needed
}

Sequence& MDNA::getMotif() {
    return Motif;
}

Sequence& MDNA::getGenome() {
    return Genome;
}

std::vector<std::string> MDNA::getSubstrings(int k) {
    std::vector<std::string> substrings;
    std::vector<std::string> FittingSubstrings;
    std::string motifSeq = Motif.getSequence();
    std::string genomeSeq = Genome.getSequence();

    int motifLength = motifSeq.length();
    int minLength = motifLength - k;
    int genomeLength = genomeSeq.length();

    if (minLength < 1) {
        minLength = 1;
    }

    for (int length = minLength; length <= motifLength; ++length) {
        for (int i = 0; i <= genomeLength - length; ++i) {
            std::string substring = genomeSeq.substr(i, length);
            if (calculateDistance(substring, motifSeq) <= k) {
                FittingSubstrings.push_back(substring);
            }
            substrings.push_back(substring);
        }
    }
    return substrings;
}

int MDNA::calculateDistance(const std::string& str1, const std::string& str2) {
    if (str1.length() != str2.length()) {
        return -1;
    }
    int distance = 0;
    for (size_t i = 0; i < str1.length(); ++i) {
        if (str1[i] != str2[i]) {
            ++distance;
        }
    }
    return distance;
}
