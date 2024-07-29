#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_CostumeMenu.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_CostumeMenu : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UMacanUserWidget_CostumeMenu();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisivleImage(bool invisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTypeName(int32 inIndex, const FText& inTypeName);
    
    UFUNCTION(BlueprintCallable)
    static void SetTargetCursor(int32 inIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDetail(const FText& inDetailText);
    
    UFUNCTION(BlueprintCallable)
    static void MoveParamCursor(bool inDir);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitItemMsg();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FocusOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Focus(int32 inIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestMenuItem();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeImage(UTexture2D* inTex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddMenuItem(const FText& inParamName, const FText& inTypeName);
    
};

