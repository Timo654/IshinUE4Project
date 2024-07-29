#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_EnemyDetails.generated.h"

class UMUW_TougiEnemyDetailsBackProfile;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_EnemyDetails : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMUW_TougiEnemyDetailsBackProfile* DetailsBackProfile;
    
    UMacanUserWidget_EnemyDetails();

};

