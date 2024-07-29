#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget_TaishiElemBase.h"
#include "_BtnWidget.h"
#include "MacanUserWidget_TaishiElemBtnGuide.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_TaishiElemBtnGuide : public UMacanUserWidget_TaishiElemBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<F_BtnWidget> btn_array;
    
    UMacanUserWidget_TaishiElemBtnGuide();

};

