#include <iostream>
#include "ContextMenu/ContextMenu.h"

int main() {
    ContextMenu menu({"Walk", "Rest"});

    int choice = menu.getInput();
    std::cout << "Chosen: " << choice << std::endl;

    return 0;
}