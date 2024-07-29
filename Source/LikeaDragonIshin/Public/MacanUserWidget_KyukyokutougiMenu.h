#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_KyukyokutougiMenu.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_KyukyokutougiMenu : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UMacanUserWidget_KyukyokutougiMenu();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDetailCursor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCategoryCursor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetWindowNewText(const FString& text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibleMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMenuIcon(int32 category_index, int32 detail_index, bool is_new, bool is_played, bool is_clear);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetInformation(const FString& Kind, const FString& Player, const FString& Detail);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDetailName(int32 Index, int32 detail_index, const FString& in_name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCompletedCategoryID(int32 in_kind);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCategoryName(int32 Index, const FString& in_name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RecoverCategoryAfterSelected();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeOutNextSubject();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeOutCategoryComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeOutAllComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeInNextSubject();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeInCategoryComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeInAllComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DecideDetail();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DecideCategory();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DeactiveMenu();
    
};

