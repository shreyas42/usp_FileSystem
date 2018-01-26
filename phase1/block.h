/* USP Project - Phase 1*
 * Ravi Shreyas 	*
 * Rishabh Dutt		*
 * Rajat Nigam 		*/

#ifndef BLOCK_H_
#define BLOCK_H_

#include "macros.h"
#include "fs.h"

struct disk_block;
struct inode_block;
struct data_block;
struct indirect_block;

struct data_block{
  char buffer[UNION_SIZE];  
};

struct inode_block{
    struct inode buffer[UNION_SIZE / sizeof(struct inode)];
};

struct indirect_block{
    struct disk_block *buffer[UNION_SIZE / sizeof(struct disk_block *)];
};


/* File that abstracts our storage device into block number*/
struct disk_block{
	int diskblocknumber;
    unsigned int block_flag;
	struct disk_block * nextdiskblock;
    union buffer_type{
        struct inode_block iblock;
        struct data_block dblock;
        struct indirect_block pblock;
    } buf_type;
};
/* Needs to be worked upon */
#endif
