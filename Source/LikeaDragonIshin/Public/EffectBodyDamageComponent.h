#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BodyDamagePlayInfo.h"
#include "EBodyDamagePosition.h"
#include "EffectCopyMeshComponent.h"
#include "EffectBodyDamageComponent.generated.h"

class UMaterialInstanceDynamic;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LIKEADRAGONISHIN_API UEffectBodyDamageComponent : public UEffectCopyMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    TArray<FBodyDamagePlayInfo> Positions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Enable;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Material;
    
public:
    UEffectBodyDamageComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetPosition(EBodyDamagePosition position, float Value);
    
};

