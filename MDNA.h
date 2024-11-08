#ifndef MDNA_H
#define MDNA_H

#include "Sequence.h"
#include <vector>
#include <string>

class MDNA {
private:
    Sequence Motif;
    Sequence Genome;
    int k;

public:
    // Constructor
    MDNA();

    // Getter and Setter for Motif
    Sequence& getMotif();
    void setMotif(const Sequence& motif);

    // Getter and Setter for Genome
    Sequence& getGenome();
    void setGenome(const Sequence& genome);

    // Method to get substrings
    std::vector<std::string> getSubstrings(int k);

    // Function to calculate distance
    int calculateDistance(const std::string& str1, const std::string& str2);
};

#endif // MDNA_H
