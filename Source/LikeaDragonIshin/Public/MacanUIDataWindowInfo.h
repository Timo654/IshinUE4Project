#pragma once
#include "CoreMinimal.h"
#include "EBtnGuideFlag.h"
#include "EUIAnimType.h"
#include "EUIResultOnOrOff.h"
#include "EUIState.h"
#include "MacanUIData.h"
#include "MacanUIDataWindowInfo.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class UMacanUIDataWindowInfo : public UMacanUIData {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUIDataWindowInfoPreviousPageEnd);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUIDataWindowInfoOpenWindowEnd);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUIDataWindowInfoNextPageEnd);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUIDataWindowInfoCloseWindowEnd);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIState windowUIState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIAnimType animType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText titleFText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText contentFText01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText contentFText02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText contentFText03;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> contentUTexture01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> contentUTexture02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> contentUTexture03;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isVisibleWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 currentPage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<EBtnGuideFlag> btnGuideFlag;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataWindowInfoOpenWindowEnd OnDelegateOpenWindowEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataWindowInfoCloseWindowEnd OnDelegateCloseWindowEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataWindowInfoNextPageEnd OnDelegateNextPageEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataWindowInfoPreviousPageEnd OnDelegatePreviousPageEnd;
    
    UMacanUIDataWindowInfo();

    UFUNCTION(BlueprintCallable)
    void Unload();
    
    UFUNCTION(BlueprintCallable)
    void SetVisible(bool IsVisible);
    
    UFUNCTION(BlueprintCallable)
    bool SetTitle();
    
    UFUNCTION(BlueprintCallable)
    bool SetTipsID(const FString& ID);
    
    UFUNCTION(BlueprintCallable)
    bool SetPageIndex(int32 page);
    
    UFUNCTION(BlueprintCallable)
    bool SetMainContent();
    
    UFUNCTION(BlueprintCallable)
    bool SetGuideText();
    
    UFUNCTION(BlueprintCallable)
    bool SetChangePage(int32 page);
    
    UFUNCTION(BlueprintCallable)
    bool SetChangeContent();
    
    UFUNCTION(BlueprintCallable)
    bool SetCancelButton();
    
    UFUNCTION(BlueprintCallable)
    bool PreviousPageAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool OpenWindow(bool isManual);
    
    UFUNCTION(BlueprintCallable)
    bool NextPageAnimation();
    
    UFUNCTION(BlueprintCallable)
    void Load();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPrepared() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsPlayingPrevious(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsPlayingNext(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsOpeningWindow(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyWindow(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyTitleText(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyTipsID(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyPagePrevious(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyPageNext(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyPageIndex(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyPageChange(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyMainContent(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyGuideText(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirty(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsClosingWindow(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalPageNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTitleName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLayoutIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetContentText(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetContentSoftImage(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetContentImage(int32 Index) const;
    
    UFUNCTION(BlueprintCallable)
    void GetButtonGuideFlag();
    
    UFUNCTION(BlueprintCallable)
    void DelBfPlayingPrevious();
    
    UFUNCTION(BlueprintCallable)
    void DelBfPlayingNext();
    
    UFUNCTION(BlueprintCallable)
    void DelBfOpeningWindow();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyWindow();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyTitleText();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyTipsID();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyPagePrivious();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyPageNext();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyPageIndex();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyMainContent();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyGuideText();
    
    UFUNCTION(BlueprintCallable)
    void DelBfClosingWindow();
    
    UFUNCTION(BlueprintCallable)
    bool CloseWindow();
    
};

