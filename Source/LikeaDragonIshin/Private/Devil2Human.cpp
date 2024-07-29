#include "Devil2Human.h"
#include "HumanEventComponent.h"
#include "MaterialManageComponent.h"

ADevil2Human::ADevil2Human(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_BaseTurnRate = 45.00f;
    this->m_BaseLookUpRate = 45.00f;
    this->m_IsShiftMovement = false;
    this->m_CachedMaxWalkSpeed = 0.00f;
    this->m_DeltaSeconds = 0.00f;
    this->m_AxisForwardValue = 0.00f;
    this->m_AxisRightValue = 0.00f;
    this->m_AxisDirection = 0.00f;
    this->m_AxisLength = 0.00f;
    this->AnimInstanceObject = NULL;
    this->FaceTarget = NULL;
    this->HandPattern = NULL;
    this->FaceLook = NULL;
    this->Jaunt = NULL;
    this->LimbSolver = NULL;
    this->WaistTwist = NULL;
    this->KawaiiPhysicsParam = NULL;
    this->MaterialManage = CreateDefaultSubobject<UMaterialManageComponent>(TEXT("MaterialManageComponent"));
    this->GlobalAlpha = NULL;
    this->m_FighterComp = NULL;
    this->HumanEvent = CreateDefaultSubobject<UHumanEventComponent>(TEXT("HumanEvent"));
    this->EyeHighlight = NULL;
}

void ADevil2Human::SetFaceTargetToPostProcessABP() {
}


