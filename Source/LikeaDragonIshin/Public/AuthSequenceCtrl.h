#pragma once
#include "CoreMinimal.h"
#include "DiEventSequenceActor.h"
#include "UAuthHumanCaption.h"
#include "AuthSequenceCtrl.generated.h"

class ALevelSequenceActor;
class UAuthSoundCtrl;
class UChildHumanComponent;
class UDVPrC_PlayFrame;
class UInputDeviceListener;
class ULevelSequencePlayer;
class UTexture;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API AAuthSequenceCtrl : public ADiEventSequenceActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUAuthHumanCaption> m_HumanCaption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAuthSoundCtrl* m_InternalSoundCtrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAuthSoundCtrl* m_ExternalSoundCtrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDVPrC_PlayFrame* m_PlayFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UChildHumanComponent*> m_ChildHumanComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* m_OutActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequencePlayer* m_CurrentCutSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* m_dbg_listener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture*> m_force_mip_textures;
    
public:
    AAuthSequenceCtrl(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void CompletedProp();
    
    UFUNCTION(BlueprintCallable)
    void CompletedMain();
    
    UFUNCTION(BlueprintCallable)
    void CompletedEffect();
    
    UFUNCTION(BlueprintCallable)
    void CompletedChara();
    
};

