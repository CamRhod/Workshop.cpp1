#include <iostream>
#include <vector>
#include <sil/sil.hpp>
#include <cmath>

int main()
{
    sil::Image image{500, 500};
    int n;
    std::cout << "Un nombre"<< std::endl;
    std::cin >> n;
    int thickness;
    std::cout << "Une épaisseur"<< std::endl;
    std::cin >> thickness;
    int width;
    std::cout << "On le met où ?"<< std::endl;
    std::cin >> width;
    for (int x{0}; x < image.width(); ++x)
    {
        for (int y{0}; y < image.height(); ++y)
        {
            
            if (std::pow(x-width, 2) + std::pow(y-image.height()/2, 2)<=std::pow(n, 2))
            {
                image.pixel(x, y).r=0.47;
                image.pixel(x, y).g=0;
                image.pixel(x, y).b=0.64;
            }
            if (std::pow(x-width, 2) + std::pow(y-image.height()/2, 2)<=std::pow(n-thickness, 2))
            {
                image.pixel(x, y).r=0;
                image.pixel(x, y).g=0;
                image.pixel(x, y).b=0;
            }
    
        }
    }
    image.save("output/output.png");
}