#include <stdio.h>
#include <time.h>
#include <stdlib.h>

typedef struct {
    short int width;
    short int height;
}door;

typedef struct {
    short int size;
}wheel;

typedef struct {
    short int power;
    short int life;
}engine;

typedef struct {
    engine* e;
    wheel* w;
    door* d;
}car;


int main(void)
{
    engine e;
    engine* enginePt;
    enginePt = &e;

    wheel w;
    wheel* wheelPt;
    wheelPt = &w;
    
    door d;
    door* doorPt;
    doorPt = &d;

    car c;
    c.e = enginePt;
    c.w = wheelPt;
    c.d = doorPt;

    c.e->power = 100;
    c.e->life = 50;
    c.w->size = 60;
    c.d->height = 6;
    c.d->width = 10;

    printf("Engine Power: %d\nEngine Life: %d\nWheel Size: %d\n\n", c.e->power, c.e->life, c.w->size);

    // Print out data size in bytes
    printf("Car Size: %lu\n", sizeof(c));
    printf("Door Size: %lu\n", sizeof(d));
    printf("Engine Size: %lu\n", sizeof(e));
    printf("Wheel Size: %lu\n", sizeof(w));

    return 0;   
}