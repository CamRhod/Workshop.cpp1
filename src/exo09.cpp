/*#include <iostream>
#include <vector>
#include <sil/sil.hpp>

int main()
{
    int n;
    std::cout << "Un nombre"<< std::endl;
    std::cin >> n;
    sil::Image image{"C:\\Users\\User\\Documents\\Code\\CPP TD\\Workshop\\images\\logo.png"};
    int a=image.width();
    int b=image.height();
    sil::Image image2{a, b};
    for (int x{0}; x < image.width(); ++x)
    {
        for (int y{0}; y < image.height(); ++y)
        {
            image2.pixel(x+n, y).r=image.pixel(x, y).r;
            image2.pixel(x, y).g=image.pixel(x, y).g;
            image2.pixel(x-n, y).b=image.pixel(x, y).b;
            if image2.pixel(x-n, y)
        }
    }
    image2.save("output/output.png");
}*/