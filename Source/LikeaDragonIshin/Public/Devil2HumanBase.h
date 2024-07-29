#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Character.h"
#include "TextureChange.h"
#include "WandererAliasList.h"
#include "Devil2HumanBase.generated.h"

class AActor;
class UHumanSoundComponent;
class UPoseableMeshComponent;
class USkeletalMeshComponent;
class UTexture;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API ADevil2HumanBase : public ACharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bEnableHeight;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Alias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWandererAliasList AliasPulldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MeshHash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* MeshFace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHumanSoundComponent* SoundComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVisibleShoesReq;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLinearColor BodyColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLinearColor LegColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLinearColor HairColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture* TextureSkin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture* TextureNeck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTextureChange TexChangeFace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTextureChange> TexChangeBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTextureChange> TexChangeLeg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTextureChange> TexChangeHairItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTextureChange> TexChangeBodyItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTextureChange> TexChangeLegItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTextureChange> TexChangeHaori;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture*> m_force_mip_textures;
    
public:
    ADevil2HumanBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetVisibleShoes(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibleModel(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetParamater(const FName AliasName);
    
    UFUNCTION(BlueprintCallable)
    void SetHeightParam(int32 _Height);
    
    UFUNCTION(BlueprintCallable)
    void SetDLCKiryuSaya(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimation(UClass* NewClass);
    
    UFUNCTION(BlueprintCallable)
    void ResetScale();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasLoadCompleted() const;
    
    UFUNCTION(BlueprintCallable)
    UPoseableMeshComponent* GetHeadMesh();
    
    UFUNCTION(BlueprintCallable)
    UPoseableMeshComponent* GetHairMesh();
    
    UFUNCTION(BlueprintCallable)
    USkeletalMeshComponent* GetBodyMesh();
    
};

