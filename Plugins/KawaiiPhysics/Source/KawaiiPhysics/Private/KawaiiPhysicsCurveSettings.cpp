#include "KawaiiPhysicsCurveSettings.h"

FKawaiiPhysicsCurveSettings::FKawaiiPhysicsCurveSettings() {
    this->bCurve = false;
    this->CurveMinRate = 0.00f;
    this->CurveDampling = 0.00f;
    this->bCurveDamplingReverse = false;
    this->CurveWorldLocationDamping = 0.00f;
    this->bCurveWorldLocationDampingReverse = false;
    this->CurveWorldRotationDamping = 0.00f;
    this->bCurveWorldRotationDampingReverse = false;
    this->CurveStiffness = 0.00f;
    this->bCurveStiffnessReverse = false;
    this->CurveRadius = 0.00f;
    this->bCurveRadiusReverse = false;
    this->CurveLimitAngle = 0.00f;
    this->bCurveLimitAngleReverse = false;
}

