#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DiEventAnimActor.generated.h"

class UDiEventElementPlayComponent;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API ADiEventAnimActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDiEventElementPlayComponent* m_ElementPlayComponent;
    
public:
    ADiEventAnimActor(const FObjectInitializer& ObjectInitializer);

};

