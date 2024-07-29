#pragma once
#include "CoreMinimal.h"
#include "ActionObjectBase.h"
#include "Templates/SubclassOf.h"
#include "ActionTalkBoxPopupManager.generated.h"

class UMacanUserWidget_TalkBoxPopupD;

UCLASS(Blueprintable)
class UActionTalkBoxPopupManager : public UActionObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMacanUserWidget_TalkBoxPopupD> widgetData;
    
public:
    UActionTalkBoxPopupManager();

};

