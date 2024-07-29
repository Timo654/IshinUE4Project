#pragma once
#include "CoreMinimal.h"
#include "ActionObjectBase.h"
#include "ActionUltimateManager.generated.h"

class UMacanUIInfo;

UCLASS(Blueprintable)
class UActionUltimateManager : public UActionObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMacanUIInfo* m_ui_info;
    
public:
    UActionUltimateManager();

};

