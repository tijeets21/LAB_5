 #pragma once


#include <iostream>
#include <string>

class GameCharacter {
private:
    std::string name;
    std::string* tools;

public:
    // Constructors
    GameCharacter(); // Default constructor
    GameCharacter(const std::string& characterName, const std::string& tool1, const std::string& tool2, const std::string& tool3); // Parameterized constructor
    GameCharacter(const GameCharacter& other); // Copy constructor

    // Destructor
    ~GameCharacter();

    // Assignment operator
    GameCharacter& operator=(const GameCharacter& other);

    // Test functions
    friend GameCharacter foo1(GameCharacter p); // Pass by value
    friend GameCharacter& foo2(GameCharacter& p); // Pass by reference
    friend GameCharacter foo3(GameCharacter& p); // Pass by reference and return by value
    friend GameCharacter& foo4(GameCharacter p); // Pass by value and return by reference
    friend GameCharacter& foo5(const GameCharacter& p); // Pass by const reference and return by reference
};


