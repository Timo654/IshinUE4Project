#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_ScrollArrows.generated.h"

class UMacanScrollBox;
class UMacanUserWidget_ScrollArrow;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_ScrollArrows : public UMacanUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_ScrollArrow* Arrow_Top;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_ScrollArrow* Arrow_Bottom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMacanScrollBox* m_pTargetScrollBox;
    
public:
    UMacanUserWidget_ScrollArrows();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateDisp(bool isDispTop, bool isDispBottom);
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateArrowsFromScrollBox(bool forcedInvisible, const UMacanScrollBox* inScrollBox);
    
    UFUNCTION(BlueprintCallable)
    bool IsDispArrowTop();
    
    UFUNCTION(BlueprintCallable)
    bool IsDispArrowBottom();
    
    UFUNCTION(BlueprintCallable)
    bool IsDispArrow();
    
};

