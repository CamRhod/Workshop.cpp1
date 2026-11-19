/*
#include <iostream>
#include <vector>
#include <sil/sil.hpp>

int main()
{
    sil::Image image{"C:\\Users\\User\\Documents\\Code\\CPP TD\\Workshop\\images\\logo.png"};
    for (int x{0}; x < image.width(); ++x)
    {
        for (int y{0}; y < image.height(); ++y)
        {
            if (image.pixel(x, y).r == 0 && image.pixel(x, y).g == 0 && image.pixel(x, y).b == 0){
            }
            else
            {   
                image.pixel(x, y).r = 0;
                image.pixel(x, y).b = 0;
            }
        }
    }
    image.save("output/output.png");
}
*/