#include <iostream>
#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow renderWindow{sf::VideoMode(100, 100), "myWindow"};

    while (renderWindow.isOpen())
    {
        sf::Event windowEvent; 
        while (renderWindow.pollEvent(windowEvent))
        {
            if (windowEvent.type == sf::Event::EventType::Closed)
            {
                renderWindow.close();
            }
        }

    }
    std::cout << "hello world!" << std::endl;
}