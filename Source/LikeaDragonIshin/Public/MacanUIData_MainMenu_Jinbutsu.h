#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ECorrelationCharacter.h"
#include "ECorrelationOrganization.h"
#include "EUIResultOnOrOff.h"
#include "EUIState.h"
#include "MacanUIData.h"
#include "MacanUIData_MainMenu_Jinbutsu.generated.h"

class UDataTable;
class UMUW_CorrelationDiagram;

UCLASS(Blueprintable)
class UMacanUIData_MainMenu_Jinbutsu : public UMacanUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState state_Base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState state_Win;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool is_finish_fade_in_base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool is_finish_fade_out_base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_jinbutsu_index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector2D cursor_position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ECorrelationCharacter selectCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ECorrelationOrganization selectOrganization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMUW_CorrelationDiagram* currentDiagramWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool isSelectingAny;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText explanationText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<float> cursorMoveRange;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_pCorrelationTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_pCorrelationGroupTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_pCorrelationArrowTable;
    
public:
    UMacanUIData_MainMenu_Jinbutsu();

    UFUNCTION(BlueprintCallable)
    void SetExplanationText(const FText& InText);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirty_Win(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirty_ModeChange(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirty_Cursor(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirty_Base(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirty(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    FString GetPersonRowNameText();
    
    UFUNCTION(BlueprintCallable)
    FString GetGroupRowNameText();
    
    UFUNCTION(BlueprintCallable)
    void DelDirty_Win();
    
    UFUNCTION(BlueprintCallable)
    void DelDirty_ModeChange();
    
    UFUNCTION(BlueprintCallable)
    void DelDirty_Cursor();
    
    UFUNCTION(BlueprintCallable)
    void DelDirty_Base();
    
};

