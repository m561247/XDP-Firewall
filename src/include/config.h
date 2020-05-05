#ifndef CONFIG_HEADER
#define CONFIG_HEADER

#include "xdpfw.h"

struct config_map
{
    char *interface;
    uint16_t updateTime;
    uint16_t filterCount;
    struct filter filters[MAX_FILTERS];
};

void SetConfigDefaults(struct config_map *cfg);
int OpenConfig(const char *FileName);
int ReadConfig(struct config_map *cfg);

#endif