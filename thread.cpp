#include <thread>
#include <SFML/Graphics.hpp>
#include <iostream>


inline void first_func(int delay) {
	sf::Clock clock;

	sf::sleep(sf::seconds(delay));

	std::cout << "in threaded function: " << clock.getElapsedTime().asSeconds() << std::endl;
}

inline void multithreading() {
	sf::Clock clock;

	std::thread t1(first_func, 2);
	std::thread t2(first_func, 3);
	t2.join();
	t1.join();
	
	std::cout << "multithreading: " << clock.getElapsedTime().asSeconds() << std::endl;
}

inline void no_multithreading() {
	sf::Clock clock;

	first_func(2);
	first_func(3);

	std::cout << "no_multithreading: " << clock.getElapsedTime().asSeconds() << std::endl;
}