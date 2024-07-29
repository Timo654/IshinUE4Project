#pragma once
#include "CoreMinimal.h"
#include "EUIMainType.h"
#include "MacanUserWidget.h"
#include "UIBtnGuideItemData.h"
#include "MacanUserWidget_BtnGuideSimpleH.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_BtnGuideSimpleH : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isIgnoreUpdateNotice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIMainType myOwnerMainType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isFromLeftToRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUIBtnGuideItemData> defaultItemDataArray;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUIBtnGuideItemData> myItemDataArray;
    
public:
    UMacanUserWidget_BtnGuideSimpleH();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool UpdateBtnGuideImplBP();
    
public:
    UFUNCTION(BlueprintCallable)
    bool UpdateBtnGuide(UPARAM(Ref) TArray<FUIBtnGuideItemData>& inItemDataArray);
    
};

