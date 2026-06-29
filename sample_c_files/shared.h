#ifndef SHARED_H
#define SHARED_H
/* Rule 18.4 violation: unions shall not be used */
union DataStore { unsigned int raw; unsigned char bytes[4]; };
int check_limits(int x, int y);
void reset_device(void);
#endif