#ifndef clox_object_h
#define clox_object_h

#include "common.h"
#include "value.h"

typedef enum {
  OBJ_TYPE,
} ObjType;

struct Obj {
  ObjType type;
};

#endif // !clox_object_h
