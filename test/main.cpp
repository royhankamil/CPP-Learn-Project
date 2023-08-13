#include <iostream>
#include <ctime>
#include <SFML/Graphics.hpp>

short w = 800;
short h = 600;
int gerak_x = 10;
int gerak_y = 10;
int gerak_x1 = 7;
int gerak_y1 = 7;
int gerak_x2 = 6;
int gerak_y2 = 6;
int gerak_x3 = 5;
int gerak_y3 = 5;
int gerak_x4 = 3;
int gerak_y4 = 3;

    sf::RenderWindow window(sf::VideoMode(w, h), "testing", sf::Style::None);
//function to make bouncing other balls
int mantul ( sf::CircleShape circleone, sf::CircleShape circletwo, int &gerakX, int &gerakY, int &gerakX1, int &gerakY1, int r1, int r2)
{
    if (
        circleone.getGlobalBounds().intersects(circletwo.getGlobalBounds())
//        circleone.getGlobalBounds().width == circletwo.getGlobalBounds().width
//        circleone.getPosition().x == circletwo.getPosition().y + circletwo.getGlobalBounds().height ||
//        circleone.getPosition().y + circleone.getGlobalBounds().height == circletwo.getPosition().x ||
//        circleone.getPosition().x + circleone.getGlobalBounds().width == circletwo.getPosition().y ||
//        circleone.getPosition().x + circleone.getGlobalBounds().width == circletwo.getPosition().y + circleone.getGlobalBounds().height
        )
    {
//        gerakX *= -1;
//        gerakY *= -1;
//        gerakX1 *= -1;
//        gerakY1 *= -1;
        if(r1<r2)
            circleone.setFillColor(circletwo.getFillColor());
//        sf::CircleShape
        r1=r1+r2;
    }

//        return gerakX;
//        return gerakY;
//        return gerakX1;
//        return gerakY1;
return r1;
}

int main()
{
    short rad[5] = {16, 20, 25, 35, 40};
        srand(time(0));

    window.setFramerateLimit(60);

    sf::CircleShape circle(rad[0]);
    circle.setFillColor(sf::Color::Red);
    circle.setPosition(sf::Vector2f (rand()% (w-100) + 10, rand()% (h-100) + 10));

    sf::CircleShape circle1(rad[1]);
    circle1.setFillColor(sf::Color::Green);
    circle1.setPosition(sf::Vector2f (rand()% (w-100) + 10, rand()% (h-100) + 10));

    sf::CircleShape circle2(rad[2]);
    circle2.setFillColor(sf::Color::Blue);
    circle2.setPosition(sf::Vector2f (rand()% (w-100) + 10, rand()% (h-100) + 10));

    sf::CircleShape circle3(rad[3]);
    circle3.setFillColor(sf::Color::Magenta);
    circle3.setPosition(sf::Vector2f (rand()% (w-100) + 10, rand()% (h-100) + 10));

    sf::CircleShape circle4(rad[4]);
    circle4.setFillColor(sf::Color::Yellow);
    circle4.setPosition(sf::Vector2f (rand()% (w-100) + 10, rand()% (h-100) + 10));
    //circle.setOrigin(circle.getGlobalBounds().width/2, circle.getGlobalBounds().height/2);


    while(window.isOpen())
    {
        sf::Event ev;
        while(window.pollEvent(ev))
        {
            if (ev.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
                    window.close();
//            if(circle.setPosition() == circle.setPosition(w,h))
//                circle.move(-1.0);
        }
        //updated
        //to make bouncing in window
        if (circle.getPosition().x < 0 || circle.getPosition().x + circle.getGlobalBounds().width > w)
            gerak_x *= -1;
        if (circle.getPosition().y  < 0 || circle.getPosition().y + circle.getGlobalBounds().height > h)
            gerak_y *= -1;
        if (circle1.getPosition().x < 0 || circle1.getPosition().x + circle1.getGlobalBounds().width > w)
            gerak_x1 *= -1;
        if (circle1.getPosition().y  < 0 || circle1.getPosition().y + circle1.getGlobalBounds().height > h)
            gerak_y1 *= -1;
        if (circle2.getPosition().x < 0 || circle2.getPosition().x + circle2.getGlobalBounds().width > w)
            gerak_x2 *= -1;
        if (circle2.getPosition().y  < 0 || circle2.getPosition().y + circle2.getGlobalBounds().height > h)
            gerak_y2 *= -1;
        if (circle3.getPosition().x < 0 || circle3.getPosition().x + circle3.getGlobalBounds().width > w)
            gerak_x3 *= -1;
        if (circle3.getPosition().y  < 0 || circle3.getPosition().y + circle3.getGlobalBounds().height > h)
            gerak_y3 *= -1;
        if (circle4.getPosition().x < 0 || circle4.getPosition().x + circle4.getGlobalBounds().width > w)
            gerak_x4 *= -1;
        if (circle4.getPosition().y  < 0 || circle4.getPosition().y + circle4.getGlobalBounds().height > h)
            gerak_y4 *= -1;

        //to make bouncing other balls
        mantul(circle, circle1, gerak_x, gerak_y, gerak_x1, gerak_y1, rad[0], rad[1]);
        mantul(circle, circle2, gerak_x, gerak_y, gerak_x2, gerak_y2, rad[0], rad[2]);
        mantul(circle, circle3, gerak_x, gerak_y, gerak_x3, gerak_y3, rad[0], rad[3]);
        mantul(circle, circle4, gerak_x, gerak_y, gerak_x4, gerak_y4, rad[0], rad[4]);
        mantul(circle2, circle1, gerak_x2, gerak_y2, gerak_x1, gerak_y1, rad[2], rad[1]);
        mantul(circle3, circle1, gerak_x3, gerak_y3, gerak_x1, gerak_y1, rad[3], rad[1]);
        mantul(circle4, circle1, gerak_x4, gerak_y4, gerak_x1, gerak_y1, rad[4], rad[1]);
        mantul(circle2, circle3, gerak_x2, gerak_y2, gerak_x3, gerak_y3, rad[2], rad[3]);
        mantul(circle2, circle4, gerak_x2, gerak_y2, gerak_x4, gerak_y4, rad[2], rad[4]);
        mantul(circle3, circle4, gerak_x3, gerak_y3, gerak_x4, gerak_y4, rad[3], rad[4]);

        //teleport in time
//        static int a = 0;
//        a++;
//        if (a == 1000)
//            circle.setPosition(rand()% w + 1, rand()% h + 1);
//
//        if (a == 2000)
//            circle1.setPosition(rand()% (w-100) + 10, rand()% (h-100) + 10);
//
//        if (a == 3000)
//            circle2.setPosition(rand()% (w-100) + 10, rand()% (h-100) + 10);
//
//        if (a == 4000)
//            circle3.setPosition(rand()% (w-100) + 10, rand()% (h-100) + 10);
//
//        if (a == 5000)
//        {
//            circle4.setPosition(rand()% (w-100) + 10, rand()% (h-100) + 10);
//            a = 0;
//        }

//        system("cls");
//        std::cout << gerak_x << "\t" << gerak_y << std::endl;
        circle.move(gerak_x, gerak_y);
        circle1.move(gerak_x1, gerak_y1);
        circle2.move(gerak_x2, gerak_y2);
        circle3.move(gerak_x3, gerak_y3);
        circle4.move(gerak_x4, gerak_y4);

        //clear frame
        window.clear();

        //window draw
        window.draw(circle);
        window.draw(circle1);
        window.draw(circle2);
        window.draw(circle3);
        window.draw(circle4);

        //window display
        window.display();
    }
}
