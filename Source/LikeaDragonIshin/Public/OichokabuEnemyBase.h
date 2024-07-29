#pragma once
#include "CoreMinimal.h"
#include "OichokabuPlayerBase.h"
#include "OichokabuEnemyBase.generated.h"

class AKoikoiCard;

UCLASS(Blueprintable)
class AOichokabuEnemyBase : public AOichokabuPlayerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AKoikoiCard*> firstSelectableCard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FirstSelectWaitTime;
    
public:
    AOichokabuEnemyBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateWaitTime(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void FirstCardChoiceThink();
    
};

