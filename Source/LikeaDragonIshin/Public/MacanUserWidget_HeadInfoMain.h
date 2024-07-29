#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "UIHeadInfoData.h"
#include "MacanUserWidget_HeadInfoMain.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_HeadInfoMain : public UMacanUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FUIHeadInfoData> arrayHeadInfoData;
    
public:
    UMacanUserWidget_HeadInfoMain();

protected:
    UFUNCTION(BlueprintCallable)
    bool IsInvalid(int32 inId);
    
};

