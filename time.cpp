#include <SFML/Graphics.hpp>
#include <iostream>

inline void func(int delay)
{
    sf::Clock clock; // starts the clock
    sf::Time elapsed1 = clock.getElapsedTime();
    std::cout << elapsed1.asSeconds() << std::endl;
    clock.restart();

    sf::Time sleep_time = sf::seconds(delay);
    sf::sleep(sleep_time);
    sf::Time elapsed2 = clock.getElapsedTime();
    std::cout << elapsed2.asSeconds() << std::endl;
}