#include <SFML/Graphics.hpp>
#include <iostream>


int main()
{
    
    sf::RenderWindow window(sf::VideoMode(1000, 1000), "Card_game-01");
    
    sf::Texture cat_fire; 
    if(!cat_fire.loadFromFile("assets\\Monster\\Card.png")){
        std::cout << "Could not load image";
        return 0 ;
    }
    sf::Sprite card; 
    card.setTexture(cat_fire);
    
    sf::Texture Freezing; 
    if(!Freezing.loadFromFile("assets\\Spell\\Card (1).png")){
        std::cout << "Could not laod image";
        return 0;
    }
    sf::Sprite Card_Freezing;
    Card_Freezing.setTexture(Freezing);
    
    
    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event))
        {
            
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // clear the window with black color
        window.clear(sf::Color::White);
        //window.draw(card);
        window.draw(Card_Freezing);
        window.display();
    }

    return 0;
}