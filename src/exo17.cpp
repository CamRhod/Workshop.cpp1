#include <iostream>
#include <vector>
#include <sil/sil.hpp>
#include "random.hpp"

int main()
{
    sil::Image image{"C:\\Users\\User\\Documents\\Code\\CPP TD\\Workshop\\images\\logo.png"};
    int n=random_int(30, 60);
    for (int i{0}; i<n; ++i)
    {
        int hauteur=random_int(3, 20);
        int largeur=random_int(3, 15);
        int x=random_int(0, image.width()-hauteur);
        int y=random_int(0, image.height()-largeur);
        int a=random_int(0, image.width()-hauteur);
        int b=random_int(0, image.height()-largeur);

        for (int x2{x}; x2<x+hauteur; ++x2)
        {
            for (int y2{y}; y2<y+largeur; ++y2)
            {
                for (int a2{a}; a2<a+hauteur; ++a2)
                {
                    for (int b2{b}; b2<b+largeur; ++b2)
                    {        
                        std::swap(image.pixel(x2, y2) , image.pixel(a2, b2));
                    }
                }
            }
        }
    }
    image.save("output/output.png");
}