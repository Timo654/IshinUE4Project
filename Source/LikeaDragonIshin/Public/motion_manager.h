#pragma once
#include "CoreMinimal.h"
#include "ManageResourceAnimMontage.h"
#include "ManageResourceAnimSequence.h"
#include "ManageResourceBlendSpace.h"
#include "entity_management_method.h"
#include "motion_manager.generated.h"

class UActionSetDataAsset;

UCLASS(Blueprintable)
class Umotion_manager : public Uentity_management_method {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FManageResourceAnimMontage> m_MapMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FManageResourceAnimSequence> m_MapSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FManageResourceBlendSpace> m_MapBlendSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UActionSetDataAsset* m_pActionSet;
    
public:
    Umotion_manager();

};

