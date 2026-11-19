/*#include <iostream>
#include <vector>
#include <sil/sil.hpp>

int main()
{
    sil::Image image{"C:\\Users\\User\\Documents\\Code\\CPP TD\\Workshop\\images\\logo.png"};
    for (int x{0}; x < image.width(); ++x)
    {
        for (int y{0}; y < image.height(); ++y)
        {
            float grey=0.299*image.pixel(x, y).r + 0.587*image.pixel(x, y).g + 0.114*image.pixel(x, y).b;
            image.pixel(x, y).r=grey;
            image.pixel(x, y).g=grey;
            image.pixel(x, y).b=grey;
        }

    }
    image.save("output/output.png");
}*/