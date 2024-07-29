#pragma once
#include "CoreMinimal.h"
#include "ActionBase.h"
#include "ActionMovieManager.generated.h"

class UManaComponent;
class UManaTexture;
class UMaterial;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API AActionMovieManager : public AActionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UManaComponent* Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UManaTexture* Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterial* Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MaterialInstance;
    
public:
    AActionMovieManager(const FObjectInitializer& ObjectInitializer);

};

