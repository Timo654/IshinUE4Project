#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "AnimInstanceReactor.generated.h"

class UJaunt;
class USkeletalMesh;

UCLASS(Blueprintable, NonTransient)
class LIKEADRAGONISHIN_API UAnimInstanceReactor : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UJaunt* Jaunt;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SkeletalMesh;
    
public:
    UAnimInstanceReactor();

    UFUNCTION(BlueprintCallable)
    void SetJaunt(UJaunt* NewJaunt);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UJaunt* GetJaunt() const;
    
};

