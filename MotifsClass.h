//
// Created by obiektowecpp on 25.10.24.
//

#ifndef MOTIFSCLASS_H
#define MOTIFSCLASS_H
#include "SequenceClass.h"
#include <vector>
using namespace std;

class MotifInGenome {
public:
    int location;
    int length;

    MotifInGenome(int idx, int len) : location(idx + 1), length(len) {
    };
};

class Motifs {
public:
    Sequence motif;
    Sequence genome;

    vector<MotifInGenome> findSimiliarMotifs(int edit_distance_value);

private:
    int editDistance(const string &str1, const string &str2);
};

#endif //MOTIFSCLASS_H
