#pragma once
#include "CoreMinimal.h"
#include "EUIResultOnOrOff.h"
#include "EUIYakuzaCaptionAnimType.h"
#include "EUIYakuzaCaptionBfType.h"
#include "MacanUIData.h"
#include "MacanUIDataYakuzaCaption.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class UMacanUIDataYakuzaCaption : public UMacanUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 bfData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float currentAnimSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIYakuzaCaptionAnimType currentAnimType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* currentTexture;
    
    UMacanUIDataYakuzaCaption();

    UFUNCTION(BlueprintCallable)
    void UpdateEnd();
    
    UFUNCTION(BlueprintCallable)
    void UpdateAnimSec(float inSec);
    
    UFUNCTION(BlueprintCallable)
    void SetupYakuzaCaptionAnim(EUIYakuzaCaptionAnimType inType, UTexture2D* inText2D);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetFlag(EUIYakuzaCaptionBfType Type);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsOnFlag(EUIResultOnOrOff& result, EUIYakuzaCaptionBfType Type);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirty(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    void DelFlag(EUIYakuzaCaptionBfType Type);
    
};

