/*#include <iostream>
#include <vector>
#include <sil/sil.hpp>

int main()
{
    sil::Image image{"C:\\Users\\User\\Documents\\Code\\CPP TD\\Workshop\\images\\logo.png"};
    int a=image.width();
    int b=image.height();
    sil::Image image2{b, a};
    for (int x{0}; x < image.width(); ++x)
    {
        for (int y{0}; y < image.height(); ++y)
        {
            image2.pixel(image2.width()-1-y, x).r=image.pixel(x, y).r;
            image2.pixel(image2.width()-1-y, x).g=image.pixel(x, y).g;
            image2.pixel(image2.width()-1-y, x).b=image.pixel(x, y).b;
        }
    }
    image2.save("output/output.png");
}*/