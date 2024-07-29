#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Devil2Human.h"
#include "EBtlCtrlType.h"
#include "EBtlFighterKind.h"
#include "ECharacterState.h"
#include "Templates/SubclassOf.h"
#include "Fighter.generated.h"

class UAtomComponent;
class UCameraShakeBase;
class UEffectParticleGroundComponent;
class UHitCollisionComponent;
class USkeletalMeshComponent;
class USpringArmComponent;

UCLASS(Abstract, Blueprintable)
class LIKEADRAGONISHIN_API AFighter : public ADevil2Human {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterState CharacterState_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEffectParticleGroundComponent* ParticleGround_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpringArmComponent* SpringArmComponent_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBtlCtrlType CtrlTypeForDirectPut_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBtlFighterKind FighterKindForDirectPut_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UHitCollisionComponent*> JigentouCollisions_;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TempDowning_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtomComponent* AudioPlayer_;
    
    AFighter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UsingEffectTrack(const USkeletalMeshComponent* InBase, bool is_visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestCamShake(TSubclassOf<UCameraShakeBase> in_CamShake);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FRotator GetViewRotator() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCharaName() const;
    
};

