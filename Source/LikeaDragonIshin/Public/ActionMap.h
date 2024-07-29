#pragma once
#include "CoreMinimal.h"
#include "ActionObjectBase.h"
#include "ActionMap.generated.h"

class UInputDeviceListener;
class UMacanUIDataMiniMapAddress;
class Uaction_map_manager;

UCLASS(Blueprintable)
class UActionMap : public UActionObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    Uaction_map_manager* m_pManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* m_plistener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMacanUIDataMiniMapAddress* UIData;
    
public:
    UActionMap();

};

