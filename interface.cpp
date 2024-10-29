#include "interface.h"

void interface::operate()
{
    while (w.isOpen())
    {
        while (w.pollEvent(ev))
        {
            switch (ev.type)
            {
            case sf::Event::Closed:
                w.close();
                break;
            }
        }
        w.clear();
        w.display();
    }
}