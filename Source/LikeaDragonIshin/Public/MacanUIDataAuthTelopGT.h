#pragma once
#include "CoreMinimal.h"
#include "EUIAuthTelopGTAnimType.h"
#include "EUIAuthTelopGTBfType.h"
#include "EUIAuthTelopGTTelopType.h"
#include "EUIResultOnOrOff.h"
#include "MacanUIData.h"
#include "MacanUIDataAuthTelopGT.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class UMacanUIDataAuthTelopGT : public UMacanUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 bfData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float currentAnimSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIAuthTelopGTAnimType currentAnimType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIAuthTelopGTTelopType currentTelopType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* currentTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText telopText;
    
    UMacanUIDataAuthTelopGT();

    UFUNCTION(BlueprintCallable)
    void UpdateEnd();
    
    UFUNCTION(BlueprintCallable)
    void UpdateAnimSec(float inSec);
    
    UFUNCTION(BlueprintCallable)
    void SetupTelopUIAuthTelopGT(EUIAuthTelopGTTelopType inType, UTexture2D* inText2D, UPARAM(Ref) FText& InText);
    
    UFUNCTION(BlueprintCallable)
    void SetupAnimUIAuthTelopGT(EUIAuthTelopGTAnimType inType);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetFlag(EUIAuthTelopGTBfType Type);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsOnFlag(EUIResultOnOrOff& result, EUIAuthTelopGTBfType Type);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirty(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    void DelFlag(EUIAuthTelopGTBfType Type);
    
};

