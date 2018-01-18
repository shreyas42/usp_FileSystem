/*Header file which contains the basic structures for our file system
 * Ravi Shreyas Anupindi
 * Rishabh Dutt
 * Rajat Nigam
*/

#ifndef DIRECTORY_H_
#define DIRECTORY_H_


#define MODE_STRING_SIZE 5

typedef struct{
    char bit_string[MODE_STRING_SIZE]; // 2 bits for file type, 3 bits for user permissions
}f_mode;



typedef struct{
    uint disk; //disk number
    ulong int inode_num; //inode identifier
    //file mode
    //link number
    //userid
    //group id
    //device id if device file
    //size of the file in bytes
    //last modified
    //last accessed
    //number of blocks allocated to the file
    //pointer to first block
}inode;

#endif
