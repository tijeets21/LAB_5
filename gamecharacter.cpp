#include "gamecharacter.h"

// Default constructor
GameCharacter::GameCharacter() : name("Miner") {
    tools = new std::string[3];
    tools[0] = "pickaxe";
    tools[1] = "shovel";
    tools[2] = "bow";
    std::cout << "The default constructor is called" << std::endl;
}

// Parameterized constructor
GameCharacter::GameCharacter(const std::string& characterName, const std::string& tool1, const std::string& tool2, const std::string& tool3)
        : name(characterName) {
    tools = new std::string[3];
    tools[0] = tool1;
    tools[1] = tool2;
    tools[2] = tool3;
    std::cout << "The parameterized constructor is called" << std::endl;
}

// Copy constructor
GameCharacter::GameCharacter(const GameCharacter& other) : name(other.name) {
    tools = new std::string[3];
    for (int i = 0; i < 3; ++i) {
        tools[i] = other.tools[i];
    }
    std::cout << "The copy constructor is called" << std::endl;
}

// Assignment operator
GameCharacter& GameCharacter::operator=(const GameCharacter& other) {
    if (this != &other) {
        name = other.name;
        delete[] tools;
        tools = new std::string[3];
        for (int i = 0; i < 3; ++i) {
            tools[i] = other.tools[i];
        }
        std::cout << "The assignment operator is called" << std::endl;
    }
    return *this;
}

// Destructor
GameCharacter::~GameCharacter() {
    delete[] tools;
}

// Test functions

// Copy constructor called once
GameCharacter foo1(GameCharacter p) { // Pass by value
    return p;
}

// No copy constructor called
GameCharacter& foo2(GameCharacter& p) { // Pass by reference
    return p;
}

// Copy constructor called once
GameCharacter foo3(GameCharacter& p) { // Pass by reference and return by value
    return p;
}

// Copy constructor called once
GameCharacter& foo4(GameCharacter p) { // Pass by value and return by reference
    return p;
}

// Copy constructor called once
GameCharacter& foo5(const GameCharacter& p) { // Pass by const reference and return by reference
    GameCharacter gc;
    return gc;
}
