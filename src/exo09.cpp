/*#include <iostream>
#include <vector>
#include <sil/sil.hpp>

int main()
{
    sil::Image image{"C:\\Users\\User\\Documents\\Code\\CPP TD\\Workshop\\images\\logo.png"};
    int a=image.width();
    int b=image.height();
    sil::Image image2{a, b};
    for (int x{10}; x < image.width()-10; ++x)
    {
        for (int y{0}; y < image.height(); ++y)
        {
            image2.pixel(x+10, y).r=image.pixel(x, y).r;
            image2.pixel(x, y).g=image.pixel(x, y).g;
            image2.pixel(x-10, y).b=image.pixel(x, y).b;
        }
    }
    image2.save("output/output.png");
}*/