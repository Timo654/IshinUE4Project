#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "Components/RichTextBlockDecorator.h"
#include "MacanRichTextBlockImageDecorator.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UMacanRichTextBlockImageDecorator : public URichTextBlockDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ImageSet;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSlateBrush m_keyBrushs[16];
    
public:
    UMacanRichTextBlockImageDecorator();

};

