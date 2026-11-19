/*#include <iostream>
#include <vector>
#include <sil/sil.hpp>
#include <cmath>

int main()
{
    sil::Image image{"C:\\Users\\User\\Documents\\Code\\CPP TD\\Workshop\\images\\photo.jpg"};
    for (int x{0}; x < image.width(); ++x)
    {
        for (int y{0}; y < image.height(); ++y)
        {
            image.pixel(x, y).r=std::sqrt(image.pixel(x, y).r);
            image.pixel(x, y).g=std::sqrt(image.pixel(x, y).g);
            image.pixel(x, y).b=std::sqrt(image.pixel(x, y).b);
        }
    }
    image.save("output/output.png");
}*/