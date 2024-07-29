#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "InputCoreTypes.h"
#include "EInputDeviceListenerPri.h"
#include "EKeyconfigSceneID.h"
#include "EPadButton.h"
#include "RumblePriority.h"
#include "Devil2BlueprintFunctionLibrary.generated.h"

class UAppPad;
class UInputDeviceListener;
class UObject;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API UDevil2BlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDevil2BlueprintFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void SwitchGameCamera();
    
    UFUNCTION(BlueprintCallable)
    static void SwitchCCameraDummy(bool sw, bool immediate);
    
    UFUNCTION(BlueprintCallable)
    static void ShowLoadingScreen();
    
    UFUNCTION(BlueprintCallable)
    static void SetNearClipPlane(float NewClipPlane);
    
    UFUNCTION(BlueprintCallable)
    static void SetFictionLogoStep(int32 st);
    
    UFUNCTION(BlueprintCallable)
    static void SetBits(UPARAM(Ref) int32& flag, int32 Mask);
    
    UFUNCTION(BlueprintCallable)
    static void SetBit(UPARAM(Ref) int32& flag, int32 bit);
    
    UFUNCTION(BlueprintCallable)
    static bool SequenceManagerIsActive();
    
    UFUNCTION(BlueprintCallable)
    static FName SequenceManagerGetID();
    
    UFUNCTION(BlueprintCallable)
    static void RumbleStop(const FString& ID);
    
    UFUNCTION(BlueprintCallable)
    static void RumblePlayJoint(const FString& ID, const FString& id_joint);
    
    UFUNCTION(BlueprintCallable)
    static void RumblePlay(const FString& ID, TEnumAsByte<RumblePriority> Priority);
    
    UFUNCTION(BlueprintCallable)
    static float ReviseEaseAlpha(float Alpha);
    
    UFUNCTION(BlueprintCallable)
    static bool ReqFictionLogo();
    
    UFUNCTION(BlueprintCallable)
    static EPadButton PadDecideButton();
    
    UFUNCTION(BlueprintCallable)
    static EPadButton PadCancelButton();
    
    UFUNCTION(BlueprintCallable)
    static bool IsFictionLogoFinish();
    
    UFUNCTION(BlueprintCallable)
    static UAppPad* InputDeviceManagerGetPad();
    
    UFUNCTION(BlueprintCallable)
    static void InputDeviceManagerDisconnect(UInputDeviceListener* listener);
    
    UFUNCTION(BlueprintCallable)
    static void InputDeviceManagerConnect(int32 DeviceID, UInputDeviceListener* listener, EInputDeviceListenerPri Priority, EKeyconfigSceneID Scene);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetNearClipPlane();
    
    UFUNCTION(BlueprintCallable)
    static EPadButton GetKeyconfigPadKey(EKeyconfigSceneID Scene, EPadButton Key);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FKey> GetKeyconfigFKeys(EKeyconfigSceneID Scene, EPadButton Key);
    
    UFUNCTION(BlueprintCallable)
    static FKey GetKeyconfigFKey(EKeyconfigSceneID Scene, EPadButton Key);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetDaytime();
    
    UFUNCTION(BlueprintCallable)
    static void FukubikiInsertAction();
    
    UFUNCTION(BlueprintCallable)
    static int32 FukubikiGetPrizeWinCounts(TArray<int32>& counts);
    
    UFUNCTION(BlueprintCallable)
    static UObject* FukubikiGetAction();
    
    UFUNCTION(BlueprintCallable)
    static void ClearBits(UPARAM(Ref) int32& flag, int32 Mask);
    
    UFUNCTION(BlueprintCallable)
    static void ClearBit(UPARAM(Ref) int32& flag, int32 bit);
    
    UFUNCTION(BlueprintCallable)
    static int32 CheckFictionLogoStep();
    
    UFUNCTION(BlueprintCallable)
    static bool CheckBootLogoFinish(bool fin);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckBootLogoAllow();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckBitsAll(int32 flag, int32 Mask);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckBits(int32 flag, int32 Mask);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckBit(int32 flag, int32 bit);
    
    UFUNCTION(BlueprintCallable)
    static void CCC_NoticePageEnd();
    
    UFUNCTION(BlueprintCallable)
    static float CalcHorizontalFovRad(float rad);
    
    UFUNCTION(BlueprintCallable)
    static float CalcHorizontalFov(float deg);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 BitToMask32(int32 bit);
    
    UFUNCTION(BlueprintCallable)
    static void AllowBootLogo(bool sw);
    
};

