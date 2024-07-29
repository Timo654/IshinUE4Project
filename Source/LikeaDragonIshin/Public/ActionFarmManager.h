#pragma once
#include "CoreMinimal.h"
#include "ActionObjectBase.h"
#include "ActionFarmManager.generated.h"

class UMacanUIData_ALNougyou;
class UMacanUserWidget_ALNougyou;

UCLASS(Blueprintable)
class UActionFarmManager : public UActionObjectBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMacanUIData_ALNougyou* m_ui;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_ALNougyou* mp_cui;
    
    UActionFarmManager();

};

