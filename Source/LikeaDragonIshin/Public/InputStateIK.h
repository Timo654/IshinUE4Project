#pragma once
#include "CoreMinimal.h"
#include "EBtlStyle.h"
#include "EUICardLayout.h"
#include "InputStateIK.generated.h"

USTRUCT(BlueprintType)
struct FInputState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "the")
    bool CardActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "the")
    bool isSkillMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "the")
    bool isAvailableSpecial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "the")
    bool isStyleChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "the")
    EBtlStyle nowStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "the")
    TMap<EUICardLayout, bool> isSkillOn;
    
    LIKEADRAGONISHIN_API FInputState();
};

