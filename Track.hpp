#pragma once
#include "AudioFile.hpp"

class Track : public AudioFile{
    private:
        std::string _Artist;
    public:
        Track(const std::string& title, int duration, const std::string fileFormat, int bitrate, std::string artist) : AudioFile(title, duration, fileFormat, bitrate), _Artist(artist) {}
        void ShowInfo() const override {
            std::cout << "Artist: " << _Artist << ", Title: " << Title << ", Duration: " << Duration << ", FileFormat: " << Format << ", Bitrate: " << Bitrate << std::endl; 
        }
};