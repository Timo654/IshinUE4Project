#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DiEventHumanComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LIKEADRAGONISHIN_API UDiEventHumanComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Height;
    
    UDiEventHumanComponent(const FObjectInitializer& ObjectInitializer);

};

