#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "KoikoiPlayerController.generated.h"

UCLASS(Blueprintable)
class AKoikoiPlayerController : public APlayerController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText playerName;
    
    AKoikoiPlayerController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetName() const;
    
};

