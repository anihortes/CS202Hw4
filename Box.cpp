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