#ifndef LEGIK_H
#define LEGIK_H

#include "geometry.h"
#include "leg.h"

typedef struct {
	bool isSolved;
	legangle angle;
} iksolver_t;

class LegIK {
public:
	LegIK(leg &legObj, figure &bodyObj);
	void set(leg &legObj, figure &bodyObj);
	iksolver_t solve();
	// helpers
	static double normalizeAngleRad(double angleRad);
	static double safeAcos(double v);
	static double safeAsin(double v);

private:
	leg *_leg;
	figure *_body;
};

#endif // LEGIK_H
