//
// Created by Majd Salloum on 4/13/2019.
//

#ifndef IMPACT_SIMULATION_DRAWER_H
#define IMPACT_SIMULATION_DRAWER_H


#include <glm/vec3.hpp>

class Drawer {
public:
    virtual void draw(glm::vec3 triangles[][3]) = 0;

    virtual void reset() = 0;
};


#endif //IMPACT_SIMULATION_DRAWER_H
