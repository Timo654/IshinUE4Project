#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_MngKaraokeIcon.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_MngKaraokeIcon : public UMacanUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* m_pPushAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* m_pPushStayAnim;
    
public:
    UMacanUserWidget_MngKaraokeIcon();

    UFUNCTION(BlueprintCallable)
    void SetPushStayAnimation(UWidgetAnimation* pushStayAnim);
    
    UFUNCTION(BlueprintCallable)
    void SetPushAnimation(UWidgetAnimation* pushAnim);
    
    UFUNCTION(BlueprintCallable)
    void PlayInOutAnimation(bool isIn);
    
    UFUNCTION(BlueprintCallable)
    void PlayIconAnimation(bool isRoll);
    
};

