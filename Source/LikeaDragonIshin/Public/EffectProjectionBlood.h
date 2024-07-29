#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EffectProjectionBlood.generated.h"

class UMaterialInstanceDynamic;
class UProceduralMeshComponent;
class USceneComponent;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API AEffectProjectionBlood : public AActor {
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
    bool bAutoDelete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisplayArea;
    
public:
    AEffectProjectionBlood(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetDisplayArea(bool display_area);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoDelete(bool auto_delete);
    
};

