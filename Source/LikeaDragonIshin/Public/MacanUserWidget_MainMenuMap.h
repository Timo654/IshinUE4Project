#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_MainMenuMap.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class LIKEADRAGONISHIN_API UMacanUserWidget_MainMenuMap : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UMacanUserWidget_MainMenuMap();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TitleInOutTaxi(bool in, const FText& text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TitleInOut(bool in, UPARAM(Ref) FString& text1, UPARAM(Ref) FString& text2);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SubWinSetCurrent(int32 Index, bool Current);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SubWinListParam(int32 Top, int32 dispNum, int32 Num);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SubWinListClear();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SubWinListAdd(int32 iconKind, UPARAM(Ref) FString& text, bool Current);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SubWinInOut(bool in);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StreetInfo(UPARAM(Ref) FString& text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StreetFadeInOut(bool in);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShopInfo(const TSoftObjectPtr<UTexture2D>& tex, UPARAM(Ref) FString& Name, UPARAM(Ref) FString& Comment);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShopFadeInOut(bool in);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMapColor(FColor Color);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OperationInfo(bool shopOn, bool markerOn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MapCursorVisible(bool sw, FVector2D Pos);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void IconListClear();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void IconListAdd(int32 Kind, UPARAM(Ref) FString& text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeInOut(bool in, bool isTaxi);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DrawNotFound(bool sw);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CursorVisible(bool sw);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AreaInOut(bool in);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AreaInfo(int32 Index);
    
};

