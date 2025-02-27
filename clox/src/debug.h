#ifndef clox_debug_h
#define clox_debug_h

#include "chunk.h"

void disassembleChunk(Chunk *chunk, const char *name);
int dissassembleInstruction(Chunk *chunk, int offset);

#endif // !clox_debug_h
