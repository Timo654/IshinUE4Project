#pragma once
#include "CoreMinimal.h"
#include "ActionObjectBase.h"
#include "ActionShogiEnemySelect.generated.h"

class UInputDeviceListener;
class UMacanUIDataShogiEnemySelect;

UCLASS(Blueprintable)
class UActionShogiEnemySelect : public UActionObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* m_plistener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMacanUIDataShogiEnemySelect* UIData;
    
public:
    UActionShogiEnemySelect();

};

