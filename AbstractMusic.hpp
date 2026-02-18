#pragma once
#include <iostream>
#include <string>

class AbstractMusic{
    protected:
        std::string Title;
        int Duration;
    public:
        AbstractMusic(const std::string& title, int duration) : Title(title), Duration(duration) {}
        virtual void ShowInfo() const = 0;
        virtual ~AbstractMusic() {}
};