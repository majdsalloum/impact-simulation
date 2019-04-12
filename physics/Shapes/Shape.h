//
// Created by Majd Salloum on 4/12/2019.
//

#ifndef IMPACT_SIMULATION_SHAPE_H
#define IMPACT_SIMULATION_SHAPE_H


#include <glm/vec3.hpp>
#include "../../graphics/Drawer.h"

class Shape {
protected:
    float size;
    float mass;
    glm::vec3 position;
    glm::vec3 speed;
    glm::vec3 rotation;
public:
    Shape(float size, float mass, glm::vec3 position) : size(size), mass(mass), position(position) {

    }

    virtual void draw(Drawer drawer) = 0;

    virtual glm::vec3 *getBody() = 0;

    virtual void move(float time) = 0;

    void setSpeed(glm::vec3 speed);

    void setRotation(glm::vec3 rotation);
};


#endif //IMPACT_SIMULATION_SHAPE_H
