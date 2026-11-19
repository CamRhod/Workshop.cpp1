/*#include <iostream>
#include <vector>
#include <sil/sil.hpp>
#include <cmath>

int main()
{
    sil::Image image{500, 500};

    int radius;
    std::cout << "Un nombre"<< std::endl;
    std::cin >> radius;

    int thickness;
    std::cout << "Une épaisseur"<< std::endl;
    std::cin >> thickness;

    for (int x{0}; x < image.width(); ++x)
    {
        for (int y{0}; y < image.height(); ++y)
        {
            if (std::pow(x-image.width()/2, 2) + std::pow(y-image.height()/2, 2)<=std::pow(radius, 2) 
                &&
                std::pow(x-image.width()/2, 2) + std::pow(y-image.height()/2, 2)>=std::pow(radius-thickness, 2))
            {
                image.pixel(x, y).r=1;
                image.pixel(x, y).g=1;
                image.pixel(x, y).b=1;
            }    
        }
    }
    for (int k{0}; k<6; ++k)
    {
        float angle=k*3.1415/3;
        for (int x{0}; x < image.width(); ++x)
        {
            for (int y{0}; y < image.height(); ++y)
            {
                if (std::pow(x-image.width()/2+cos(angle)*radius, 2) + std::pow(y-image.height()/2+sin(angle)*radius, 2)<=std::pow(radius, 2) 
                    &&
                    std::pow(x-image.width()/2+cos(angle)*radius, 2) + std::pow(y-image.height()/2+sin(angle)*radius, 2)>=std::pow(radius-thickness, 2))
                {
                    image.pixel(x, y).r=1;
                    image.pixel(x, y).g=1;
                    image.pixel(x, y).b=1;
                }    
            }
        }
    }
    image.save("output/output.png");
}*/