#pragma once
#include "CoreMinimal.h"
#include "ActionObjectBase.h"
#include "ActionItemGetInfo.generated.h"

class UMacanUIDataItemGet;

UCLASS(Blueprintable)
class UActionItemGetInfo : public UActionObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMacanUIDataItemGet* uiItemGet;
    
public:
    UActionItemGetInfo();

};

