#include <iostream>
#include "main.hpp"
using std::cout, std::cin, std::endl;

int main() {
    Point pos{};
    while (true)
    {
        cout << "1. North\n2. East\n3. South\n4. West\n5. Quit" << endl;
        int answer = 0xBAB3; // no input validation because im lazy
        cin >> answer;

        if (answer == 5) //quit
            exit(0);
        else if (answer > 5 || answer < 1) // invalid
            cout << "Invalid option selected, not moving. Please try again\n" << endl;
        else
            move(pos, static_cast<Direction>(answer));



        cout << "Position: (" << pos.x << ", " << pos.y << ")" << endl;
    }
}

void move(Point& pos, Direction direction)
{
    switch (direction)
    {
        case NORTH:
            pos.y += 1;
            break;
        case EAST:
            pos.x += 1;
            break;
        case SOUTH:
            pos.y -= 1;
            break;
        case WEST:
            pos.x -= 1;
            break;
    }
}
