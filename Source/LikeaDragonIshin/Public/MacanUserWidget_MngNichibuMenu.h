#pragma once
#include "CoreMinimal.h"
#include "EMngNichibuResultType.h"
#include "MacanUserWidget.h"
#include "MngNichibuCourseItemInfo.h"
#include "MngNichibuMusicItemInfo.h"
#include "MacanUserWidget_MngNichibuMenu.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_MngNichibuMenu : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMngNichibuMusicItemInfo> musicItemList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMngNichibuCourseItemInfo> courseItemList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isPlayingSelectAnimation;
    
    UMacanUserWidget_MngNichibuMenu();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateJacketNotify(bool isLeft);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCourseNotify(int32 selectIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCourseListNotify(int32 selectIndex, int32 Score, EMngNichibuResultType result, int32 Level, bool isPlayed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateBGMNotify(int32 selectIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetJacketNotify(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeMusicSelectNotify(bool isIn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeMusicExplainNotify(bool isIn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeMusicDetailNotify(bool isIn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeJacketNotify(bool isIn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeFukidashiNotify(bool isIn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeCourseSelectNotify(bool isIn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeCorsorNotify(bool isIn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeBaseNotify(bool isIn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DrawCourseNotify(bool isIn);
    
};

