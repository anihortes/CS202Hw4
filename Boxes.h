//
// Created by A. Harrison Owen on 3/28/2021.
//

#ifndef CS202HW4_BOXES_H
#define CS202HW4_BOXES_H
#include <iostream>
#include <ostream>
#include <string>

class Boxes {
public:
    Boxes() : _width(1), _height(1){};

    Boxes(int width, int height) : _width(width), _height(height){};

    virtual ~Boxes(){};

    virtual void print(std::ostream &os) const = 0;

    virtual std::string type() const = 0;

    int getWidth() const {
        return _width;
    };

    int getHeight(){
        return _height;
    };

    void setWidth(int width){
        _width = width;
    };
    void setHeight(int height){
        _height = height;
    };

    friend ostream &operator<<(ostream &os, const Boxes &a){
        b.print(os);
        return os;
    }
private:
    int _width;
    int _height;
};

class FilledBox : public Boxes{
public:
    using Boxes::Boxes;

};

#endif //CS202HW4_BOXES_H
