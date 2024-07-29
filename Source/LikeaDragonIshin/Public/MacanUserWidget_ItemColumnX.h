#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_ItemColumnX.generated.h"

class UMacanScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_ItemColumnX : public UMacanUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanScrollBox* MacanScrollBox_List;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_scrollbarHideCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_currentItemLength;
    
public:
    UMacanUserWidget_ItemColumnX();

protected:
    UFUNCTION(BlueprintCallable)
    void SetTempHideScrollBar(int32 itemLength, int32 hideCount);
    
};

