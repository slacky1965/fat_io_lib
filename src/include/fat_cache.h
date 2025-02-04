#ifndef __FAT_CACHE_H__
#define __FAT_CACHE_H__

#include "fat_filelib.h"

//-----------------------------------------------------------------------------
// Prototypes
//-----------------------------------------------------------------------------
int ICACHE_FLASH_ATTR fatfs_cache_init(struct fatfs *fs, FL_FILE *file);
int ICACHE_FLASH_ATTR fatfs_cache_get_next_cluster(struct fatfs *fs, FL_FILE *file, uint32 clusterIdx, uint32 *pNextCluster);
int ICACHE_FLASH_ATTR fatfs_cache_set_next_cluster(struct fatfs *fs, FL_FILE *file, uint32 clusterIdx, uint32 nextCluster);

#endif
