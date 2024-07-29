#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_Kaisou.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_Kaisou : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UMacanUserWidget_Kaisou();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateChapterCursorBP(int32 in_current, int32 in_next);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateAuthCursorBP(int32 in_current, int32 in_next);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartSceneCursorBP(int32 window_num);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupSceneNewIconBP(int32 in_idx, bool in_onoff);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupChapterVisibleNumBP(int32 in_num);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupChapterNewIconBP(int32 in_idx, bool in_onoff);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTextureVisible(int32 window_num, bool is_show);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTexture(int32 window_num, const TSoftObjectPtr<UTexture2D>& inText2D);
    
    UFUNCTION(BlueprintCallable)
    void SetIsFinish(bool is_finish);
    
    UFUNCTION(BlueprintCallable)
    void SetChapterCursorMouse(int32 chapter_num);
    
    UFUNCTION(BlueprintCallable)
    void SetAuthCursorMouse(int32 auth_num);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RecoverChapterCursorBP(int32 chapter_current);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeOutBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeInBP(int32 in_start_chapter, int32 in_cursor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndSceneCursorBP(int32 auth_current);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DecideSceneCursorBP(int32 auth_current);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DecideChapterCursorBP(int32 chapter_current);
    
    UFUNCTION(BlueprintCallable)
    void ClickCursor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeToChapterButtonGuideBP(bool is_chapter);
    
};

