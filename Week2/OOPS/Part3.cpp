#include <iostream>
using namespace std;

class Playable {
public:
    virtual void play() = 0;
};

class Veena : public Playable {
public:
    void play() override {
        cout << "play Veena" << endl;
    }
};
