#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EMouseCursorShowMode.h"
#include "EPadButton.h"
#include "InputDeviceManager.generated.h"

class UAppPad;
class UDataTable;
class UInputDebugStopListener;
class UInputDeviceSlot;
class UInputSystemListener;

UCLASS(Blueprintable)
class UInputDeviceManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAppPad* padOriginal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAppPad*> padList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UInputDeviceSlot*> m_InputDeviceSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputSystemListener* SystemListener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputDebugStopListener* m_pInputDebugStopListener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> InputConfigs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* InputConfigKeyboard;
    
public:
    UInputDeviceManager();

    UFUNCTION(BlueprintCallable)
    void TouchInputBp(EPadButton btn);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseCursorBp(EMouseCursorShowMode mode);
    
    UFUNCTION(BlueprintCallable)
    void AllowMouseDecideBp(bool sw);
    
};

