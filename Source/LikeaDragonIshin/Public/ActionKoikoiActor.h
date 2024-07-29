#pragma once
#include "CoreMinimal.h"
#include "ActionBase.h"
#include "EPadButton.h"
#include "ERivalLevel.h"
#include "ActionKoikoiActor.generated.h"

class APostEffectDollyBlur;

UCLASS(Blueprintable)
class AActionKoikoiActor : public AActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isFirstPlay;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APostEffectDollyBlur* blurEffect;
    
public:
    AActionKoikoiActor(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void UpdateBlueEffect(float DeltaTime);
    
protected:
    UFUNCTION(BlueprintCallable)
    void UnBindMouseActionCallBack();
    
    UFUNCTION(BlueprintCallable)
    void StartRuleExplanation();
    
private:
    UFUNCTION(BlueprintCallable)
    void SetResultSaveData(int32 playerPoint, int32 rivalPoint, ERivalLevel rivalLv, int32 dwBet);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PrintOperationExplanation();
    
private:
    UFUNCTION(BlueprintCallable)
    void PlayKoikoiBGM();
    
protected:
    UFUNCTION(BlueprintCallable)
    void PlayBlurEffect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClickSankaku(FName Name, int32 Index, EPadButton Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClickSakazukiChoice(FName Name, int32 Index, EPadButton Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClickKoikoiChoice(FName Name, int32 Index, EPadButton Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClickFirstMenu(FName Name, int32 Index, EPadButton Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClickCustom(int32 parentNum, int32 indexNum);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClickContinueChoice(FName Name, int32 Index, EPadButton Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MouseOverSankaku(FName Name, int32 Index, FName Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MouseOverSakazukiChoice(FName Name, int32 Index, FName Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MouseOverKoikoiChoice(FName Name, int32 Index, FName Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MouseOverFirstMenu(FName Name, int32 Index, FName Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MouseOverCustom(int32 parentNum, int32 indexNum);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MouseOverContinueChoice(FName Name, int32 Index, FName Value);
    
    UFUNCTION(BlueprintCallable)
    bool IsSequenceChange();
    
private:
    UFUNCTION(BlueprintCallable)
    int32 GetPlayerTen();
    
protected:
    UFUNCTION(BlueprintCallable)
    void FinishGameUpdate();
    
    UFUNCTION(BlueprintCallable)
    void FinishGame();
    
    UFUNCTION(BlueprintCallable)
    bool ChkPause();
    
private:
    UFUNCTION(BlueprintCallable)
    bool CheckHasan();
    
protected:
    UFUNCTION(BlueprintCallable)
    void BindMouseActionCallBackSankaku();
    
    UFUNCTION(BlueprintCallable)
    void BindMouseActionCallBackSakazukiChoice();
    
    UFUNCTION(BlueprintCallable)
    void BindMouseActionCallBackKoikoiChoice();
    
    UFUNCTION(BlueprintCallable)
    void BindMouseActionCallBackFirstMenu();
    
    UFUNCTION(BlueprintCallable)
    void BindMouseActionCallBackContinueChoice();
    
private:
    UFUNCTION(BlueprintCallable)
    void BGMStop();
    
    UFUNCTION(BlueprintCallable)
    void BGMReset();
    
protected:
    UFUNCTION(BlueprintCallable)
    void AttributeExplanation();
    
};

