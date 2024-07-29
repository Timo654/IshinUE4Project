#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_Itemget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_Itemget : public UMacanUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUIItemGetOpenWindowEnd);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUIItemGetCloseWindowEnd);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIItemGetOpenWindowEnd OnDelegateOpenWindowEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIItemGetCloseWindowEnd OnDelegateCloseWindowEnd;
    
    UMacanUserWidget_Itemget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenWindow();
    
};

