/* USP Project - Phase 1*
 * Ravi Shreyas 	*
 * Rishabh Dutt		*
 * Rajat Nigam 		*/

#ifndef BLOCK_H_
#define BLOCK_H_

/* File that abstracts our storage device into block number*/
struct diskblock{
	int diskblocknumber;
	struct diskblock * nextdiskblock;	
};
/* Needs to be worked upon */
#endif
