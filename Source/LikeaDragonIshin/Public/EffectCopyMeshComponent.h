#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EffectCopyMeshComponent.generated.h"

class UMeshComponent;
class UPoseableMeshComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LIKEADRAGONISHIN_API UEffectCopyMeshComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMeshComponent* ParentMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMeshComponent*> ParentMeshList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPoseableMeshComponent*> DrawPoseableMeshList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* DrawStaticMesh;
    
public:
    UEffectCopyMeshComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool IsEmptyCopyMesh();
    
    UFUNCTION(BlueprintCallable)
    int32 DrawMeshNum();
    
    UFUNCTION(BlueprintCallable)
    int32 CopyMeshNum();
    
    UFUNCTION(BlueprintCallable)
    void AddCopyMesh(UMeshComponent* Mesh);
    
};

