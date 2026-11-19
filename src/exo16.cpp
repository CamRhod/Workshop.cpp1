/*#include <iostream>
#include <vector>
#include <sil/sil.hpp>

// void mirroir()
// {
//     sil::Image image{"C:\\Users\\User\\Documents\\Code\\CPP TD\\Workshop\\images\\logo.png"};
//     int a=image.width();
//     int b=image.height();
//     sil::Image image2{a, b};
//     for (int x{0}; x < image.width(); ++x)
//     {
//         for (int y{0}; y < image.height(); ++y)
//         {
//             image2.pixel(image.width()-1-x, y)=image.pixel(x, y);
//         }
//     }
//     image2.save("output/output.png");
// }

// void flip()
// {
//     sil::Image image{"C:\\Users\\User\\Documents\\Code\\CPP TD\\Workshop\\images\\logo.png"};
//     int a=image.width();
//     int b=image.height();
//     sil::Image image2{a, b};
//     for (int x{0}; x < image.width(); ++x)
//     {
//         for (int y{0}; y < image.height(); ++y)
//         {
//             image2.pixel(image2.width()-1-x, y)=image.pixel(x, image.height()-1-y);
//         }
//     }
//     image2.save("output/output.png");
// }

void paste_image(sil::Image const& source, sil::Image& destination, int k, int h, int n, bool flip_x, bool flip_y){
    for (int x{destination.width()*k/n}; x < destination.width()*(k+1)/n; x++)
    {
        for (int y{destination.height()*h/n}; y < destination.height()*(h+1)/n; y++)
        {
            if (flip_x==false && flip_y==false)
            {
                destination.pixel(x, y)=source.pixel(source.width()-1-x, y%source.height());
            }
            else if (flip_x==true && flip_y==false)
            {
                destination.pixel(x, y)=source.pixel(x%source.width(), y%source.height());
            }
            else if (flip_x==false && flip_y==true)
            {
                destination.pixel(x, y)=source.pixel(source.width()-1-x, y%source.height());
            }
            else
            {
                destination.pixel(x, y)=source.pixel(x%source.width(), y%source.height());
            }
            //int final_x = flip_x ? x%source.width() : (image.width()-1-x);
            //TODO calculer le bon y, en fonction de flip_y
            //destination.pixel(x, y)=source.pixel(final_x, y%source.height());          
        }
    }
}

int main()
{
    sil::Image image{"C:\\Users\\User\\Documents\\Code\\CPP TD\\Workshop\\images\\logo.png"};
    int n;
    std::cout << "Un nombre" << std::endl;
    std::cin >> n;
    int a=image.width()*n;
    int b=image.height()*n;
    sil::Image image2{a, b};
    for (int k{0}; k<n; ++k)
    {
        for (int h{0}; h<n; ++h)
        {
            paste_image(image, image2, k, h, n, h%2==0, k%2==0);
            
        }
    }
    image2.save("output/output.png");
}

/*int main()
{
    sil::Image image{"C:\\Users\\User\\Documents\\Code\\CPP TD\\Workshop\\images\\logo.png"};
    int n;
    std::cout << "Un nombre" << std::endl;
    std::cin >> n;
    int a=image.width()*n;
    int b=image.height()*n;
    sil::Image image2{a, b};
    for (int k{0}; k<n; ++k)
    {
        for (int h{0}; h<n; ++h)
        {
            if (h%2==0)
            {
                if (k%2==0)
                {
                    for (int x{image2.width()*k/n}; x < image2.width()*(k+1)/n; x++)
                    {
                        for (int y{image2.height()*h/n}; y < image2.height()*(h+1)/n; y++)
                        {
                            image2.pixel(x, y)=image.pixel(x%image.width(), y%image.height());                    
                        }
                    }
                }
                else
                {
                    for (int x{image2.width()*k/n}; x < image2.width()*(k+1)/n; x++)
                    {
                        for (int y{image2.height()*h/n}; y < image2.height()*(h+1)/n; y++)
                        {
                            image2.pixel(x, y)=image.pixel((image2.width()-1-x)%image.width(), y%image.height());  
                        }
                    }
                }
            }
            else
            {            if (k%2==0)
                {
                    for (int x{image2.width()*k/n}; x < image2.width()*(k+1)/n; x++)
                    {
                        for (int y{image2.height()*h/n}; y < image2.height()*(h+1)/n; y++)
                        {
                            image2.pixel(x, y)=image.pixel(x%image.width(), (image2.height()-1-y)%image.height());                    
                        }
                    }
                }
                else
                {
                    for (int x{image2.width()*k/n}; x < image2.width()*(k+1)/n; x++)
                    {
                        for (int y{image2.height()*h/n}; y < image2.height()*(h+1)/n; y++)
                        {
                            image2.pixel(x, y)=image.pixel((image2.width()-1-x)%image.width(), (image2.height()-1-y)%image.height());  
                        }
                    }
                }
            }
        }
    }
    image2.save("output/output.png");
}*/