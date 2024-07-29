#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GlobalAlphaMeshCache.h"
#include "GlobalAlphaComponent.generated.h"

class UMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LIKEADRAGONISHIN_API UGlobalAlphaComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float GlobalAlpha;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMeshComponent*> ParentMeshList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGlobalAlphaMeshCache FadeMaterials;
    
public:
    UGlobalAlphaComponent(const FObjectInitializer& ObjectInitializer);

};

