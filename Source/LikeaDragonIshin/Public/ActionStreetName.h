#pragma once
#include "CoreMinimal.h"
#include "ActionObjectBase.h"
#include "ActionStreetName.generated.h"

class UMacanUIDataMiniMapAddress;

UCLASS(Blueprintable)
class UActionStreetName : public UActionObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMacanUIDataMiniMapAddress* UIData;
    
public:
    UActionStreetName();

};

