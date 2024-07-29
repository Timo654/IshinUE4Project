#pragma once
#include "CoreMinimal.h"
#include "ActionObjectBase.h"
#include "ActionPress.generated.h"

class UMacanUIDataActionPress;

UCLASS(Blueprintable)
class UActionPress : public UActionObjectBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMacanUIDataActionPress* UIData;
    
    UActionPress();

};

