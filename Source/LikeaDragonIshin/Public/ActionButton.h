#pragma once
#include "CoreMinimal.h"
#include "ActionObjectBase.h"
#include "ActionButton.generated.h"

class UMacanUIDataActionButton;

UCLASS(Blueprintable)
class UActionButton : public UActionObjectBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMacanUIDataActionButton* UIData;
    
    UActionButton();

};

