#pragma once
#include "CoreMinimal.h"
#include "ActionObjectBase.h"
#include "CostumeData.h"
#include "ActionCostumeMenu.generated.h"

class UDataTable;
class UInputDeviceListener;

UCLASS(Blueprintable)
class UActionCostumeMenu : public UActionObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* listener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* assignList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCostumeData> dataList;
    
public:
    UActionCostumeMenu();

};

