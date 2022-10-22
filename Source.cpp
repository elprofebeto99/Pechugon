#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(500, 500), "Contempla a pechugon");
    
    sf::Vector2f pies(250.f, 480.f);
    sf::Vector2f torax(150.f, 150.f);
    sf::Vector2f geta(70.f, 90.f);
    sf::Vector2f iris(90.f,90.f);
    sf::Vector2f pupila(95.f,105.f);
    sf::Vector2f boca(40.f,180.f);
    sf::Vector2f pechuga(130.f, 280.f);
    sf::Vector2f cola(385.f, 280.f);
    sf::Vector2f piernas(280.f, 430.f);
    
    
    sf::RectangleShape patas;
    sf::RectangleShape pico;
    sf::CircleShape panza(150.f);
    sf::CircleShape pecho(50.f);
    sf::CircleShape culo(40.f);
    sf::CircleShape ojos(30.f);
    sf::CircleShape pu(13.f);
    sf::CircleShape cabeza(100);
    sf::RectangleShape pie;
    
    panza.setFillColor(sf::Color::Yellow);
    cabeza.setFillColor(sf::Color::Yellow);
    pecho.setFillColor(sf::Color::Yellow);
    culo.setFillColor(sf::Color::Yellow);
    patas.setFillColor(sf::Color::Red);
    pie.setFillColor(sf::Color::Red);
    pico.setFillColor(sf::Color::Red);
    ojos.setFillColor(sf::Color::White);
    pu.setFillColor(sf::Color::Black);

    pico.setSize(sf::Vector2f(40,20));
    patas.setSize(sf::Vector2f(15,50));
    pie.setSize(sf::Vector2f(45, 15));

    patas.setPosition(piernas);
    panza.setPosition(torax);
    pecho.setPosition(pechuga);
    pie.setPosition(pies);
    cabeza.setPosition(geta);
    culo.setPosition(cola);
    pico.setPosition(boca);
    ojos.setPosition(iris);
    pu.setPosition(pupila);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
       
        window.draw(patas);
        window.draw(panza);
        window.draw(pecho);
        window.draw(pico);
        window.draw(cabeza);
        window.draw(ojos);
        window.draw(pu);
        window.draw(pie);
        window.draw(culo);
        window.display();
    }

    return 0;
}