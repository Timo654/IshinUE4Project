#pragma once
#include "CoreMinimal.h"
#include "ActionMinigame.h"
#include "ActionMiniFishing.generated.h"

class AAFishing_Circle;
class AActor;
class UInputDeviceListener;
class UMacanUIDataFishing;
class UMacanUserWidget_MgFishing;

UCLASS(Blueprintable)
class UActionMiniFishing : public UActionMinigame {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* m_pInputListener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMacanUIDataFishing* mp_ui;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_MgFishing* mp_cui;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_a_uki;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_a_circle;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_a_sao[6];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAFishing_Circle* m_mesh;
    
public:
    UActionMiniFishing();

};

