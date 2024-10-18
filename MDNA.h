#ifndef MDNA_H
#define MDNA_H
#include "Sequence.h"
#include <vector>

class MDNA {
private:
    Sequence Motif;
    Sequence Genome;
    int k;
public:
    // Constructor
    MDNA();

    // Getter and setter for Motif
    Sequence& getMotif(); // {return Motif;}
    void setMotif(const Sequence& motif) { Motif = motif; }
    // Getter and Setter for Genome
    Sequence& getGenome(); // {return Genome;}
    void setGenome(const Sequence& genome) { Genome = genome; }

    std::vector<std::string> getSubstrings();


};

#endif

