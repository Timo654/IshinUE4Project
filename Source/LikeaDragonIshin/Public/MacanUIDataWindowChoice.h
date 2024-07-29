#pragma once
#include "CoreMinimal.h"
#include "EUIResultOnOrOff.h"
#include "EUIState.h"
#include "MacanUIData.h"
#include "WindowChoiceItemInfo.h"
#include "MacanUIDataWindowChoice.generated.h"

UCLASS(Blueprintable)
class UMacanUIDataWindowChoice : public UMacanUIData {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUIDataWindowChoiceOpenWindowEnd);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUIDataWindowChoiceDelegatePressedEnd);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUIDataWindowChoiceCloseWindowEnd);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState windowUIState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FWindowChoiceItemInfo> itemList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 selectItemIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText windowMessage;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataWindowChoiceOpenWindowEnd OnDelegateOpenWindowEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataWindowChoiceCloseWindowEnd OnDelegateCloseWindowEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIDataWindowChoiceDelegatePressedEnd OnDelegatePressedEnd;
    
    UMacanUIDataWindowChoice();

    UFUNCTION(BlueprintCallable)
    void SetSelectItemIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SetItemList(UPARAM(Ref) TArray<FWindowChoiceItemInfo>& inInfoArray);
    
    UFUNCTION(BlueprintCallable)
    void SetEnterItemIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void ResetEnterItem();
    
    UFUNCTION(BlueprintCallable)
    bool OpenWindow(bool isQuick, bool NewIsBgBlur);
    
    UFUNCTION(BlueprintCallable)
    bool IsOpeningWindow(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsNowEnter(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyWindowState(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtySelectIndex(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyItemList(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyEnter(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirty(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsClosingWindow(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsBlinkingEnter(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsBgBlur(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    void DelBfOpeningWindow();
    
    UFUNCTION(BlueprintCallable)
    void DelBfEnableBgBlur();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyWindowState();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtySelectIndex();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyItemList();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyEnter();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirty();
    
    UFUNCTION(BlueprintCallable)
    void DelBfClosingWindow();
    
    UFUNCTION(BlueprintCallable)
    void DelBfBlinkingEnter();
    
    UFUNCTION(BlueprintCallable)
    bool CloseWindow(bool isQuick);
    
    UFUNCTION(BlueprintCallable)
    void ClearItemList();
    
    UFUNCTION(BlueprintCallable)
    void AddItemList(FWindowChoiceItemInfo& inInfo);
    
};

