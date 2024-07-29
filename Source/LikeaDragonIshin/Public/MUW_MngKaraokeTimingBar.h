#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MacanUserWidget.h"
#include "MUW_MngKaraokeTimingBar.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMUW_MngKaraokeTimingBar : public UMacanUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float playRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float playFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 curLine;
    
public:
    UMUW_MngKaraokeTimingBar();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WakeNotify();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPosNotify();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFrameNotify();
    
};

