#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "ReactorObject.generated.h"

class UPoseableMeshComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API AReactorObject : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPoseableMeshComponent* PoseableMesh;
    
public:
    AReactorObject(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShootBullet();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetSimulatePhysics(bool in_Simulate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetEnableAttackCollision(bool in_EnableAttackCollision);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetEffectVisibility(bool in_Visible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnComponentHit(UPrimitiveComponent* PrimComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
};

