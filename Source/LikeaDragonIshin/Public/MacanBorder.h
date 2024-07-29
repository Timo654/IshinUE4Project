#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/Border.h"
#include "EUISwitchingBackColorType.h"
#include "UISwitchingSubtitleBack.h"
#include "MacanBorder.generated.h"

UCLASS(Blueprintable)
class UMacanBorder : public UBorder {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor _OverrideBackColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUISwitchingSubtitleBack _SwitchingBackColorSizeSet;
    
public:
    UMacanBorder();

protected:
    UFUNCTION(BlueprintCallable)
    void OnUpdateSwitchingTextColor(EUISwitchingBackColorType inType);
    
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
};

