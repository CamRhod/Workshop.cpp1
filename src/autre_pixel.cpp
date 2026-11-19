/*#include <iostream>
#include <vector>
#include <sil/sil.hpp>
#include <cmath>

int main()
{
    sil::Image image{"C:\\Users\\User\\Documents\\Code\\CPP TD\\Workshop\\images\\photo.jpg"};
    for (int u{0}; u<image.width(); u=u+5)
    {
        for (int v{0}; v<image.height(); v=v+5)
        {
            float red{0};
            float green{0};
            float blue{0};
            for (int a{u}; a<5+u; ++a)
            {
                for (int b{v}; b<5+v; ++b)
                {
                    red=red + image.pixel(a, b).r;
                    green=green + image.pixel(a, b).g;
                    blue=blue + image.pixel(a, b).b;
                }
            }
            for (int a{u}; a<5+u; ++a)
            {
                for (int b{v}; b<5+v; ++b)
                {
                    image.pixel(a, b).r=red/25;
                    image.pixel(a, b).g=green/25;
                    image.pixel(a, b).b=blue/25;
                }
            }
        }
    }
    image.save("output/output.png");
}*/