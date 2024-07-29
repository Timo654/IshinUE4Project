#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EChohanButtonState.h"
#include "EChohanButtonType.h"
#include "EChohanScenarioFlagType.h"
#include "ChohanManager.generated.h"

class UInputDeviceListener;

UCLASS(Blueprintable)
class AChohanManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsGameFinishFlg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* listener;
    
    AChohanManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool Timer(float nowTimer, float lastTimer, float Time);
    
    UFUNCTION(BlueprintCallable)
    void SetWinFlag(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetLoseFlag(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetFavorablity(int32 favo);
    
    UFUNCTION(BlueprintCallable)
    bool ScenarioSetFlag(EChohanScenarioFlagType Type, bool flag);
    
    UFUNCTION(BlueprintCallable)
    bool ScenarioCmpFlag(EChohanScenarioFlagType Type, bool flag);
    
    UFUNCTION(BlueprintCallable)
    void OperationPauseOn();
    
    UFUNCTION(BlueprintCallable)
    bool LoadSESound();
    
    UFUNCTION(BlueprintCallable)
    bool IsPADV();
    
    UFUNCTION(BlueprintCallable)
    bool IsNajimiGame();
    
    UFUNCTION(BlueprintCallable)
    bool IsLoadFinishSound();
    
    UFUNCTION(BlueprintCallable)
    bool IsDebugWin();
    
    UFUNCTION(BlueprintCallable)
    bool IsDebugIkasama();
    
    UFUNCTION(BlueprintCallable)
    FVector GetTuboFuriPos();
    
    UFUNCTION(BlueprintCallable)
    FVector GetTuboFuriOfs();
    
    UFUNCTION(BlueprintCallable)
    float GetTuboFuriHOffset();
    
    UFUNCTION(BlueprintCallable)
    float GetTuboFuriH();
    
    UFUNCTION(BlueprintCallable)
    FVector GetTuboFuriBase();
    
    UFUNCTION(BlueprintCallable)
    FVector GetSetJarPos();
    
    UFUNCTION(BlueprintCallable)
    FVector GetSetJarCamPos();
    
    UFUNCTION(BlueprintCallable)
    float GetPSideLen();
    
    UFUNCTION(BlueprintCallable)
    int32 GetPlayNum();
    
    UFUNCTION(BlueprintCallable)
    FVector GetNPCPos(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    int32 GetMoney();
    
    UFUNCTION(BlueprintCallable)
    FVector GetMihariPos();
    
    UFUNCTION(BlueprintCallable)
    FVector GetKiryuPos();
    
    UFUNCTION(BlueprintCallable)
    FVector GetHarukaPos();
    
    UFUNCTION(BlueprintCallable)
    int32 GetGameNum();
    
    UFUNCTION(BlueprintCallable)
    float GetFrontLen();
    
    UFUNCTION(BlueprintCallable)
    FVector GetFieldCenter();
    
    UFUNCTION(BlueprintCallable)
    int32 GetFavorability();
    
    UFUNCTION(BlueprintCallable)
    FVector GetDiceCenterPos();
    
    UFUNCTION(BlueprintCallable)
    int32 GetChohanAddMoney();
    
    UFUNCTION(BlueprintCallable)
    FVector GetBakutoPos();
    
    UFUNCTION(BlueprintCallable)
    void FinishGame();
    
    UFUNCTION(BlueprintCallable)
    void FadeSet(float Time, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void EnablePause();
    
    UFUNCTION(BlueprintCallable)
    void DisablePause();
    
    UFUNCTION(BlueprintCallable)
    void ChangeBGM(bool isDefault);
    
    UFUNCTION(BlueprintCallable)
    EChohanButtonState ButtonExec(float startTimer, float stayTimer, float nowTimer, float lastTimer, EChohanButtonType button_type, UInputDeviceListener* pPad);
    
    UFUNCTION(BlueprintCallable)
    void AddWinPoint(int32 NewAddMoney);
    
    UFUNCTION(BlueprintCallable)
    void AddTokuPoint();
    
    UFUNCTION(BlueprintCallable)
    void AddPlayNum(int32 Add);
    
    UFUNCTION(BlueprintCallable)
    void AddMoneyOne(int32 Add);
    
    UFUNCTION(BlueprintCallable)
    void AddMoney(int32 Add, int32 add2);
    
    UFUNCTION(BlueprintCallable)
    void AddGameNum();
    
};

