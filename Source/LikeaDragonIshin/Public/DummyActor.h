#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DummyActor.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API ADummyActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* Root_;
    
public:
    ADummyActor(const FObjectInitializer& ObjectInitializer);

};

