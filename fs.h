/*Header file which contains the basic structures for our file system
 * Ravi Shreyas Anupindi
 * Rishabh Dutt
 * Rajat Nigam
*/

#ifndef DIRECTORY_H_
#define DIRECTORY_H_

#include"macros.h"

#define MODE_STRING_SIZE 5

/*structure to maintain the modebits for a file
 * considering a single user file system no multi user
 * so permissions would be set as two bits for type of file
 * three bits for read,write,execute permissions
 */

struct mode_string{
    char bit_string[MODE_STRING_SIZE]; // 2 bits for file type, 3 bits for user permissions
};

struct inode{
    unsigned short int disk; //disk number
    unsigned long int inode_num; //inode identifier
    int size; //size of the file in blocks
    int block_p[BLOCKS_PER_FILE]; //block numbers where data is stored
    int indirect_p; //block number where the first level indirect pointers are stored : there are POINTERS_PER_BLOCK stored in each block
};

int createInode();
int getDisk(struct inode *p);
int getInodeNum(struct inode *p,int disk);

#endif
