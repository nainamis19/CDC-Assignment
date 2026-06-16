#include <iostream>
using namespace std;
class Playable {
public:
    virtual void play() = 0;
    virtual ~Playable() {}
};
class Veena : public Playable {
public:
    void play() override {
        cout << "play Veena" << endl;
    }
};
class Saxophone : public Playable {
public:
    void play() override {
        cout << "Play saxophone" << endl;
    }
};
int main() {
    Veena v;
    v.play();
    Saxophone s;
    s.play();
    Playable* p;
    p = new Veena();
    p->play();
    delete p;
    p = new Saxophone();
    p->play();
    delete p;
    return 0;
}
