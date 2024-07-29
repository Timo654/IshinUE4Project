#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "Animation/InputScaleBias.h"
#include "AnimInstancePostProcess.generated.h"

class UFaceLook;
class UFaceTarget;
class UHandPattern;
class UJaunt;
class UKawaiiPhysicsParam;
class ULimbSolver;
class UMaterialInstanceDynamic;
class USkeletalMesh;
class UWaistTwist;

UCLASS(Blueprintable, NonTransient)
class LIKEADRAGONISHIN_API UAnimInstancePostProcess : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFaceTarget* FaceTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float WrinkleOffsetWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHandPattern* HandPattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFaceLook* FaceLook;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UJaunt* Jaunt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULimbSolver* LimbSolver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWaistTwist* WaistTwist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKawaiiPhysicsParam* KawaiiPhysicsParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClothTeleportDistanceAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClothTeleportRotationAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClothForceTeleportAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClothDisableAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClothHakamaLDisableAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClothHakamaRDisableAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClothHakamaLBlendAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClothHakamaRBlendAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClothSodeLDisableAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClothSodeRDisableAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClothSodeLBlendAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClothSodeRBlendAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClothSodeLimitAngleScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClothSusoDisableAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClothSusoBlendAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnimAlphaInputType ClothBlendType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ClothForceExecCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableSayaCollision;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* FaceMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* EyeMaterial;
    
public:
    UAnimInstancePostProcess();

    UFUNCTION(BlueprintCallable)
    void SetWrinkleOffsetWeight(float Weight);
    
    UFUNCTION(BlueprintCallable)
    void SetWaistTwist(UWaistTwist* waist);
    
    UFUNCTION(BlueprintCallable)
    void SetLimbSolver(ULimbSolver* NewLimbSolver);
    
    UFUNCTION(BlueprintCallable)
    void SetKawaiiPhysicsParam(UKawaiiPhysicsParam* Param);
    
    UFUNCTION(BlueprintCallable)
    void SetJaunt(UJaunt* NewJaunt);
    
    UFUNCTION(BlueprintCallable)
    void SetHandPatternLockBlend(float Blend);
    
    UFUNCTION(BlueprintCallable)
    void SetHandPatternBlend(float Blend);
    
    UFUNCTION(BlueprintCallable)
    void SetHandPattern(UHandPattern* Pattern);
    
    UFUNCTION(BlueprintCallable)
    void SetFaceTarget(UFaceTarget* Target);
    
    UFUNCTION(BlueprintCallable)
    void SetFaceLook(UFaceLook* Look);
    
    UFUNCTION(BlueprintCallable)
    void SetFaceBlend(float Blend);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableSayaCollision(bool disable);
    
    UFUNCTION(BlueprintCallable)
    void SetClothTeleportRotation(float Rotation);
    
    UFUNCTION(BlueprintCallable)
    void SetClothTeleportDistance(float Distance);
    
    UFUNCTION(BlueprintCallable)
    void SetClothSusoDisable(bool is_disable);
    
    UFUNCTION(BlueprintCallable)
    void SetClothSusoBlend(float Blend);
    
    UFUNCTION(BlueprintCallable)
    void SetClothSodeRBlend(float Blend);
    
    UFUNCTION(BlueprintCallable)
    void SetClothSodeLimitAngleScale(float Scale);
    
    UFUNCTION(BlueprintCallable)
    void SetClothSodeLBlend(float Blend);
    
    UFUNCTION(BlueprintCallable)
    void SetClothSodeDisable(bool is_disable);
    
    UFUNCTION(BlueprintCallable)
    void SetClothSodeBlend(float Blend);
    
    UFUNCTION(BlueprintCallable)
    void SetClothHakamaRBlend(float Blend);
    
    UFUNCTION(BlueprintCallable)
    void SetClothHakamaLBlend(float Blend);
    
    UFUNCTION(BlueprintCallable)
    void SetClothHakamaDisable(bool is_disable);
    
    UFUNCTION(BlueprintCallable)
    void SetClothHakamaBlend(float Blend);
    
    UFUNCTION(BlueprintCallable)
    void SetClothForceTeleport(bool is_teleport);
    
    UFUNCTION(BlueprintCallable)
    void SetClothForceExecCount(int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void SetClothDisable(bool is_disable);
    
    UFUNCTION(BlueprintCallable)
    void SetClothBlendType(EAnimAlphaInputType Type);
    
    UFUNCTION(BlueprintCallable)
    void SetClothBlend(float Blend);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULimbSolver* GetLimbSolver() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UKawaiiPhysicsParam* GetKawaiiPhysicsParam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UJaunt* GetJaunt() const;
    
    UFUNCTION(BlueprintCallable)
    float GetHandPatternLockBlend();
    
    UFUNCTION(BlueprintCallable)
    float GetHandPatternBlend();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHandPattern* GetHandPattern() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFaceTarget* GetFaceTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFaceLook* GetFaceLook() const;
    
    UFUNCTION(BlueprintCallable)
    float GetFaceBlend();
    
    UFUNCTION(BlueprintCallable)
    float GetClothSusoBlend();
    
    UFUNCTION(BlueprintCallable)
    float GetClothSodeRBlend();
    
    UFUNCTION(BlueprintCallable)
    float GetClothSodeLBlend();
    
    UFUNCTION(BlueprintCallable)
    float GetClothHakamaRBlend();
    
    UFUNCTION(BlueprintCallable)
    float GetClothHakamaLBlend();
    
    UFUNCTION(BlueprintCallable)
    EAnimAlphaInputType GetClothBlendType();
    
    UFUNCTION(BlueprintCallable)
    float GetClothBlend();
    
};

