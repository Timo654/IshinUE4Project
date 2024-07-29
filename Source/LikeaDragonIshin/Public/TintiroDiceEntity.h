#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TintiroDiceEntity.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable)
class ATintiroDiceEntity : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* DiceMesh;
    
    ATintiroDiceEntity(const FObjectInitializer& ObjectInitializer);

};

