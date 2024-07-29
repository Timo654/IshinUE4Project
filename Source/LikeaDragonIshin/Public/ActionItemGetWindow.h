#pragma once
#include "CoreMinimal.h"
#include "ActionObjectBase.h"
#include "ActionItemGetWindow.generated.h"

class UMacanUIDataWindowItemGet;

UCLASS(Blueprintable)
class UActionItemGetWindow : public UActionObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMacanUIDataWindowItemGet* uiItemGetWindow;
    
public:
    UActionItemGetWindow();

};

