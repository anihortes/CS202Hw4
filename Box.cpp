//
// Created by A. Harrison Owen on 3/28/2021.
//

#include "Box.h"

void FilledBox::print(std::ostream &os) const{
    for (auto i = 0; i < getHeight(); ++i){
        for(auto j = 0; j < getWidth(); ++j){
            os << "x";
        }
        os << std::endl;
    }
}

void HollowBox::print(std::ostream &os) const {
    for (auto i = 0; i < getHeight(); ++i){
        if (i == 0 || i == getHeight()-1){
            for(auto j = 0; j < getWidth(); ++j){
                os << "x";
            }
        }
        else {
            for (auto j = 0; j < getWidth(); ++j) {
                if( j == 0 || j == getWidth()-1){
                    os << "x";
                }
                else {
                    os << " ";
                }
            }
        }
        os << std::endl;
    }
}

void CheckeredBox::print(std::ostream &os) const {
    for(auto i = 0; i < getHeight(); ++i){
        if(i%2 == 0){
            for (auto j = 0; j < getWidth(); ++j){
                if(j%2 == 0){
                    os << "x";
                }
                else
                    os << " ";
            }
        }

        else {
            for (auto j = 0; j < getWidth(); ++j){
                if(j%2 == 0){
                    os << " ";
                }
                else
                    os << "x";
            }
        }
        os << std::endl;
    }
}


std::unique_ptr<Box> boxFactory(char c, int w, int h){
    switch(c){
        case 'f':
            return std::make_unique<FilledBox>(w,h);
            break;
        case 'h':
            return std::make_unique<HollowBox>(w,h);
            break;
        case 'c':
            return std::make_unique<CheckeredBox>(w,h);
            break;
    }
}