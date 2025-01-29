#include <iostream>
using namespace std;

class Box {
private:
    int length, breadth, height;

public:
    Box() : length(0), breadth(0), height(0) {}

    Box(int l, int b, int h) : length(l), breadth(b), height(h) {}

    Box(const Box &b) : length(b.length), breadth(b.breadth), height(b.height) {}

    int getLength() const { return length; }
    int getBreadth() const { return breadth; }
    int getHeight() const { return height; }

    long long CalculateVolume() const {
        return static_cast<long long>(length) * breadth * height;
    }

    bool operator<(const Box &b) const {
        if (length < b.length) return true;
        if (length == b.length && breadth < b.breadth) return true;
        if (length == b.length && breadth == b.breadth && height < b.height) return true;
        return false;
    }

    friend ostream& operator<<(ostream &out, const Box &b) {
        out << b.length << " " << b.breadth << " " << b.height;
        return out;
    }
};