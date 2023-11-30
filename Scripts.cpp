#include <iostream>
#include <string>

using namespace std;

struct ColorConsole {
    static constexpr auto fb_blue = "\033[34m";
    static constexpr auto fb_white = "\033[47m";
};

struct ConsoleBox {
    void new_text() {/*...*/}
    void set_text(const string &text) { cout << text << endl;}
};