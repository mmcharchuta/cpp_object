#ifndef SEQUENCE_H
#define SEQUENCE_H

#include <string>


namespace MC {
    class Sequence {
    private:
        std::string sequence;

    public:
        Sequence();
        bool readFasta(const std::string& filePath);
        std::string getSequence() const;
    };

#endif // SEQUENCE_H
}