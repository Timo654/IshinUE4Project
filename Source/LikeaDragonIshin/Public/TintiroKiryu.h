#pragma once
#include "CoreMinimal.h"
#include "TintiroEntity.h"
#include "TintiroKiryu.generated.h"

class UInputDeviceListener;

UCLASS(Blueprintable)
class ATintiroKiryu : public ATintiroEntity {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* pListener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATintiroEntity* m_after_throw_entity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATintiroEntity* m_before_throw_entity;
    
public:
    ATintiroKiryu(const FObjectInitializer& ObjectInitializer);

};

