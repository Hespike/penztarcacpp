#include <string>

using namespace std;

class Penztarca{
    string tulajdonos;
    unsigned int penzmennyiseg;

public:
    Penztarca(const string& tulajdonos) : tulajdonos(tulajdonos), penzmennyiseg(0) {}

    Penztarca& operator+=(Penztarca& p) {
        if (this == &p) {
            return *this;
        }

        if (tulajdonos == p.tulajdonos) {
            penzmennyiseg += p.penzmennyiseg;
            p.penzmennyiseg = 0;
        }

        return *this;
    }

    Penztarca& operator+=(unsigned int mennyiseg) {
        penzmennyiseg += mennyiseg;
        return *this;
    }

    Penztarca& operator-=(unsigned int mennyiseg) {
        if (penzmennyiseg >= mennyiseg) {
            penzmennyiseg -= mennyiseg;
        }

        return *this;
    }
};
