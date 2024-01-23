#ifndef PET_H
#define PET_H

#include <iostream>
#include <string>

class Pet {
public:
    Pet(const std::string& name);

    void Show() const;
    void Sound() const;
    virtual void Type() const = 0;

protected:
    std::string name;
};

class Dog : public Pet {
private:
    std::string breed;
public:
    Dog(const std::string& name, const std::string& breed);
    void Type() const override;
};

class Cat : public Pet {
private:
    std::string color;
public:
    Cat(const std::string& name, const std::string& color);
    void Type() const override;
};

class Parrot : public Pet {
private:
    std::string language;
public:
    Parrot(const std::string& name, const std::string& language);
    void Type() const override;
};

class Hamster : public Pet {
private:
    bool isRobo;
public:
    Hamster(const std::string& name, bool isRobo);
    void Type() const override;
};

#endif 
