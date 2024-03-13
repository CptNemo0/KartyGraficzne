#ifndef TEXTURE_H
#define TEXTURE_H

#include <iostream>
#include "string"
#include "glad.h"
#include "include/stb/stb_image.h"

class Texture
{
public:
    unsigned int id_;
    Texture(const std::string& path);
    
};

#endif //TEXTURE_H

