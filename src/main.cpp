#include <SFML/Graphics.hpp>

int main() {
  sf::RenderWindow window(sf::VideoMode(900, 900), "simpleEngine");


  while(window.isOpen()) 
  {
    sf::Event event;
    while(window.pollEvent(event)) 
    {
      if(event.type == sf::Event::Closed) 
      {
        window.close();
      }
    }
    window.clear(sf::Color::Black);
   
    sf::CircleShape shape(100.f);

    shape.setFillColor(sf::Color(100, 250, 50));

    window.draw(shape);

    window.display(); 

  }
  return 0;
}
