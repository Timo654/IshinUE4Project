#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TintiroManager.generated.h"

class ATintiroDice;
class ATintiroDiceEntity;
class ATintiroEnemy;
class ATintiroEntity;
class ATintiroKiryu;
class ATintiroMessage;
class ATintiroSound;
class UInputDeviceListener;
class UMacanUIDataTintiro;
class UUIManager;

UCLASS(Blueprintable)
class ATintiroManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* pListener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATintiroDice* mc_Dice;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ATintiroDiceEntity* m_pDiceEntity[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATintiroKiryu* mp_Kiryu;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ATintiroEnemy* mp_Enemy[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATintiroMessage* mc_Message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATintiroSound* mc_Sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATintiroEntity* mp_Parent;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ATintiroEntity* mp_Child[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMacanUIDataTintiro* UIData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIManager* pUIManager;
    
public:
    ATintiroManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetUiData(UMacanUIDataTintiro* Data);
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
    UFUNCTION(BlueprintCallable)
    void ExecAfterCamera();
    
    UFUNCTION(BlueprintCallable)
    void Draw2D();
    
    UFUNCTION(BlueprintCallable)
    void Draw();
    
};

