#pragma once
#include "AbstractMusic.hpp"
#include <vector>

class AudioFile : public AbstractMusic {
    protected:
        std::string Format;
        int Bitrate;
    public:
        AudioFile(const std::string& title, int duration, std::string format, int bitrate): AbstractMusic(title, duration), Format(std::move(format)), Bitrate(bitrate) {}
};