#pragma once
#include "CoreMinimal.h"
#include "ActionObjectBase.h"
#include "CActionSubHPGauge.generated.h"

class UMacanUserWidget_SubGauge;

UCLASS(Blueprintable)
class UCActionSubHPGauge : public UActionObjectBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_SubGauge* m_pUI;
    
public:
    UCActionSubHPGauge();

};

