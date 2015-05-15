// copied with permission from https://gist.github.com/Lomeli12/ef5c2ea3e6c41c5b27ac and modified slightly

#include <iostream>
#include <string.h>
#include <cstdlib>
#include <cstring>

using namespace std;

int main(int argc, char* argv[]) {
    string google = "https://www.google.com/search?q=";
    string keyWord = "how";
    if (argc > 0) {
        string srch = keyWord + "+";
        for (int i = 1; i < argc; i++) {
            srch = srch + argv[i];
            if (i != (argc - 1)) srch = srch + "+";
        }
        string full = "if which xdg-open; then xdg-open " + google + srch + ";" +
                      "elif which kde-open; then kde-open " + google + srch + ";" +
                      "elif which gnome-open; then gnome-open " + google + srch + ";" +
                      "else echo 'Install xdg-open, kde-open, or gnome-open.';" +
                      "fi;";
        char * cstr = new char [full.length() + 2];
        strcpy(cstr, full.c_str());
        system(cstr);
    }
    return 0;
}
