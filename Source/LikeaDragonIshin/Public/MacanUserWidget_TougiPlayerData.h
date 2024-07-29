#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_TougiPlayerData.generated.h"

class UMacanUserWidget_PosPlayerData;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_TougiPlayerData : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_PosPlayerData* PosPlayerData;
    
    UMacanUserWidget_TougiPlayerData();

};

