#include "Pet.h"

int main() {
    Dog myDog("Recks", "Golden Retriever");
    Cat myCat("MIlly", "Tabby");
    Parrot myParrot("Polly", "English");
    Hamster myHamster("Nibbles", true);

    myDog.Show();
    myDog.Type();
    std::cout << std::endl;

    myCat.Show();
    myCat.Type();
    std::cout << std::endl;

    myParrot.Show();
    myParrot.Type();
    std::cout << std::endl;

    myHamster.Show();
    myHamster.Type();

    return 0;
}
