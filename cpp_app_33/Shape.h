#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include <fstream>
#include <cmath> 

const int MAX_SHAPES = 10;

class Shape {
public:
    virtual void Show() const = 0;
    virtual void Save(const std::string& filename) const = 0;
    virtual void Load(const std::string& filename) = 0;
    virtual ~Shape() {}
};

class Square : public Shape {
private:
    double x_, y_, side_;
public:
    Square(double x, double y, double side) : x_(x), y_(y), side_(side) {}

    void Show() const override {
        std::cout << "Square: x = " << x_ << ", y = " << y_ << ", side = " << side_ << std::endl;
    }

    void Save(const std::string& filename) const override {
        std::ofstream file(filename);
        file << "Square " << x_ << " " << y_ << " " << side_;
        file.close();
    }

    void Load(const std::string& filename) override {
        std::ifstream file(filename);
        file >> x_ >> y_ >> side_;
        file.close();
    }
};

class Circle : public Shape {
private:
    double x_, y_, radius_;
public:
    Circle(double x, double y, double radius) : x_(x), y_(y), radius_(radius) {}

    void Show() const override {
        std::cout << "Circle: x = " << x_ << ", y = " << y_ << ", radius = " << radius_ << std::endl;
    }

    void Save(const std::string& filename) const override {
        std::ofstream file(filename);
        file << "Circle " << x_ << " " << y_ << " " << radius_;
        file.close();
    }

    void Load(const std::string& filename) override {
        std::ifstream file(filename);
        file >> x_ >> y_ >> radius_;
        file.close();
    }
};

class Rectangle : public Shape {
private:
    double x_, y_, width_, height_;
public:
    Rectangle(double x, double y, double width, double height) : x_(x), y_(y), width_(width), height_(height) {}

    void Show() const override {
        std::cout << "Rectangle: x = " << x_ << ", y = " << y_ << ", width = " << width_ << ", height = " << height_ << std::endl;
    }

    void Save(const std::string& filename) const override {
        std::ofstream file(filename);
        file << "Rectangle " << x_ << " " << y_ << " " << width_ << " " << height_;
        file.close();
    }

    void Load(const std::string& filename) override {
        std::ifstream file(filename);
        file >> x_ >> y_ >> width_ >> height_;
        file.close();
    }
};

class Ellipse : public Shape {
private:
    double x_, y_, radius_x_, radius_y_;
public:
    Ellipse(double x, double y, double radius_x, double radius_y) : x_(x), y_(y), radius_x_(radius_x), radius_y_(radius_y) {}

    void Show() const override {
        std::cout << "Ellipse: x = " << x_ << ", y = " << y_ << ", radius_x = " << radius_x_ << ", radius_y = " << radius_y_ << std::endl;
    }

    void Save(const std::string& filename) const override {
        std::ofstream file(filename);
        file << "Ellipse " << x_ << " " << y_ << " " << radius_x_ << " " << radius_y_;
        file.close();
    }

    void Load(const std::string& filename) override {
        std::ifstream file(filename);
        file >> x_ >> y_ >> radius_x_ >> radius_y_;
        file.close();
    }
};

#endif