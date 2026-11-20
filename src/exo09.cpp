#include <iostream>
#include <vector>
#include <sil/sil.hpp>

int main()
{
    sil::Image image{"C:\\Users\\User\\Documents\\Code\\CPP TD\\Workshop\\images\\logo.png"};
    int a=image.width();
    int b=image.height();
    sil::Image image2{a, b};
    for (int x{0}; x < image.width(); ++x)
    {
        for (int y{0}; y < image.height(); ++y)
        {
            if (x-15>0)
            {
                image2.pixel(x-15, y).b=image.pixel(x, y).b;
            }
            else
            {
                image2.pixel(x, y).b=image.pixel(x+15, y).b;
            }
                image2.pixel(x, y).g=image.pixel(x, y).g;
            if (x+15<a)
            {
                image2.pixel(x+15, y).r=image.pixel(x, y).r;
            }
            else
            {  
                image2.pixel(x, y).r=image.pixel(x-15, y).r;
            }

        }
    }
    image2.save("output/output.png");
}