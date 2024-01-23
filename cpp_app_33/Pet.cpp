#include "Pet.h"

Pet::Pet(const std::string& name){
	this->name = name;
}

void Pet::Show() const {
	std::cout << "Name: " << name << std::endl;
}

void Pet::Sound() const {
	std::cout << "Sound: " << std::endl;
}

Dog::Dog(const std::string& name, const std::string& breed) : Pet(name) {
	this->breed = breed;
}

void Dog::Type() const {
	std::cout << "Type: Dog" << std::endl;
	std::cout << "Woof!" << std::endl;
	std::cout << "Breed: " << breed << std::endl;
}

Cat::Cat(const std::string& name, const std::string& color) : Pet(name) {
	this->color = color;
}

void Cat::Type() const {
	std::cout << "Type: Cat" << std::endl;
	std::cout << "Meow!" << std::endl;
	std::cout << "Color: " << color << std::endl;
}

Parrot::Parrot(const std::string& name, const std::string& language) : Pet(name) {
	this->language = language;
}

void Parrot::Type() const {
	std::cout << "Type: Parrot" << std::endl;
	std::cout << "Squawk!" << std::endl;
	std::cout << "Language: " << language << std::endl;
}

Hamster::Hamster(const std::string& name, bool isRobo) : Pet(name) {
	this->isRobo = isRobo;
}

void Hamster::Type() const {
	std::cout << "Type: Hamster" << std::endl;
	std::cout << "Squeak!" << std::endl;
	std::cout << "Is Robo: " << (isRobo ? "Yes" : "No") << std::endl;
}

