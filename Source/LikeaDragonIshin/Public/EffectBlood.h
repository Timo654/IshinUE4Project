#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EffectBloodOneParam.h"
#include "EffectBlood.generated.h"

class UMaterialInstanceDynamic;
class UProceduralMeshComponent;
class USceneComponent;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API AEffectBlood : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UProceduralMeshComponent* DrawBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* DrawMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEffectBloodOneParam> m_blood_list;
    
public:
    AEffectBlood(const FObjectInitializer& ObjectInitializer);

};

