#ifndef MDNA_H
#define MDNA_H

#include "Sequence.h"
#include <vector>
#include <string>
namespace MC {
    class MDNA {
    private:
        Sequence Motif;
        Sequence Genome;
        int k;

    public:
        MDNA();

        Sequence& getMotif();
        void setMotif(const Sequence& motif);

        Sequence& getGenome();
        void setGenome(const Sequence& genome);

        std::vector<std::string> getSubstrings(int k);

        int calculateDistance(const std::string& str1, const std::string& str2);
    };

#endif // MDNA_H
}