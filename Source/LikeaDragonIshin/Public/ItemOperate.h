#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EItemAbilityRarity.h"
#include "EItemAbilityType.h"
#include "ItemOperate.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class AItemOperate : public AActor {
    GENERATED_BODY()
public:
    AItemOperate(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsItemKindEquipFromNumId(int32 item_id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsItemKindEquipFromItemId(FName item_id);
    
    UFUNCTION(BlueprintCallable)
    static bool IsDlcItemID(int32 item_id);
    
    UFUNCTION(BlueprintCallable)
    static TSoftObjectPtr<UTexture2D> GetWeaponZoomIconFromNumId(int32 item_id);
    
    UFUNCTION(BlueprintCallable)
    static TSoftObjectPtr<UTexture2D> GetWeaponZoomIconFromItemId(FName item_id);
    
    UFUNCTION(BlueprintCallable)
    static TSoftObjectPtr<UTexture2D> GetWeaponSilhouetteIconFromNumId(int32 item_id);
    
    UFUNCTION(BlueprintCallable)
    static TSoftObjectPtr<UTexture2D> GetWeaponSilhouetteIconFromItemId(FName item_id);
    
    UFUNCTION(BlueprintCallable)
    static TSoftObjectPtr<UTexture2D> GetWeaponDetailIconFromNumId(int32 item_id);
    
    UFUNCTION(BlueprintCallable)
    static TSoftObjectPtr<UTexture2D> GetWeaponDetailIconFromItemId(FName item_id);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetUniqueMarkFromNumId(int32 item_id, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetUniqueMarkFromItemId(FName item_id, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static EItemAbilityType GetUniqueAbilityEnumFromItemId(FName item_id, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetRarityFromNumId(int32 item_id);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetRarityFromItemId(FName item_id);
    
    UFUNCTION(BlueprintCallable)
    static TSoftObjectPtr<UTexture2D> GetPictSoftTexturePtrFromNumIdLarge(int32 item_id);
    
    UFUNCTION(BlueprintCallable)
    static TSoftObjectPtr<UTexture2D> GetPictSoftTexturePtrFromNumId(int32 item_id);
    
    UFUNCTION(BlueprintCallable)
    static TSoftObjectPtr<UTexture2D> GetPictSoftTexturePtrFromItemId(FName item_id);
    
    UFUNCTION(BlueprintCallable)
    static UTexture2D* GetMarkTextureFromInt(int32 mark_id);
    
    UFUNCTION(BlueprintCallable)
    static UTexture2D* GetMarkTextureFromEItemAbilityS(EItemAbilityType mark_id);
    
    UFUNCTION(BlueprintCallable)
    static UTexture2D* GetMarkTextureFromEItemAbility(EItemAbilityType mark_id);
    
    UFUNCTION(BlueprintCallable)
    static UTexture2D* GetMarkTextureFile(int32 mark_id);
    
    UFUNCTION(BlueprintCallable)
    static TSoftObjectPtr<UTexture2D> GetMarkSoftTexturePtrFromEItemAbilityS(EItemAbilityType mark_id);
    
    UFUNCTION(BlueprintCallable)
    static TSoftObjectPtr<UTexture2D> GetMarkSoftTexturePtrFromEItemAbility(EItemAbilityType mark_id);
    
    UFUNCTION(BlueprintCallable)
    static FText GetMarkNameFromEItemAbility(EItemAbilityType mark_id);
    
    UFUNCTION(BlueprintCallable)
    static bool GetMarkIsKaku(EItemAbilityType markID);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetMarkFromNumId(int32 item_id);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetMarkFromItemId(FName item_id);
    
    UFUNCTION(BlueprintCallable)
    static FText GetMarkExplainFromEItemAbility(EItemAbilityType mark_id, EItemAbilityRarity skill_lv);
    
    UFUNCTION(BlueprintCallable)
    static FText GetItemNameFromNumId(int32 item_id);
    
    UFUNCTION(BlueprintCallable)
    static FText GetItemNameFromItemId(FName item_id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetItemKindMaxCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetItemKindFromNumId(int32 item_id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetItemKindFromItemId(FName item_id);
    
    UFUNCTION(BlueprintCallable)
    static FString GetItemIdFromNumber(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    static FText GetItemExplanationFromNumId(int32 item_id);
    
    UFUNCTION(BlueprintCallable)
    static FText GetItemExplanationFromItemId(FName item_id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetItemAllCount();
    
    UFUNCTION(BlueprintCallable)
    static UTexture2D* GetIconFromNumId(int32 item_id);
    
    UFUNCTION(BlueprintCallable)
    static UTexture2D* GetIconFromItemId(FName item_id);
    
    UFUNCTION(BlueprintCallable)
    static EItemAbilityType GetAbilityEnumFromItemId(FName item_id);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckArmProtectorFromNumber(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckArmProtector(FName ItemId);
    
};

