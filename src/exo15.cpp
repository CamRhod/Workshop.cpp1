/*#include <iostream>
#include <vector>
#include <sil/sil.hpp>

int main()
{
    sil::Image image{"C:\\Users\\User\\Documents\\Code\\CPP TD\\Workshop\\images\\logo.png"};
    int n;
    std::cout << "Un nombre" << std::endl;
    std::cin >> n;
    int a=image.width()*n;
    int b=image.height()*n;
    sil::Image image2{a, b};
            for (int x{0}; x < image2.width(); x++)
            {
                for (int y{0}; y < image2.height(); y++)
                {
                    image2.pixel(x, y)=image.pixel(x%image.width(), y%image.height());                    
                }
            }
    image2.save("output/output.png");
}*/