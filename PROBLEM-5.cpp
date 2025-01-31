#include <iostream>

using namespace std;

// Base class
class Rectangle {
protected:
    int width, height;

public:
    void display() {
        cout << width << " " << height << endl;
    }
};

// Derived class
class RectangleArea : public Rectangle {
public:
    void read_input() {
        cin >> width >> height;
    }

    void display() {
        cout << (width * height) << endl;
    }
};

int main() {
    // Create object of derived class
    RectangleArea rect;

    // Read input values
    rect.read_input();

    // Display width and height
    rect.Rectangle::display();

    // Display area of rectangle
    rect.display();

    return 0;
}
