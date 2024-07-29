#pragma once
#include "CoreMinimal.h"
#include "Components/ChildActorComponent.h"
#include "ChildHumanComponent.generated.h"

class UEyeHighMaterialParamComponent;
class UFaceMaterialParamComponent;
class UHairMaterialParamComponent;
class UMouthMaterialParamComponent;
class UNeckJointMaterialParamComponent;
class UPoseableMeshComponent;
class USkinMaterialParamComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LIKEADRAGONISHIN_API UChildHumanComponent : public UChildActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVisibleShoes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPoseableMeshComponent* MeshBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPoseableMeshComponent* MeshHair;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Alias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEyeHighMaterialParamComponent* EyeHighComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMouthMaterialParamComponent* MouthComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkinMaterialParamComponent* SkinComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHairMaterialParamComponent* HairComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFaceMaterialParamComponent* FaceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNeckJointMaterialParamComponent* NeckJointComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClothSodeCapsuleScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClothSusoCapsuleScale;
    
    UChildHumanComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetVisibleShoes(bool bVis);
    
    UFUNCTION(BlueprintCallable)
    void SetHeight(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetClothSusoCapsuleScale(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetClothSodeCapsuleScale(float Value);
    
};

