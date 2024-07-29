#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SizeBox.h"
#include "EUISwitchingFontSizeType.h"
#include "UISwitchingSubtitleBackSize.h"
#include "MacanSizeBox.generated.h"

UCLASS(Blueprintable)
class UMacanSizeBox : public USizeBox {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D _OverrideSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUISwitchingSubtitleBackSize _SwitchingBackSizeSet;
    
public:
    UMacanSizeBox();

protected:
    UFUNCTION(BlueprintCallable)
    void OnUpdateSwitchingSize(EUISwitchingFontSizeType inType);
    
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
};

