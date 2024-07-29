#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EffectAfterImageComponent.generated.h"

class ADevil2Human;
class UEffectCopyMeshComponent;
class UGlobalAlphaComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LIKEADRAGONISHIN_API UEffectAfterImageComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UEffectCopyMeshComponent*> DrawMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UGlobalAlphaComponent*> GlobalAlphas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<float> NowAlphas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ADevil2Human* Human;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UGlobalAlphaComponent* GlobalAlpha;
    
public:
    UEffectAfterImageComponent(const FObjectInitializer& ObjectInitializer);

};

