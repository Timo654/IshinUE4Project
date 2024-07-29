#pragma once
#include "CoreMinimal.h"
#include "ActionObjectBase.h"
#include "ActionShogiPresent.generated.h"

class UInputDeviceListener;
class UMacanUIDataShogiResult;

UCLASS(Blueprintable)
class UActionShogiPresent : public UActionObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* m_plistener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMacanUIDataShogiResult* UIData;
    
public:
    UActionShogiPresent();

};

