#include <SFML/Graphics.hpp>
#include <iostream>

int main() {
    std::cout << "chess app started\n";
    sf::RenderWindow window(sf::VideoMode(200,100), "SFML works!");
    sf::CircleShape shape(100.f);

    while (window.isOpen()) {
        sf::Event event;
        while ( window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

    std::cout << "chess app exited\n";
    return 0;
}
