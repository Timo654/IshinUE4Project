#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "CharacterLightSubsystem.generated.h"

class ACharacterLightVolume;
class ULocalLightComponent;

UCLASS(Blueprintable, Transient)
class UCharacterLightSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ACharacterLightVolume*> CharacterLightVolumes;
    
public:
    UCharacterLightSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetKeyLightComponent(ULocalLightComponent* LightComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetFillLightComponent(ULocalLightComponent* LightComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetBackLightComponent(ULocalLightComponent* LightComponent);
    
};

