#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EUIMainType.h"
#include "MacanUIData.generated.h"

UCLASS(Abstract, Blueprintable)
class UMacanUIData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIMainType MainType;
    
    UMacanUIData();

    UFUNCTION(BlueprintCallable)
    bool ReflectChangesByUI();
    
    UFUNCTION(BlueprintCallable)
    bool ReflectChangesBySystem();
    
    UFUNCTION(BlueprintCallable)
    bool ReflectChangesByGame();
    
};

