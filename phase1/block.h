/* USP Project - Phase 1*
 * Ravi Shreyas 	*
 * Rishabh Dutt		*
 * Rajat Nigam 		*/

#ifndef BLOCK_H_
#define BLOCK_H_

#include"fs.h"

struct disk_block;
struct data_block;
struct inode_block;

struct data_block{
  char buffer[BLOCK_SIZE - sizeof(int) - sizeof(unsigned int) - sizeof(struct disk_block)];  
};

struct inode_block{
    struct inode buffer[BLOCK_SIZE / sizeof(struct inode)];
};

/* File that abstracts our storage device into block number*/
struct diskblock{
	int diskblocknumber;
    unsigned int block_flag;
	struct diskblock * nextdiskblock;
    union buffer_type{
        struct data_block dblock;
        struct inode_block iblock;
        struct super_block sblock;
    };
};
/* Needs to be worked upon */
#endif
