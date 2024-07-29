#pragma once
#include "CoreMinimal.h"
#include "ActionObjectBase.h"
#include "ActionBlacksmith.generated.h"

class UInputDeviceListener;
class UMacanUIDataKajiya;
class UMacanUserWidget_kajiya;
class UUIManager;
class UWorld;

UCLASS(Blueprintable)
class UActionBlacksmith : public UActionObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorld* pWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* pListener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMacanUIDataKajiya* uiKajiyaMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIManager* pUIManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_kajiya* pUIWidget;
    
public:
    UActionBlacksmith();

};

