/*#include <iostream>
#include <vector>
#include <sil/sil.hpp>
#include "random.hpp"

int main()
{
    sil::Image image{"C:\\Users\\User\\Documents\\Code\\CPP TD\\Workshop\\images\\logo.png"};
    int n;
    std::cout << "Un nombre entre 0 et " << image.width()*image.height() << std::endl;
    std::cin >> n;
    for (int x{0}; x < n; ++x)
    {
        int a=random_int(0, image.width());
        int b=random_int(0, image.height());
        image.pixel(a, b).r=random_float(0, 1);
        image.pixel(a, b).g=random_float(0, 1);
        image.pixel(a, b).b=random_float(0, 1);
    }
    image.save("output/output.png");
}*/