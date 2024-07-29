#pragma once
#include "CoreMinimal.h"
#include "MacanUIData.h"
#include "SaveDataInfo.h"
#include "MacanUIDataPauseSave.generated.h"

UCLASS(Blueprintable)
class UMacanUIDataPauseSave : public UMacanUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSaveDataInfo> SaveDataInfoArray;
    
    UMacanUIDataPauseSave();

};

