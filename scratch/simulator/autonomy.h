#ifndef AUTONOMY_H
#define AUTONOMY_H

#include "occupancy_grid.h"
#include "world.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    AS_OK,
    AS_DONE,
    AS_ERROR
} AutonomyStatus;

AutonomyStatus autonomy_step(World* world, float rover_x, float rover_y, float rover_angle, float* out_offset_x, float* out_offset_y);

const char* autonomy_get_name();

#ifdef __cplusplus
}
#endif

#endif
