#ifndef SEQUENCE_H
#define SEQUENCE_H
using namespace std;
#include <string>

class Sequence {
private:
    string sequenceData;
public:
    // Constructor
    Sequence();

    // Method to read a sequence from a FASTA file
    void readFasta(const string &filePath);
    string getSequence();

    };


#endif

