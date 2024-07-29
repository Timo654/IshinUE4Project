#pragma once
#include "CoreMinimal.h"
#include "TintiroEntity.h"
#include "TintiroEnemy.generated.h"

UCLASS(Blueprintable)
class ATintiroEnemy : public ATintiroEntity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATintiroEntity* m_after_throw_entity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATintiroEntity* m_before_throw_entity;
    
    ATintiroEnemy(const FObjectInitializer& ObjectInitializer);

};

