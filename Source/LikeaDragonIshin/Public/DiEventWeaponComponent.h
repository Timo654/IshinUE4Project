#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EWeaponOfsTypes.h"
#include "DiEventWeaponComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LIKEADRAGONISHIN_API UDiEventWeaponComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponOfsTypes OfsType;
    
    UDiEventWeaponComponent(const FObjectInitializer& ObjectInitializer);

};

