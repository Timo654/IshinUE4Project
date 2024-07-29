#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ECorrelationOrganization.h"
#include "MacanUIInterfaceCorrelation.h"
#include "MacanUserWidget.h"
#include "MUW_MainMenuCorrelationOrg.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMUW_MainMenuCorrelationOrg : public UMacanUserWidget, public IMacanUIInterfaceCorrelation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECorrelationOrganization groupType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D groupSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D absolutePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isNeedCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isSelecting;
    
    UMUW_MainMenuCorrelationOrg();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateSelectFocusAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDefaultMode() const;
    

    // Fix for true pure virtual functions not being implemented
};

