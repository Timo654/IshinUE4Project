#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_BtlTutorialMain.generated.h"

class UMacanUserWidget_BtlTutorialUnit;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_BtlTutorialMain : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* v_box;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMacanUserWidget_BtlTutorialUnit*> subjectList;
    
public:
    UMacanUserWidget_BtlTutorialMain();

    UFUNCTION(BlueprintCallable)
    void Set(int32 idx, int32 NewCount);
    
    UFUNCTION(BlueprintCallable)
    void ResetSubject();
    
    UFUNCTION(BlueprintCallable)
    void on();
    
    UFUNCTION(BlueprintCallable)
    void off();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isEndCountAnim() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnd() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isDone(int32 idx) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isDestable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 getIdxMax() const;
    
    UFUNCTION(BlueprintCallable)
    void Count(int32 idx);
    
    UFUNCTION(BlueprintCallable)
    int32 AddSubject(const FText& text, int32 Num);
    
};

