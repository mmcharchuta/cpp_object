//
// Created by obiektowecpp on 24.10.24.
//

#ifndef SEQUENCE_H
#define SEQUENCE_H
#include <iostream>
#include <fstream>
#include  <string>

#include <map>
using namespace std;


class Sequence {
public:
    string seq;

    void readFastaFile(const string &pathFile);

    map<char, int> countNucleotides();

private:
    string merge_lines(ifstream &file);
};

#endif //SEQUENCE_H
