#pragma once
#include "CoreMinimal.h"
#include "DiEventSequenceActor.h"
#include "HactSequenceCtrl.generated.h"

class AAuthSequenceCtrl;
class ACameraActor;
class ALevelSequenceActor;
class UAnimInstanceAuth;
class UAuthSoundCtrl;
class UChildHumanComponent;
class UDVPrC_HactPlayFrame;
class UDVPrC_HactSystemSettings;
class UDiEventParamComponent;
class UInputDeviceListener;
class ULevelSequencePlayer;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API AHactSequenceCtrl : public ADiEventSequenceActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* m_CameraMotionOutActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequencePlayer* m_CameraMotionSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACameraActor* m_pTunagiCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDVPrC_HactPlayFrame* m_PlayFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDVPrC_HactSystemSettings* m_SystemSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimInstanceAuth*> AnimInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UChildHumanComponent*> m_ChildHumanComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAuthSequenceCtrl* m_AuthSequenceCtrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAuthSoundCtrl* m_AuthSoundCtrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UDiEventParamComponent*> m_DiEventParamWithConditionTbl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* m_dbg_listener;
    
public:
    AHactSequenceCtrl(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void CompletedGame();
    
};

