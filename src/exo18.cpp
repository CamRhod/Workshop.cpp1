/*#include <iostream>
#include <vector>
#include <sil/sil.hpp>
#include "random.hpp"

float luminance(const glm::vec3 &color)
{
    return 0.2126f * color.r + 0.7152f * color.g + 0.0722f * color.b;
}

int main()
{
    sil::Image image{"C:\\Users\\User\\Documents\\Code\\CPP TD\\Workshop\\images\\logo.png"};

    std::sort(image.pixels().begin(), image.pixels().end(), [](glm::vec3 const& color1, glm::vec3 const& color2)
{
    return luminance(color1) < luminance(color2); // Trie selon la luminosité des couleurs (NB : c'est à vous de coder la fonction `brightness`)
});
    image.save("output/output.png");
}*/