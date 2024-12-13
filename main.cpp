#include <SFML/Graphics.hpp>
#include <iostream>


int main()
{
    // create the window
    sf::RenderWindow window(sf::VideoMode(1000, 800), "Card_game-01");
    

    // run the program as long as the window is open
    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // clear the window with black color
        window.clear(sf::Color::White);

        sf::CircleShape shape(50.f);

        // set the shape color to green
        shape.setFillColor(sf::Color(100, 250, 50));
        // window.draw(...);
        window.draw(shape);
        
        // end the current frame
        window.display();
    }

    return 0;
}