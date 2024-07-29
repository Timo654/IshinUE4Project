#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "EPadButton.h"
#include "AppPad.generated.h"

class APlayerController;

UCLASS(Blueprintable)
class UAppPad : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerController* Controller;
    
public:
    UAppPad();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float y2(float mouseInput) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float y1(float mouseInput) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float x2(float mouseInput) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float x1(float mouseInput) const;
    
    UFUNCTION(BlueprintCallable)
    void set_lightbar2(FColor Color);
    
    UFUNCTION(BlueprintCallable)
    void set_lightbar(uint8 R, uint8 G, uint8 B);
    
    UFUNCTION(BlueprintCallable)
    void rumble2_stop();
    
    UFUNCTION(BlueprintCallable)
    void rumble2_start_f(float forceRate);
    
    UFUNCTION(BlueprintCallable)
    void rumble2_start(uint8 Force);
    
    UFUNCTION(BlueprintCallable)
    void rumble1_stop();
    
    UFUNCTION(BlueprintCallable)
    void rumble1_start_f(float forceRate);
    
    UFUNCTION(BlueprintCallable)
    void rumble1_start(uint8 Force);
    
    UFUNCTION(BlueprintCallable)
    void reset_lightbar();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Repeat2(TArray<EPadButton> buttons) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Repeat(EPadButton Button) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Push2(TArray<EPadButton> buttons) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Push(EPadButton Button) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Pull2(TArray<EPadButton> buttons) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Pull(EPadButton Button) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Now2(TArray<EPadButton> buttons) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Now(EPadButton Button) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float mouse_wheel(float Scale) const;
    
};

