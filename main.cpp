#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <iostream>

int main() {
    std::cout << "chess app started\n";
    sf::RenderWindow window(sf::VideoMode(1024, 1024), "SFML works!");
    sf::CircleShape shape(100.f);

    sf::Texture image;
    // Image.loadFromFile
    image.loadFromFile("images/Chess_Board_purp.svg.png");

    sf::Texture pawnImg;
    pawnImg.loadFromFile("images/chess_pieces.svg.png");
    // if (!image.loadFromFile("images/Chess_Board_purp.svg.png")) {
    //     std::cout << "error";
    // }

    sf::Sprite sprite(image);
    sf::Sprite pawnSprite;


    pawnSprite.setTexture(pawnImg);
    pawnSprite.setTextureRect(sf::IntRect( 0, 0, 210, 210));
    pawnSprite.setScale(0.6f, 0.6f);
        

    while (window.isOpen()) {
        sf::Event event;
        while ( window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(sprite);
        window.draw(pawnSprite);
        window.display();
    } 

    std::cout << "chess app exited\n";
    return 0;
}
