#ifndef RENDER_RAY_H
#define RENDER_RAY_H

#include "vec3.h"

class ray {
public:
    ray(){}
    ray(const point3& origin,const vec3& direction)
        :orig(origin),dir(direction)
    {}
    point3 origin()const {return orig;}
    vec3 direction()const {return dir;}
    // 顺着光线计算点坐标，线性插值
    point3 at(double t) const {
        return orig + t*dir;
    }

public:
    point3 orig;
    vec3 dir;
};





#endif //RENDER_RAY_H
