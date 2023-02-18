#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

int main(int argc, char const *argv[])
{
    //GameWindow
    sf::RenderWindow window(sf::VideoMode(640,480), "ProjectCF", sf::Style::Titlebar | sf::Style::Close | sf::Style::Fullscreen);
    
    //Event manager for Inputs
    sf::Event ev;  

    //GameLoop
    while (window.isOpen())
    {
        while (window.pollEvent(ev))
        {
            switch (ev.type)
            {
            case sf::Event::Closed:
                //maybe a window with -- are you sure you wann leave the game?
                window.close();
                break;
            case sf::Event::KeyPressed:
                if(ev.key.code == sf::Keyboard::Escape)
                    window.close();

                break;
            default:
                break;
            }
        }
        
        //update
       // onUpdate();
    
        //render
       // onRender(window);
    }
    
    return 0;
}

// implements changes
int onUpdate(){
    std::cout << "I Update" << "\n" ;
}

// render the graphic on the window
int onRender(sf::RenderWindow window){
    window.clear();


    //tell window what to draw
    window.display()
}