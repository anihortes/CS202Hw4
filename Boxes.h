//
// Created by A. Harrison Owen on 3/28/2021.
//

#ifndef CS202HW4_BOXES_H
#define CS202HW4_BOXES_H


class Boxes {
public:

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

private:
    int _width;
    int _height;
};


#endif //CS202HW4_BOXES_H
