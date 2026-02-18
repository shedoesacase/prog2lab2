#include "Track.hpp"

int main(){
    Track Morgenshern_Pablo("Pablo", 200, ".mp3", 32000, "Morgenstern");
    Track ads("VKMusic_ads", 30, ".mp3", 32000, "VK");

    Morgenshern_Pablo.ShowInfo();
    ads.ShowInfo();
    return 0;
}