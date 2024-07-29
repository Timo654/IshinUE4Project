#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DramaScannerInfo.h"
#include "EFacePatternType.h"
#include "EFaceTargetType.h"
#include "FacePatternAnimWeight.h"
#include "FaceTargetAnimWeight.h"
#include "FaceTargetPatternOffset.h"
#include "FaceTargetSkeletonInfo.h"
#include "FaceTargetWrinkleOffset.h"
#include "FaceTarget.generated.h"

class UAnimInstanceAuth;
class UAnimSequence;
class USkeleton;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API UFaceTarget : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFacePatternType FacePatternType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFaceTargetAnimWeight FaceTargetWeights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFacePatternAnimWeight FacePatternWeights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OverWriteFaceTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UsingMotionFaceTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool UsingMotionFaceTargetAddParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MotionFaceTargetToParamWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IgnoreFaceTargetWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IgnoreFacePatternWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseAutoWrinkle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseBlink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DramaScannerFile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DramaScannerTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DramaScannerFadeInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeleton* Skeleton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequence*> FaceTargetAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequence*> FacePatternAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FaceBlend;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFaceTargetSkeletonInfo m_skeleton_info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFaceTargetType, float> m_face_target_add_weights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFacePatternType, float> m_face_pattern_add_weights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFaceTargetWrinkleOffset m_wrinkle_offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFaceTargetPatternOffset m_pattern_offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FDramaScannerInfo> m_drama_scanner_info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimInstanceAuth* ParentAnimInstance;
    
public:
    UFaceTarget();

    UFUNCTION(BlueprintCallable)
    void UnLoadDramaScanner(const FName& Name);
    
    UFUNCTION(BlueprintCallable)
    void StopDramaScanner();
    
    UFUNCTION(BlueprintCallable)
    void SetFaceTargetWeightAdd(EFaceTargetType Type, float Weight);
    
    UFUNCTION(BlueprintCallable)
    void SetFaceTargetWeight(EFaceTargetType Type, float Weight);
    
    UFUNCTION(BlueprintCallable)
    void SetFacePatternWeightAdd(EFacePatternType Type, float Weight);
    
    UFUNCTION(BlueprintCallable)
    void SetFacePatternWeight(EFacePatternType Type, float Weight);
    
    UFUNCTION(BlueprintCallable)
    void SetFacePattern(EFacePatternType Type, bool is_reset);
    
    UFUNCTION(BlueprintCallable)
    void SetDramaScannerTime(float Time, float fade_in_time);
    
    UFUNCTION(BlueprintCallable)
    void PlayDramaScanner(const FName& Name);
    
    UFUNCTION(BlueprintCallable)
    void LoadDramaScanner(const FName& Name);
    
    UFUNCTION(BlueprintCallable)
    bool IsLoadedDramaScanner(const FName& Name);
    
    UFUNCTION(BlueprintCallable)
    void EnableEyeClose(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void EnableEyeBlink(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void EnableEasyTalk(bool Enable);
    
};

