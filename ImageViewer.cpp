// ImageViewer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define SDL_MAIN_HANDLED
#include <iostream>
#include <SDL.h>
#include <Sdl_Image.h>
int main()
{
    SDL_SetMainReady();
    std::cout << "打开图片!\n";
    SDL_Surface* image_surface = IMG_Load("test.jpg");
    if (image_surface!=NULL)
    {
        IMG_SaveJPG(image_surface, ".\\testjpg.jpg", 100);
        IMG_SavePNG(image_surface, ".\\testpng.png");
        SDL_SaveBMP(image_surface, ".\\testbmp.bmp");
        std::cout << "保存完成!\n";
    }
    return 1;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
