#include "stb/stb_image.h"
#include <iostream>

int main() {
    int width, height, channels;
    unsigned char *data = stbi_load("test/image.png", &width, &height, &channels, 4);

    if (data == nullptr) {
        std::cerr << "Image load error: " << stbi_failure_reason() << std::endl;
        return 1;
    }

    stbi_image_free(data);

    return 0;
}