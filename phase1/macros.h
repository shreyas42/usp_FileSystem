/*Header file which contains the basic macros for our file system
 * Ravi Shreyas Anupindi
 * Rishabh Dutt
 * Rajat Nigam
*/
#ifndef MACROS_H_
#define MACROS_H_

#define DISK_BLOCKS 128

#define BLOCK_SIZE 4096

#define NUM_INODES 16 /*roughly close to 10% of the disc blocks */

#define BLOCKS_PER_FILE 4

#define MAX_LENGTH 255

#define POINTERS_PER_BLOCK (BLOCK_SIZE / sizeof(int))

#endif
