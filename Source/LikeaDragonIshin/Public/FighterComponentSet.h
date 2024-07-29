#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FighterComponentSet.generated.h"

class ADevil2Human;
class UBattleSoundComponent;
class UBattleTargetDecideComponent;
class UCapsuleComponent;
class UFighterController;
class UHitCollisionComponent;
class UShapeComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LIKEADRAGONISHIN_API UFighterComponentSet : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBattleSoundComponent* m_BattleSoundComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UHitCollisionComponent*> m_HitCollisions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UShapeComponent*> m_ExtendBlockCollisions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* m_pSyncCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBattleTargetDecideComponent* m_TargetDecide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFighterController* m_Controller;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ADevil2Human* m_OwnerHuman;
    
public:
    UFighterComponentSet(const FObjectInitializer& ObjectInitializer);

};

