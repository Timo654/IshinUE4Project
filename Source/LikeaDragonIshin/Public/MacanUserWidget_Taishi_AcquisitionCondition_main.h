#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_Taishi_AcquisitionCondition_main.generated.h"

class UMacanUserWidget_Taishi_AcquisitionCondition_detail;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_Taishi_AcquisitionCondition_main : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget* elem_bg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_Taishi_AcquisitionCondition_detail* elem_detail;
    
    UMacanUserWidget_Taishi_AcquisitionCondition_main();

    UFUNCTION(BlueprintCallable)
    void setupAfter();
    
};

