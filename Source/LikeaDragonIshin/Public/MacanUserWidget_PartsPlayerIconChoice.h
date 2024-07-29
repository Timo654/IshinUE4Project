#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_PartsPlayerIconChoice.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_PartsPlayerIconChoice : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFinishDecide;
    
    UMacanUserWidget_PartsPlayerIconChoice();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFaceTextureEvent(const UTexture2D* faceTex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayNormalEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayFocuesdEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayDecideEvent();
    
};

