#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ActionBase.h"
#include "Templates/SubclassOf.h"
#include "ActionFishDraw2D.generated.h"

class UAnimInstance;
class UInputDeviceListener;
class USkeletalMesh;

UCLASS(Blueprintable)
class AActionFishDraw2D : public AActionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* m_listener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath m_mesh_path;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* m_skeletal_mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> m_anim_ins;
    
public:
    AActionFishDraw2D(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateEventFish();
    
    UFUNCTION(BlueprintCallable)
    float GetRotValueYaw();
    
    UFUNCTION(BlueprintCallable)
    float GetRotValuePitch();
    
    UFUNCTION(BlueprintCallable)
    float GetFishScale();
    
    UFUNCTION(BlueprintCallable)
    FVector GetFishOffsetTrans();
    
    UFUNCTION(BlueprintCallable)
    FRotator GetFishOffsetRot();
    
    UFUNCTION(BlueprintCallable)
    USkeletalMesh* GetFishMesh();
    
    UFUNCTION(BlueprintCallable)
    TSubclassOf<UAnimInstance> GetFishAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FirstEventFish();
    
};

