#include "AnimNode_KawaiiPhysics.h"

FAnimNode_KawaiiPhysics::FAnimNode_KawaiiPhysics() {
    this->TargetFramerate = 0;
    this->OverrideTargetFramerate = false;
    this->InParam = NULL;
    this->bForceTeleport = false;
    this->bCheckTeleport = false;
    this->bDisable = false;
    this->bDisableSayaCollision = false;
    this->bDisableModifyRoot = false;
    this->bDisableModifyRotate = false;
    this->AlphaInputTypeOverwrite = EAnimAlphaInputType::Float;
    this->ForceExecCount = 0;
    this->CheckMoveStopSpeedThreshold = 0.00f;
    this->LimitAngleScale = 0.00f;
    this->DampingCurve = NULL;
    this->WorldDampingLocationCurve = NULL;
    this->WorldDampingRotationCurve = NULL;
    this->StiffnessCurve = NULL;
    this->RadiusCurve = NULL;
    this->LimitAngleCurve = NULL;
    this->bUpdatePhysicsSettingsInGame = false;
    this->DummyBoneLength = 0.00f;
    this->BoneForwardAxis = EBoneForwardAxis::X_Positive;
    this->PlanarConstraint = EPlanarConstraint::None;
    this->ResetBoneTransformWhenBoneNotFound = false;
    this->LimitsDataAsset = NULL;
    this->TeleportDistanceThreshold = 0.00f;
    this->TeleportRotationThreshold = 0.00f;
    this->bEnableWind = false;
    this->WindScale = 0.00f;
    this->bAllowWorldCollision = false;
    this->bOverrideCollisionParams = false;
    this->bIgnoreSelfComponent = false;
    this->TotalBoneLength = 0.00f;
    this->StabTime = 0.00f;
    this->bInitPhysicsSettings = false;
    this->bIsAlphaInputNode = false;
    this->bIsInitializeNow = false;
    this->bIsEvent = false;
}

