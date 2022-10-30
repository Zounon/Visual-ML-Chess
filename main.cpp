#include <SFML/Graphics.hpp>
#include <iostream>

int main() {
    std::cout << "chess app started\n";
    sf::RenderWindow window(sf::VideoMode(1024, 1024), "SFML works!");
    sf::CircleShape shape(100.f);

    sf::Texture image;
    // Image.loadFromFile
    image.loadFromFile("images/Chess_Board_purp.svg.png");
    // if (!image.loadFromFile("images/Chess_Board_purp.svg.png")) {
    //     std::cout << "error";
    // }

    sf::Sprite sprite(image);
        

    while (window.isOpen()) {
        sf::Event event;
        while ( window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(sprite);
        window.display();
    } 

    std::cout << "chess app exited\n";
    return 0;
}
