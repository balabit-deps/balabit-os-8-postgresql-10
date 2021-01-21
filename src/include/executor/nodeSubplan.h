/*-------------------------------------------------------------------------
 *
 * nodeSubplan.h
 *
 *
 *
 * Portions Copyright (c) 1996-2017, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * src/include/executor/nodeSubplan.h
 *
 *-------------------------------------------------------------------------
 */
#ifndef NODESUBPLAN_H
#define NODESUBPLAN_H

#include "nodes/execnodes.h"

extern SubPlanState *ExecInitSubPlan(SubPlan *subplan, PlanState *parent);

extern AlternativeSubPlanState *ExecInitAlternativeSubPlan(AlternativeSubPlan *asplan, PlanState *parent);

extern Datum ExecSubPlan(SubPlanState *node, ExprContext *econtext, bool *isNull);

extern Datum ExecAlternativeSubPlan(AlternativeSubPlanState *node, ExprContext *econtext, bool *isNull);

extern void ExecReScanSetParamPlan(SubPlanState *node, PlanState *parent);

extern void ExecSetParamPlan(SubPlanState *node, ExprContext *econtext);

extern void ExecSetParamPlanMulti(const Bitmapset *params, ExprContext *econtext);

#endif							/* NODESUBPLAN_H */
