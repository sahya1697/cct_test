#include "shared.h"
/* Rule 18.4 violation: union used to reinterpret memory */
union DataStore g_store;
void pack_value(unsigned int v) { g_store.raw = v; }
unsigned char get_byte(int i) { return g_store.bytes[i]; }
