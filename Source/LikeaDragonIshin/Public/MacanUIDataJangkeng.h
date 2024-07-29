#pragma once
#include "CoreMinimal.h"
#include "EUIJangkengHandType.h"
#include "EUIResultOnOrOff.h"
#include "EUIState.h"
#include "MacanUIData.h"
#include "MacanUIDataJangkeng.generated.h"

UCLASS(Blueprintable)
class UMacanUIDataJangkeng : public UMacanUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_kira_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState stateUIMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIJangkengHandType m_player_hand_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState stateRock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState stateScissors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState statePaper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_player_win_count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_companion_win_count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState stateSpecial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_special_num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState stateSpecialIcon_0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState stateSpecialIcon_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState stateSpecialIcon_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState stateWin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState stateLose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState stateSpecialCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState stateWinCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_is_draw;
    
    UMacanUIDataJangkeng();

    UFUNCTION(BlueprintCallable)
    bool UseSpecial();
    
    UFUNCTION(BlueprintCallable)
    bool SetTime(float Time);
    
    UFUNCTION(BlueprintCallable)
    bool SetSpecialNum(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    bool SetPlayerWinCount(int32 Count);
    
    UFUNCTION(BlueprintCallable)
    bool SetHand(EUIJangkengHandType hand_type);
    
    UFUNCTION(BlueprintCallable)
    bool SetCompanionWinCount(int32 Count);
    
    UFUNCTION(BlueprintCallable)
    bool OpenWin();
    
    UFUNCTION(BlueprintCallable)
    bool OpenSpecial();
    
    UFUNCTION(BlueprintCallable)
    bool OpenLose();
    
    UFUNCTION(BlueprintCallable)
    bool Open(int32 special_num, bool is_draw);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyUseSpecial(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtySetTime(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtySetSpecialNum(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtySetPlayerWinCount(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtySetHand(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtySetCompanionWinCount(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyOpenSpecial(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyOpen(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyCloseWinCount(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyCloseSpecial(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyClose(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyChangeStateWin(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyChangeStateLose(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirty(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyUseSpecial();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtySetTime();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtySetSpecialNum();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtySetPlayerWinCount();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtySetHand();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtySetCompanionWinCount();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyOpenSpecial();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyOpen();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyCloseWinCount();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyCloseSpecial();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyClose();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyChangeStateWin();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyChangeStateLose();
    
    UFUNCTION(BlueprintCallable)
    bool CloseWinCount();
    
    UFUNCTION(BlueprintCallable)
    bool CloseWin();
    
    UFUNCTION(BlueprintCallable)
    bool CloseSpecial();
    
    UFUNCTION(BlueprintCallable)
    bool CloseLose();
    
    UFUNCTION(BlueprintCallable)
    bool Close();
    
};

