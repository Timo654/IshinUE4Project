#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DiEventElementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LIKEADRAGONISHIN_API UDiEventElementComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UDiEventElementComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnElementTrigger(const FString& Guid, const FString& Type);
    
    UFUNCTION(BlueprintCallable)
    void OnElementLoop(const FString& Guid, const FString& Type);
    
};

