#pragma once
#include "CoreMinimal.h"
#include "ChohanUserStatusInfo.h"
#include "MacanUserWidget.h"
#include "ChohanUserStatusWidget.generated.h"

class UCanvas;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UChohanUserStatusWidget : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFinishedAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsMoveRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* nameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget* KiryuEff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCanvas* PanelBase;
    
    UChohanUserStatusWidget();

    UFUNCTION(BlueprintCallable)
    void SetData(FChohanUserStatusInfo Info);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnim();
    
    UFUNCTION(BlueprintCallable)
    void FinishAnimation();
    
};

