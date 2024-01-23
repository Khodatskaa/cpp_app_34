#include "Shape.h"

int main() {
    Shape* shapes[MAX_SHAPES]{};

    shapes[0] = new Square(1.0, 2.0, 3.0);
    shapes[1] = new Circle(0.0, 0.0, 2.0);
    shapes[2] = new Rectangle(0.0, 0.0, 4.0, 2.0);
    shapes[3] = new Ellipse(0.0, 0.0, 4.0, 2.0);

    for (int i = 0; i < MAX_SHAPES && shapes[i] != nullptr; ++i) {
        shapes[i]->Show();
        shapes[i]->Save("shape.txt");
        shapes[i]->Load("shape.txt");
    }

    for (int i = 0; i < MAX_SHAPES && shapes[i] != nullptr; ++i) {
        delete shapes[i];
        shapes[i] = nullptr;
    }

    return 0;
}