/*
 Created by A. Harrison Owen on 3/28/2021.
 04/02/2021
 CS202: Homework 4
 This program prints either a hollow, checkered, or filled box.
*/

#ifndef CS202HW4_BOX_H
#define CS202HW4_BOX_H
#include <iostream>
#include <ostream>
#include <string>
#include <memory>

// Base class box
class Box {
public:
    //default constructor makes a 1x1 box
    Box() : _width(1), _height(1){};
    Box(const Box &a) : _width(a._width), _height(a._height){};
    Box(int width, int height) : _width(width), _height(height){};
    virtual ~Box(){};

    int getWidth() const {
        return _width;
    };
    int getHeight() const{
        return _height;
    };
    void setWidth(int width){
        _width = width;
    };
    void setHeight(int height){
        _height = height;
    };

    //type and print will be overridden by derived class
    virtual std::string type() const = 0;
    virtual void print(std::ostream &os) const = 0;

    //overloaded operator is a friend so all derived classes can use it
    friend std::ostream &operator<<(std::ostream &os, const Box &a){
        a.print(os);
        return os;
    };
private:
    int _width;
    int _height;
};

class FilledBox : public Box{
public:
    using Box::Box;
    std::string type() const override {
        return "Filled";
    };
    void print(std::ostream &os) const override;
};

class HollowBox : public Box{
public:
    using Box::Box;
    std::string type() const override {
        return "Hollow";
    };
    void print(std::ostream &os) const override;
};

class CheckeredBox : public Box{
public:
    using Box::Box;
    std::string type() const override {
        return "Checkered";
    };
    void print(std::ostream &os) const override;
};

std::unique_ptr<Box> boxFactory(char, int, int);

#endif //CS202HW4_BOX_H
