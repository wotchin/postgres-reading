/*-------------------------------------------------------------------------
 *
 * nodeShufflescan.h
 *
 *
 *
 * Portions Copyright (c) 1996-2012, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * src/include/executor/nodeShufflescan.h
 *
 *-------------------------------------------------------------------------
 */
#ifndef NODESHUFFLESCAN_H
#define NODESHUFFLESCAN_H

#include "nodes/execnodes.h"

extern ShuffleScanState *ExecInitShuffleScan(ShuffleScan *node, EState *estate, int eflags);
extern TupleTableSlot *ExecShuffleScan(ShuffleScanState *node);
extern void ExecEndShuffleScan(ShuffleScanState *node);
extern void ExecShuffleMarkPos(ShuffleScanState *node);
extern void ExecShuffleRestrPos(ShuffleScanState *node);
extern void ExecReScanShuffleScan(ShuffleScanState *node);

#endif   /* NODESHUFFLESCAN_H */
