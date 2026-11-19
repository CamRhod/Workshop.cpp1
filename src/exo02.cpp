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
                std::swap(image.pixel(x, y).r , image.pixel(x, y).b);
        }
    }
    image.save("output/output.png");
}*/